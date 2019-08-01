/*
 * =====================================================================================
 *
 *       Filename:  MainAppInterface.cpp
 *
 *    Description:  GradeBook class demonstration after separating
 *                  its interface from its implementation.
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

int main(int argc, const char *argv[]) {
    GradeBook gradeBook1("CS101 Introduction to C++ Programming.");
    GradeBook gradeBook2("CS102 Data Structures in C++.");

    // display initial values of courseName for each GradeBook
    std::cout << "gradeBook1 created for course: "
              << gradeBook1.getCourseName();
    std::cout << "\ngradeBook2 created for course: "
              << gradeBook2.getCourseName() << std::endl;
    return 0;
}
