#include <iostream>
#include <cstdlib>

using namespace std;

class Employee {
  public:
    Employee& setEmployeeId(string id) {
      this->id = id;
      return *this;
    }
    Employee& setEmployeeName(string name) {
      this->name = name;
      return *this;
    }
    Employee& setNoHoursWork(int h) {
      this->workHourNumber = h;
      return *this;
    }
    Employee& setRatePerHour(int h) {
      this->hourRate = h;
      return *this;
    }
    string getEmployeeId() {
      return id;
    }
    string getEmployeeName() {
      return name;
    }
    int getEmployeeWorkHourNumber() {
      return workHourNumber;
    }
    int getEmployeeHourRate() {
      return hourRate;
    }
    double getTotalMonthlySalary() {
      return (double) workHourNumber * hourRate;
    }

  private:
  string  id, name;
  int     workHourNumber, hourRate;
};

int main()
{
  Employee a;
  int choice = -1;

  do {
    cout << "Enter a number between those choice: " << endl;
    cout << "1. set Employee Record." << endl;
    cout << "2. get Employee Record." << endl;
    cout << "3. Quit." << endl;

    cin >> choice;
    switch (choice) {
      case 1:
      
        break;
      case 2:

      case 3:
        cout << "Ending the conversation." << endl;
        break;
    }
  } while (choice != 3);


  return 0;
}
