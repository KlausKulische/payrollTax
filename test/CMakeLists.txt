add_executable(cpp_test testfile.cpp)
target_link_libraries(cpp_test lib)

add_test(
  NAME cpp_test
  COMMAND "$<TARGET_FILE:cpp_test>"
  )

