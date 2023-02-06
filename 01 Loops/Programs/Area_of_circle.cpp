#include <iostream>
using namespace std;

int areaOfCircle(int r)
{
  int area = 3.14 * (r * r);
  return area;
}

int main()
{
  int r;
  cout << "Enter the radius of circle: ";
  cin >> r;
  cout << endl;
  int area = areaOfCircle(r);
  cout << "Area of circle: " << area << endl;
}