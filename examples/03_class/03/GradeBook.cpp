/*
 * =====================================================================================
 *
 *       Filename:  fig03.10.cpp
 *
 *    Description:  Including class GradeBook for file GradeBook.h
 *                  for use in main.
 *
 *        Created:  29/07/2019
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include <iostream>
#include "GradeBook.h"

// function main begins program excution
int main(int argc, const char *argv[]) {
    // create two GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("Cs102 Data Structures in C++");

    // display initial value of courseName for each GradeBook
    std::cout << "gradeBook1 created for course: "
              << gradeBook1.getCourseName();
    std::cout << "\ngradeBook2 created for course: "
              << gradeBook2.getCourseName() << std::endl;
    return 0;
}
