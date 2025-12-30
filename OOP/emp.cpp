#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
  string name;
  long long salary;

public:
  Employee(string name, long long salary)
  {
    this->name = name;
    this->salary = salary;
  }

  string getName() const
  {
    return name;
  }
  long long getSalary() const
  {
    return salary;
  }

  void setName(string name) { this->name = name; };
  void setSalary(long long salary) { this->salary = salary; };

  void displayDetails() const
  {
    cout << "Employee: " << name << endl;
    cout << "Salary: " << salary << endl;
  }

  void setSalary(){
    if(salary < 0){
      cout << "Invalid Salary" << endl;
    }else{
      this -> salary = salary;
    }
  }
};

int main()
{
  Employee emp("alok", 10000000LL);
  emp.displayDetails();

  Employee emp2("alex", 230943LL);
  emp2.displayDetails();

  return 0;
}