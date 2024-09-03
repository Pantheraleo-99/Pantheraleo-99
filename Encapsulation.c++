#include <iostream>
#include <string> // Add this include statement
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) { // setter
        Name = name;
    }
    string getName() { // getter
        return Name;
    }

    void setCompany(string company) { // setter
        Company = company;
    }
    string getCompany() { // getter
        return Company;
    }

    void setAge(int age) { // setter
         if(age>=18)
        Age = age;
    }
    int getAge() { // getter
        return Age;
    }

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee employee1 = Employee("subhro", "YT-shiv", 25);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("subhranil", "YT-shivansh", 24);
    employee2.IntroduceYourself();

    employee1.setAge(5);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    return 0;
}
