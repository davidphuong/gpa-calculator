all: driver.o GPACalculator.o
	g++ driver.o GPACalculator.o -o gpa-calc

driver.o: driver.cpp
	g++ -c driver.cpp

GPACalculator.o: GPACalculator.h GPACalculator.cpp
	g++ -c GPACalculator.cpp

clean:
	rm -f *.o gpa-calc
