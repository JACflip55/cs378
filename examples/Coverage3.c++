// -------------
// Coverage3.c++
// -------------

// http://gcc.gnu.org/onlinedocs/gcc/Gcov.html

#include <cassert>  // assert
#include <iostream> // cout, endl

#include "gtest/gtest.h"

#include "Collatz2.h"

TEST(CoverageFixture, test) {
    ASSERT_EQ(cycle_length(3), 8);}

/*
% g++-4.8 -fprofile-arcs -ftest-coverage -pedantic -std=c++11 -Wall Coverage3.c++ -o Coverage3 /usr/local/lib/gtest_main.a



% Coverage3
Running main() from gtest_main.cc
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CoverageFixture
[ RUN      ] CoverageFixture.test
[       OK ] CoverageFixture.test (0 ms)
[----------] 1 test from CoverageFixture (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (0 ms total)
[  PASSED  ] 1 test.



% gcov -b Coverage3.c++ | grep -A 5 "File 'Coverage2.h'"
File './Collatz2.h'
Lines executed:100.00% of 9
Branches executed:100.00% of 8
Taken at least once:75.00% of 8
No calls
./Collatz2.h:creating 'Collatz2.h.gcov'
*/
