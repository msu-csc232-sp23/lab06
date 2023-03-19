# LAB06 - Working with Grammars

This lab is essentially Exercise 6 in Chapter 5 of our Walls & Mirrors textbook.

## Due Date

This assignment is due at 23:59:59 on Saturday, March 25, 2023.

## Background

Consider a language of words, where each word is a string of dots (`.`) and dashes (`-`). The following grammar describes this language:

```text
<word> = <dot> | <dash><word> | <word><dot>
<dot> = .
<dash> = -
```

In this lab you will work on some tasks related to the questions asked in Exercise 6 regrading this language.

### Advanced Reading

- Chapter 5: Recursion as a Problem-Solving Technique

## Objectives

Upon successful completion of this lab, the student can

- demonstrate an ability to understand a grammar by identifying strings that are a member of a language defined by the grammar
- reason about the validity of a given string matching a given grammar
- write a function that validates whether a given string is a member of a language prescribed by some grammar

## Tasks

1. Identify strings in a grammar
2. Create a word with certain characteristics
3. Implement a language validator

### Task 1

In this task, you are to answer part (a) of the exercise:

> Write all three-character strings that are in this language

1. Open the file `test_data.txt`.
2. Answer this question by writing each string on a separate line. When you write your answers, do not use any whitespace in between your dashes and dots.
3. When you have completed this task, toggle the `SKIP_TESTING_TASK_1` macro from `TRUE` to `FALSE`.
4. Build and execute the `test_task1` target to test your solution. Alternatively, you can run `ctest`.
5. When all the tests for this task pass, commit and push your changes to GitHub.

### Task 2

In this task, you are to answer part (c) of the exercise:

> Write a seven character string that contains more dashes than dots an is in the language.

1. Locate `TODO: Task 2.1` in `csc232.h`.
2. Assign your answer to the named constant (`TASK2_ANSWER`).
3. When you have completed this task, toggle the `SKIP_TESTING_TASK_2` macro from `TRUE` to `FALSE`. Also, be sure to erase the `TODO` comment when you have completed this step.
4. Build and execute the `test_task2` target to test your solution. Alternatively, you can run `ctest`.
5. When all the tests for this task pass, commit and push your changes to GitHub.

### Task 3

In this task, you are taking part (d) to the next level. Rather than simply writing pseduocode, you will actually implement the function

```c++
/**
 * @brief Determine if a given string is in the language prescribed by Exercise 6.
 * @param str a string to assess for membership in our language
 * @return true if the given string is in our language, false otherwise.
 * @post str remains unchanged upon completion of this function.
bool lab06::isIn(std::string str);
```

1. Locate `TODO: Task 3.1` in `csc232.cpp`.
2. Implement your grammar checker (`isIn()` function definition).
3. When you have completed this task, toggle the `SKIP_TESTING_TASK_3` macro from `TRUE` to `FALSE`. Also, remove the `TODO:` comment related to this task.
4. Build and execute the `test_task3` target to test your solution. Alternatively, you can run `ctest`.
5. When all the tests for this task pass, commit and push your changes to GitHub.

## Submission Details

Before submitting your assignment, be sure you have pushed all your changes to GitHub. If this is the first time you're pushing your changes, the push command will look like:

```bash
git push -u origin develop
```

If you've already set up remote tracking (using the `-u origin develop` switch), then all you need to do is type:

```bash
git push
```

As usual, prior to submitting your assignment on Microsoft Teams, be sure that you have committed and pushed your final changes to GitHub. Once your final changes have been pushed, create a pull request that seeks to merge the changes in your `develop` branch into your `trunk` branch. Once your pull request has been created, submit the URL of your assignment _repository_ (i.e., _not_ the URL of the pull request) on the Teams Assignment. Please note: the timestamp of the submission on Teams is used to assess any late penalties if and when warranted, _not_ the date/time you create your pull request. **No exceptions will be granted for this oversight**.

### Grading Rubric

This assignment is worth **3 points**.

| Criteria           | Exceeds Expectations         | Meets Expectations                  | Below Expectations                  | Failure                                        |
|--------------------|------------------------------|-------------------------------------|-------------------------------------|------------------------------------------------|
| Pull Request (20%) | Submitted early, correct url | Submitted on-time; correct url      | Incorrect URL                       | No pull request was created or submitted       |
| Code Style (20%)   | Exemplary code style         | Consistent, modern coding style     | Inconsistent coding style           | No style whatsoever or no code changes present |
| Correctness^ (60%) | All unit tests pass          | At least 80% of the unit tests pass | At least 60% of the unit tests pass | Less than 50% of the unit tests pass           |

^ _The Google Test unit runner will calculate the correctness points based purely on the fraction of tests passed_.

### Late Penalty

- In the first 24-hour period following the due date, this lab will be penalized 0.6 point meaning the grading starts at 2.4 (out of 3 total possible) points.
- In the second 24-hour period following the due date, this lab will be penalized 1.2 points meaning the grading starts at 1.8 (out of 3 total possible) points.
- After 48 hours, the assignment will not be graded and thus earns no points, i.e., 0 out of 3 possible points.

### Second Submissions

Assuming you have submitted your first solution on time, you will be allowed to resubmit an updated solution that is based upon the feedback received from your first submission. You will have ten (10) days after your grade is returned to you to resubmit. After the ten (10) days, the grade will remain frozen, regardless if you make another attempt.

Again, this policy applies only to the student that has submitted a concerted effort as their first submission by the assignment due date.
