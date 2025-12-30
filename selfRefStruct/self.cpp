// C++ program to implement
// self-referential class
#include <iostream>
using namespace std;

// Class definition
class Self
{
public:
  int x;
  Self *srefer;
  Self(int x)
  {
    this->x = x;
    this->srefer = nullptr;
  };
};

// Function to print
// values
void print(Self *b)
{
  if (b == nullptr)
    return;
  do
  {
    cout << b->x << endl;
  } while ((b = b->srefer));
}

// Driver code
int main()
{
  Self x(5), y(7), z(9);
  x.srefer = &y;
  y.srefer = &z;
  print(&x);
  return 0;
}