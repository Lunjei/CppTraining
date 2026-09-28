#include "Student.h"

#include <iostream>
#include <string>

using namespace std;

Student::Student() : Student_ID("jsnow"), Student_Name("John")
{}

Student::Student(string Student_Name) : Student_Name(Student_Name), Student_ID(Student_Name[0] + "snow")
{}

double Student::ctotal(const Student &S)
{
  S.Total_Score = S.OOP2_Score + S.Maths_Score + S.English_Score;
  return Total_Score;
}

void Student::Takedata(const Student &S)
{
  cout << "Your ID is: ";
  cin >> S.Student_ID;
  cout << "Your name is:";
  cin >> S.Student_Name;
  cout << "Your OOP2 score is:";
  cin >> S.OOP2_Score;
  cout << "Your Maths score is:";
  cin >> S.Maths_Score;
  cout << "Your English score is:";
  cin >> S.English_Score;
  ctotal(S);
}

void Student::Showdata(const Student &S)
{
  cout << "Your ID is: " << S.Student_ID << endl;
  cout << "Your name is: " << S.Student_Name << endl;
  cout << "Your OOP2 Score is: " << S.OOP2_Score << endl;
  cout << "Your Maths Score is: " << S.Maths_Score << endl;
  cout << "Your English Score is: " << S.English_Score << endl;
  cout << "Your Total Score is: " << S.Total_Score << endl;
}
