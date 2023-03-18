/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task1.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 1 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 1" * doctest::description("A suite of tests for Task 1") * doctest::skip(SKIP_TESTING_TASK_1))
{
#if !SKIP_TESTING_TASK_1    
    SCENARIO("Evaluating Task 1")
    {
        GIVEN("a student has completed task 1") {
            const char* search_string = "...";
            const char* filename   = "test_data.txt";
            std::ifstream input_stream{ filename, std::ios::in };
            if (!input_stream)
            {
                FAIL_CHECK("Test source file could not be opened!");
                exit(EXIT_FAILURE);
            }

            WHEN("I read their solution") {
                // Read the entire file into memory
                std::string file_contents;
                std::string current_line;
                while ( getline( input_stream, current_line ) )
                {
                    file_contents += current_line + '\n';
                }
                input_stream.close();   

                THEN("it contains the expected outcomes") 
                {
                    size_t pos = file_contents.find(search_string);
                    REQUIRE_MESSAGE((static_cast<int>(pos) > 0), "One of the expected outcomes was not found in your solution");
                }
            }
        }
    }
#endif    
}
