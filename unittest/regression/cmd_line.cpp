#include <stdexcept>
#include <vector>
#include "unittest/regression/cmd_line.hpp"
#include "unittest/thirdparty/tclap/CmdLine.h"


cmd_line_c::cmd_line_c (int argc, char* argv [])
  : m_dry_run  (false),
    m_run_test (true),
    m_inspect  (false)
{
  using namespace TCLAP;
  CmdLine cmd ("BeaEngine regression test utility", ' ', "0.1");

  SwitchArg a_dry_run  ("d", "dry_run" , "Dry run only.", false);
  SwitchArg a_run_test ("r", "run_test", "Run test and update results", false);
  SwitchArg a_inspect  ("s", "inspect" , "Inspect results", false); 

  std::vector <Arg*> fv;
  fv.push_back (&a_dry_run);
  fv.push_back (&a_run_test);
  fv.push_back (&a_inspect);
  cmd.xorAdd (fv);

  ValueArg <std::string> a_result ("o", "output", "Zip results data base", false, "", "filename", cmd);
  ValueArg <std::string> a_table  ("i", "input", "Input file", false, "", "filename", cmd);
  ValueArg <std::string> a_name   ("n", "name",  "Name of this test", false, "", "string", cmd);
  ValueArg <std::string> a_comment ("m", "comment",  "Comment for this test", false, "", "string", cmd);

  cmd.parse( argc, argv );
  
  if (a_dry_run.isSet ())
    {
      m_dry_run  = true;
      m_inspect  = false;
      m_run_test = false;
    }
  if (a_inspect.isSet ())
    {
      m_dry_run  = false;
      m_inspect  = true;
      m_run_test = false;
    }

  if (m_dry_run)
    {
      if (a_result.isSet ())
	{
	  throw std::runtime_error ("Zip results data base is meaningless for dry run");
	}
      if (a_name.isSet ())
	{
	  throw std::runtime_error ("Test name is meaningless for dry run");
	}
      if (a_comment.isSet ())
	{
	  throw std::runtime_error ("Test comment is meaningless for dry run");
	}
      if (!a_table.isSet ())
	{
	  throw std::runtime_error ("Table is required for dry run");
	}
      m_table_file = a_table.getValue ();
      return;
    }
  if (m_run_test)
    {
      if (!a_result.isSet ())
	{
	  throw std::runtime_error ("Zip results data base is required");
	}
      if (!a_name.isSet ())
	{
	  throw std::runtime_error ("Test name is required");
	}
      if (!a_comment.isSet ())
	{
	  throw std::runtime_error ("Test comment is required");
	}
      if (!a_table.isSet ())
	{
	  throw std::runtime_error ("Table is required for dry run");
	}
      m_result_file = a_result.getValue ();
      m_name        = a_name.getValue ();
      m_comment     = a_comment.getValue ();
      m_table_file  = a_table.getValue ();
      return;
    }

  if (m_inspect)
    {
      if (a_result.isSet ())
	{
	  throw std::runtime_error ("Output file is meaningless for inspection mode");
	}
      if (a_name.isSet ())
	{
	  throw std::runtime_error ("Test name is meaningless for inspection mode");
	}
      if (a_comment.isSet ())
	{
	  throw std::runtime_error ("Test comment is meaningless for inspection mode");
	}
      if (!a_table.isSet ())
	{
	  throw std::runtime_error ("Input file name is required for inspection mode");
	}
      m_table_file = a_table.getValue ();
      return;
    }
}
// -----------------------------------------------------
// in case of dry run, only table_file is mandatory
bool cmd_line_c::dry_run () const
{
  return m_dry_run;
}
// -----------------------------------------------------
std::string cmd_line_c::result_file () const
{
  return m_result_file;
}
// -----------------------------------------------------
bool cmd_line_c::run_test () const
{
  return m_run_test;
}
// -----------------------------------------------------
bool cmd_line_c::inspect_mode () const
{
  return m_inspect;
}
// -----------------------------------------------------
std::string cmd_line_c::file_to_inspect () const
{
  return m_table_file;
}
// -----------------------------------------------------
std::string cmd_line_c::name () const
{
  return m_name;
}
// -----------------------------------------------------
std::string cmd_line_c::comment () const
{
  return m_comment;
}
// -----------------------------------------------------
std::string cmd_line_c::table_file () const
{
  return m_table_file;
}
// -----------------------------------------------------
