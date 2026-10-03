#include <iostream>
#include <cstdlib>

using namespace std;

class Person {
  public:
    Person(int a) {
      this->age = a;
      this->name = "John";
    }

    Person() {
      Person(18);
    }

    ~Person() {
      cout << name << " vanished." << endl;
    }

    void display() {
      cout << "His name is: " << name << endl;
      cout << "His age is: " << age << endl;
    }

  private:
    string name;
    int age;
};

int main() {

  return 0;
}
