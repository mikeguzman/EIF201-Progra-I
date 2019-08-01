/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.h
 *
 *    Description:  GradeBook class definition.
 *                  This file presents GradeBook's public interface without
 *                  revealing the implementations of GradeBook's member
 *                  functions, which are defined in GradeBook.cpp
 *
 *        Created:  29/07/2019
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#pragma once

#include <string>

class GradeBook {
 private:
    std::string courseName;

 public:
    explicit GradeBook(const std::string &);

    // SETTERS
    void setCourseName(const std::string &);

    // GETTERS
    std::string getCourseName();

    void displayMessage();
};
