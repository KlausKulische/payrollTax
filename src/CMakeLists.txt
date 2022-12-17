add_executable(payrollTax main.cpp functional_helper.cpp)

target_compile_features(payrollTax PRIVATE cxx_std_20)

#target_link_libraries(payrollTax PRIVATE
#  ${CMAKE_SOURCE_DIR}/src/functional_helper.hpp)

