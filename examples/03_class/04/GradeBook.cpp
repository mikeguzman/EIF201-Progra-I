/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  GradeBook member-function definitions.
 *                  This file contains implementations of the member functions
 *                  prototyped in GradeBook.h
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

// Constructor
GradeBook::GradeBook(const std::string &name) { setCourseName(name); }
// SETTERS
void GradeBook::setCourseName(const std::string &name) { courseName = name; }
// GETTERS
std::string GradeBook::getCourseName() { return courseName; }
// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
    std::cout << "Welcome to the grade book for\n"
              << getCourseName() << "!" << std::endl;
}
