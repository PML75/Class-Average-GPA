#include <vector>
#include "calculate_avg.h"

double CalculateAverage(const std::vector<double> &student_grades) {
  double tSum;
  for (int i = 0; i < student_grades.size(); i++)
  {
    tSum += student_grades[i];
  }
  tSum = tSum / student_grades.size();

  return student_grades.empty() ? 0 : tSum;
}
