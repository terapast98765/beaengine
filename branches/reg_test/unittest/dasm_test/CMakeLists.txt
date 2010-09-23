find_package (Threads)

set (target dasm_test)

add_executable (${target} main.cpp)

set (link_libs ${BEA_TARGET})

if (CMAKE_USE_PTHREADS_INIT)
if (UNIX)
list (APPEND link_libs pthread)
endif ()
endif ()

target_link_libraries (${target} google_test ${link_libs})

if (NOT optBUILD_DLL)
  set_target_properties (${target} PROPERTIES COMPILE_FLAGS "-DBEA_ENGINE_STATIC") 
endif ()


ADD_TEST(DasmTest "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/dasm_test")
