#include <iostream>
using namespace std;

void end (){
  cout << "Program Finished!";
}

int main (){

  double num1, num2, sum, difference, product, quotient;
  char op;

  cout << "Choose Operation (+, - , *, /): ";
  cin >> op;

  cout << "Enter First Number: ";
  cin >> num1; 

  cout << "Enter Second Number: ";
  cin >> num2;
  
  switch (op){
    case '+':
      sum = num1 + num2;
      cout << "Result: " << sum << endl;
      break;
    case '-':
      difference = num1 - num2;
      cout << "Result: " << difference << endl;
      break;
    case '*':
      product = num1 * num2;
      cout << "Result: " << product << endl;
      break;
    case '/':
      quotient = num1 / num2;
      cout << "Result: " << quotient << endl;
      break;
  }

  end();
  return 0;
}