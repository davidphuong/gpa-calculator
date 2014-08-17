#include <iostream>
#include <string>

#include "GPACalculator.h"

int main(int argc, char* argv[]) {
    GPACalculator gpa_calc;
    std::string units;
    std::string grade;

    std::cout << "Welcome to my GPA calculator" << std::endl;
    std::cout << "Input the number of units followed by the grade (press 'q' to finish):" << std::endl;
    std::cin >> units;
    if (units != "q") {
        std::cin >> grade;
        gpa_calc.add(units, grade);

        std::cout << "Input the number of units followed by the grade (press 'q' to finish):" << std::endl;
        while (std::cin >> units) {
            if (units == "q") {
                break;
            }
            std::cin >> grade;
            gpa_calc.add(units, grade);
            std::cout << "Input the number of units followed by the grade (press 'q' to finish):" << std::endl;
        }
    }

    std::cout << "Your GPA score is: " << gpa_calc.calculate() << std::endl;

    std::cout << "Thank you for using my GPA calculator!" << std::endl;

    return 0;
}
