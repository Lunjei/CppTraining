#include <iostream>
#include <cstdlib>

using namespace std;

class Student {
  public:
    void takeData() {
      cout << "What's your: " << endl;
      cout << "Id? ";
      cin >> id;
      cout << "Name? ";
      cin >> name;
      cout << "OOP2 Score: ";
      cin >> OOP2;
      cout << "Maths Score: ";
      cin >> maths;
      cout << "English Score: ";
      cin >> english;
      ctotal();
    }

    void showData()
    {
      cout << "You are " << name << " and your Id is " << id << "." << endl;
      cout << "Your total score is " << total << "." << endl;
      cout << "Composed of OOP2: " << OOP2 << endl;
      cout << "And maths: " << maths << endl;
      cout << "And english: " << english << endl;
    }

  private:
    string id, name;
    double OOP2, maths, english, total;

    double ctotal() {
      total = OOP2 + maths + english;
      return total;
    }
};

int main()
{
  Student julien;
  julien.takeData();
  julien.showData();

  return 0;
}
