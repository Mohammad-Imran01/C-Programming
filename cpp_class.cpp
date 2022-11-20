#include<iostream>
using namespace std;


class Employee{

private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age){
        this->Name = name;
        this->Company = company;
        this->Age = age;
    }
    /*void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string getCompany(){
        return Company;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;

    }
    void AskForPromotion(){
        if(Age > 3)
            cout<<Name<<" got promoted!"<<endl;
        else
            cout<<Name<<" no promotion for you!"<<endl;
    }*/
};

int main()
{
    Employee employee1 = Employee("Imran","Tcs",20);
    Employee employee2 = Employee("John","Youtube",22);
    cout<<employee1.Name;
  
    return 0;
}