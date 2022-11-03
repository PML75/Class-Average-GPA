#include <iomanip>
#include <iostream>
#include <vector>
#include "calculate_avg.h"

using namespace std;

int main() {
  int num_students;
  std::cout << "How many students are in your class? ";
  std::cin >> num_students;

  if (num_students <= 0) {
    std::cout << "You have no students!\n";
  } else {

    std::vector<double> tStudents(num_students);

    std::cout << "Enter the GPA for the students in your class (0.0 - 4.0)\n";

    for (int i = 0; i < num_students; i++) 
    {

      std::cout << "Enter the GPA for student #" << i + 1 << ": ";
      double tGPA;
      cin >> tGPA;
      tStudents[i] = tGPA;
    }
    double average;

    average = CalculateAverage(tStudents);

    std::cout << "Class average: " << std::setprecision(2) << std::fixed
              << average << "\n";
  }

  return 0;
}
