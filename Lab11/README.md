# Classes: Separation of the interface from implementation constructors and destructors.

Remind: + for public - for private.

1. class Person:
Person
---
- Name: String 
- Age: int
---
+ Display()
<constructor> + Person()
<constructor> + Person(a: int)

2. class Records to hod personnel records.
Records
---
- name: String
- salary: float
- dateOfBirth: String
---
<constructor> + Records()
<constructor> + Records(n: String, s: float, b: String)
- setName(n: String)
- setSalary(s: float)
- setBirthDate(b: String)

Create the object 2 ways, one to refer member function through pointer
the other object will be accessing through dot operator.

3. class Account that represent your bank account.
- It contains information like name(string), account number(string), and balance(float). (All are private)
- Add constructors and destructors.
- Create some objects.
- Write a code to display message when it is created and similarly display message when it will be destroyed.

4. Write C++ header file Triangle.h with class Triangle with data members and member functions as per following class diagram. In Triangle.h fil only implement get and set methods. (Consider right angle Triangle)
Triangle
---
- Height: double
- width: double
---
<<constructor>> + Triangle(double, double)
<<destructor>> + Triangle() # +~ stands for destructor
+ getHeight(): double
+ setHeight(double)
+ setBase(): double
+ getBase(double)
+ getArea(): double
+ getPerimeter(): double

default values for constructor will be 0 on height and width.


