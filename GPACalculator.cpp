#include "GPACalculator.h"
#include <iostream>

#include <cstdlib>

GPACalculator::GPACalculator() :
    m_units_x_grade_points(0),
    m_total_units(0)
{

}

void GPACalculator::add(int units, std::string grade) {
    double grade_point = 0;
    if (grade == "HD") {
        grade_point = 7;
    } else if (grade == "D") {
        grade_point = 6;
    } else if (grade == "C") {
        grade_point = 5;
    } else if (grade == "P") {
        grade_point = 4;
    } else if (grade == "F") {
        grade_point = 1.5;
    }

    m_total_units += units;
    m_units_x_grade_points += units * grade_point;
}

void GPACalculator::add(std::string units, std::string grade) {
    double grade_point = 0;
    if (grade == "HD") {
        grade_point = 7;
    } else if (grade == "D") {
        grade_point = 6;
    } else if (grade == "C") {
        grade_point = 5;
    } else if (grade == "P") {
        grade_point = 4;
    } else if (grade == "F") {
        grade_point = 1.5;
    }

    int int_units = atoi(units.c_str());

    m_total_units += int_units;
    m_units_x_grade_points += int_units * grade_point;
}

void GPACalculator::add(int units, int grade_point) {
    m_total_units += units;
    m_units_x_grade_points += units * grade_point;
}

double GPACalculator::calculate() {
    return (m_units_x_grade_points / m_total_units);
}
