// Employee class

#include <iostream>
#include <string>

using namespace std;

// Abstr//
class AbstractEmployee{
    // Method
    virtual void AskForPromotion() = 0;     // Abstract function
};


class Employee:AbstractEmployee {

private:   // Encapsulate them in a private class 
    string Name;
    string Company; 
    int Age;

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
            cout << Name << "got promoted!" << endl;

        else
            cout << Name << ", sorry, NO promotion for you!" << endl;
            // The variable name can also be accessed using getName()
    }

};
int main()
{
    // Create an object
    Employee employee1 = Employee("Patricia", "BSU", 24);
    Employee employee2 = Employee("Lee", "BSU", 25);
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    



}