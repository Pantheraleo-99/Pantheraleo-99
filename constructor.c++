#include<iostream>
using  namespace std;

class Employee{
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout << "Name -" << Name << endl;
        cout << "company -" << Company << endl;
        cout << "Age -" << Age << endl;
    }
    Employee(string name,string company,int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
    Employee employee1 = Employee("subhro", "YT-shiv",25);
    employee1.IntroduceYourself();
    


    Employee employee2 = Employee("subhranil", "YT-shivansh",24);
    employee2.IntroduceYourself();

};

