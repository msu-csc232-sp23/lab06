/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Useful libraries and function declarations for CSC232 assignments.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#ifndef MSU_CSC232_SP23_H
#define MSU_CSC232_SP23_H

#define FALSE 0
#define TRUE !FALSE
// Set this macro to the value of FALSE to test Task 1
#define SKIP_TESTING_TASK_1 TRUE
// Set this macro to the value of FALSE to test Task 2
#define SKIP_TESTING_TASK_2 TRUE
// Set this macro to the value of FALSE to test Task 3
#define SKIP_TESTING_TASK_3 TRUE
// Set this macro to the value of FALSE to test Task 4
#define SKIP_TESTING_TASK_4 TRUE
// Set this macro to the value of FALSE to test Task 5
#define SKIP_TESTING_TASK_5 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

// Provide shortened names for common objects found in std namespace
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

namespace lab06
{
    // TODO: TASK 2.1 - Assign your answer to this task to the named contant below.
    static const string TASK2_ANSWER{ "Replace me with your answer" };

    /**
     * @brief Determine if a given string is in the language prescribed by Exercise 6.
     * 
     * @param str a string to assess for membership in our language
     * @return true if the given string is in our language, false otherwise.
     * @post str remains unchanged upon completion of this function.
     */
    bool isIn( const string& str );
}

#endif // MSU_CSC232_SP23_H
