#include <iostream>
using namespace std;

int main() 
{

  int first_number, second_number, div;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  div = first_number / second_number;

  // prints sum 
  cout << first_number << " / " <<  second_number << " = " << div<< endl;   
  cout<<"This is ans";  
  return 0;
}