/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task3.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 3 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 3" * doctest::description("A suite of tests for Task 3") * doctest::skip(SKIP_TESTING_TASK_3))
{
#if !SKIP_TESTING_TASK_3
    SCENARIO("Evaluating Task 3")
    {
        GIVEN("A vector of dot strings")
        {
            std::vector<std::string> dots{".", "..", "...", "....", ".....", "......", "......."};
            WHEN("some stimulus occurs")
            {
                THEN("some outcome is expected")
                {
                    for (auto const &word : dots)
                    {
                        REQUIRE(lab06::isIn(word));
                    }
                }
            }
        }
        GIVEN("A vector of dash strings")
        {
            std::vector<std::string> dots{"-", "--", "---", "----", "-----", "------", "-------"};
            WHEN("some stimulus occurs")
            {
                THEN("some outcome is expected")
                {
                    for (auto const &word : dots)
                    {
                        REQUIRE_FALSE(lab06::isIn(word));
                    }
                }
            }
        }
        GIVEN("A vector of dot-dash strings")
        {
            std::vector<std::string> dots{
                ".", "-.", "--.", "---.", "----.", "-----.", "------.",
                "-.", "-..", "-...", "-....", "-.....", "-......"};
            WHEN("some stimulus occurs")
            {
                THEN("some outcome is expected")
                {
                    for (auto const &word : dots)
                    {
                        REQUIRE(lab06::isIn(word));
                    }
                }
            }
        }
    }
#endif
}
