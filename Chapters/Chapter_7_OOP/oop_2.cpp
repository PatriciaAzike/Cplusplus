// Employee class

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// The class below serves as the "blueprint" for all objects
class Employee{

private:   // Encapsulate them in a private class 
    string Name;
    string Company; 
    int Age;

   public:  // can be accessed by all members
    // Methods

    // Setter for name
    void setName(string name){
        //if (isalpha(name))
        Name = name;
    }

    // Getter for company
    string getName(){
        return Name;
    }

    // Setter for company
    void setCompany(string company){
        Company = company;
    }

    // Getter for company
    string getCompany(){
        return Company;
    }

    // Setter for age
    void setAge(int age){
        if (age>=18) // will not use any age less than 18
        Age = age;
    }

    // Getter for age
    int getAge(){
        return Age;
    }


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
    Employee employee1 = Employee("Patricia7", "BSU", 24);
    employee1.IntroduceYourself();

    // Create object 2
    Employee employee2 = Employee("Lee", "BSU", 25);
    employee2.IntroduceYourself();

    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    



}