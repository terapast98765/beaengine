#ifndef __CMD_LINE_HPP__
#define __CMD_LINE_HPP__

#include <string>

class cmd_line_c
{
public:
  cmd_line_c (int argc, char* argv []);

  // in case of dry run, only table_file is mandatory
  bool dry_run () const;

  std::string result_file () const;

  bool run_test () const;

  bool inspect_mode () const;

  std::string file_to_inspect () const;
  // use following if run_test is true
  
  std::string name () const;
  std::string comment () const;
  std::string table_file () const;
private:
  bool        m_dry_run;
  bool        m_run_test;
  bool        m_inspect;
  std::string m_result_file;
  std::string m_table_file;
  std::string m_name;
  std::string m_comment;
};


#endif
