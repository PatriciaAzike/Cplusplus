// Employee class

#include <iostream>
#include <string>

using namespace std;

// Abstraction
class AbstractEmployee{
    // Method
    virtual void AskForPromotion() = 0;     // Abstract function
};


class Employee:AbstractEmployee {

private:   // Encapsulate them in a private class 
    // string Name;
    string Company; 
    int Age;

    protected:
    string Name;

public: 
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

    void AskForPromotion() {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;

        else
            cout << Name << ", sorry, NO promotion for you!" << endl;
    }

};

class Developer:public Employee{

// Make the inheritance class public to access methods
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug() {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl; 

        // we used getName to access the properties of the employee class
        // If we want to invoke the name variable instead of getName, name has to be 
        // defined using the protected class access modifier
    }
};


class Teacher:public Employee {
public:    
    string Subject;
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
};

int main()
{
    // Create an object
    Developer d = Developer("Patricia", "BSU", 24, "C++");
    //d.FixBug();
    //d.AskForPromotion();
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();
    
    
    



} 