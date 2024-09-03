#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee {
public:
    virtual void AskForPromotion() = 0; // Pure virtual function
};

class Employee : public AbstractEmployee { // Inherit publicly
private:
    string Name;
    string Company;
    int Age;

public:
    // Setters and Getters
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if (age >= 18) Age = age; // Assuming age validation
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age) { // Constructor
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion() override { // Override the pure virtual function
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " sorry, no promotion!" << endl;
    }
};

class Developer : public Employee { // Correct inheritance
public:
    string FavProgrammingLanguage;
    
    // Constructor for Developer class
    Developer(string name, string company, int age, string favProgrammingLanguage) 
        : Employee(name, company, age) { // Initialize the base class Employee
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    
    void FixBug() {
        cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

int main() {
    Developer d = Developer("Subhro", "YT-shiv", 24, "C++");
    d.FixBug();
    d.AskForPromotion();
    
    return 0;
}

