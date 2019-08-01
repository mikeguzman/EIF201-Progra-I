/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Implementations of the GradeBook member-function
 *                  definitions.
 *
 *        Created:  29/07/2019
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include "GradeBook.h"

#include <iostream>
#include <string>

GradeBook::GradeBook(const std::string &name) { setCourseName(name); }
// SETTERS
// ensure coursename does not exceed 25 chars
void GradeBook::setCourseName(const std::string &name) {
    if (name.length() <= 25) { courseName = name; }

    if (name.length() > 25) {
        courseName = name.substr(0, 25);

        std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n";
        std::cout << "Limiting courseName to first 25 characters.\n"
                  << std::endl;
    }
}
// GETTERS
std::string GradeBook::getCourseName() { return courseName; }
// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
    std::cout << "Welcome to the grade book for\n"
              << getCourseName() << "!" << std::endl;
}
