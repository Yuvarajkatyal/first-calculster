#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double num1;
   double num2;
   string op;
   cout << "Input first no: ";
   cin >> num1;

   cout << "Input second no: ";
   cin >> num2;

   cout << "Input an operator: ";
   cin >> op;

     if (op == "+") {
    cout << num1 + num2;
  }

  else if (op == "-") {
    cout << num1 - num2;
  }
  else if (op == "/") {
    cout << num1 / num2;
  }
  else if (op == "*") {
    cout << num1 * num2;
  }
else {
    cout << "Invalid operator";
}
   return 0;
}

