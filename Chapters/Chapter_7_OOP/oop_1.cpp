// Employee class

#include <iostream>
#include <string>

using namespace std;

// The class below serves as the "blueprint" for all objects
class Employee{
  
    // without specifying the modifier, the class is private. 
    // However, it can be changed using other modifiers.
   public: 
    string Name;
    string Company; 
    int Age;

    // You can add other stuff as need be

    // Method
    void IntroduceYourself(){
        cout << "Name - "  << Name << endl;
        cout << "Company - "  << Company << endl;
        cout << "Age - "  << Age << endl;
    }

    // Create constructor
    Employee(string name, string company, int age) {          // constructs the object of employee
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    // Create an object
    Employee employee1 = Employee("Patricia", "BSU", 24);
    // employee1.Name = "Patricia";  // do this when using default contructor
    // employee1.Company = "BSU";
    // employee1.Age = 24;
    employee1.IntroduceYourself();

    // Create object 2
    Employee employee2 = Employee("Lee", "BSU", 25);
    employee2.IntroduceYourself();



}