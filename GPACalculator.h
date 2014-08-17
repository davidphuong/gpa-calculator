#ifndef GPACALCULATOR_H
#define GPACALCULATOR_H

#include <string>

class GPACalculator {
    public:
        GPACalculator();

        // Calculates (Units x Grade Points) value
        void add(int units, std::string grade);
        void add(std::string units, std::string grade);
        void add(int units, int grade_point);

        // Calculates the current GPA
        double calculate();

    private:
        double m_units_x_grade_points;
        int m_total_units;
};

#endif
