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
};

int main(){
    Employee employee1;
    employee1.Name = "subhro";
    employee1.Company = "YT-shiv";
    employee1.Age = 25;
    employee1.IntroduceYourself();
    employee1.IntroduceYourself();
   /* employee1.IntroduceYourself();
    employee1.IntroduceYourself();
    employee1.IntroduceYourself();*/


    Employee employee2;
    employee1.Name = "subhranil";
    employee1.Company = "YT-shivansh";
    employee1.Age = 24;
    employee1.IntroduceYourself();

};

