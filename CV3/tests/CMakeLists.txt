# Vytvorenie testovacieho executable
add_executable(fifo_tests
        tests.cpp
)

# Linkovanie
target_link_libraries(fifo_tests PRIVATE
        fifo_lib
        GTest::gtest
        GTest::gtest_main
)

# Automatická registrácia testov
include(GoogleTest)
gtest_discover_tests(fifo_tests)