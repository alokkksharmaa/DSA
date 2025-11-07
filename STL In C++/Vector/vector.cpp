#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda", "TATA"};

  // /--> Access a Vector
  cout << cars[0];
  cout << cars[1];

  cout << endl;

  cout << cars.front();
  cout << cars.back();

  cout << endl;

  // To access an element at a specified index, you can use the .at()
  // Note: The .at() function is often preferred over square brackets [] because it lets you know if an error occurs.

  cout << cars.at(3);
  cout << cars.at(2);

  cout << endl;

  //  --> Change a Vector Element   || However, it is safer to use the .at() function
  cars[0] = "Opel";
  cout << cars[0];

  cout << endl;

  //  --> Add Vector Elements  .push_back()

  cars.push_back("Tesla");
  cars.push_back("Tesla");
  cars.push_back("VW");
  cars.push_back("Mitsubishi");
  cars.push_back("Mini");

  cout << endl;

  // --> Remove Vector Elements

  cars.pop_back();

  //  --> Vector Size

  cout << cars.size();

  cout << endl;

  // --> Check if a Vector is Empty
  // .empty() function returns 1 (true) if the vector is empty and 0 (false)

  cout << cars.empty();

  cout << endl;

  //  --> Loop Through a Vector

  for (int i = 0; i < cars.size(); i++)
  {
    cout << cars[i] << "\n";
  }

  //  also use a for-each loop (introduced in C++ version 11 (2011),

  for (string car : cars)
  {
    cout << car << "\n";
  }
};