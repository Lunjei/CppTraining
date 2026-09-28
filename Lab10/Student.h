#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
  private:
    std::string Student_ID;
    std::string Student_Name;
    double OOP2_Score;
    double Maths_Score;
    double English_Score;
    double Total_Score;
    double ctotal(const Student &S);

  public:
    void Showdata(const Student &S);
    void Takedata(const Student &S);
};
#endif
