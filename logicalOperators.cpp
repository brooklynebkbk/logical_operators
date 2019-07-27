#include <iostream>
using namespace std;


//logical operators
//check and return boolean values
int main()
{
  int age, height;
  cout << "Enter age of candidate\t";
  cin >> age;
  cout << "Enter height of candidate\t";
  cin >> height;
  if (( age >= 18) && (height >=5))
    cout << " The candidate is selected";
  else
    cout << "The candidate is not selected";

  return 0;

}





