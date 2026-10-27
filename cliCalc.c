#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "help") == 0)
  {
    printf(
      "Format: <num> <op> <num> \n"
      "Addition: +\n" 
      "Substraction: -\n" 
      "Multiplication: *, x, X\n" 
      "Division: /\n" 
      "Exponent: <num> ^ <num> (both the nums have to be the same)\n" 
      "Square root: <num> r <num> (both num nums have to be the same");
    return 0;

  };

  if (argc < 4){
    printf("Not enough arguments");
    return 1;
  };

  argv[0];
  double a = atof(argv[1]); //atof makes the string into a number and double makse it a decimal
  char op = argv[2][0]; //[2][0] is saying look at the second argument of argv, and since the second argument is a string '+' you ahve to look at the first index of that string which is [0]
  double b = atof(argv[3]); //atof makes the string into a number and double makes it a decimal
  

  if (op == '+') 
  {
    double sum = a + b;
    printf("%.2f\n", sum);
  }
  else if (op == '-')
  {
    double sub = a-b;
    printf("%.2f\n", sub);
  }
  else if (op == '*' || op == 'x' || op == 'X')
  {
    double mult = a*b;
    printf("%.2f\n", mult);
  }
  else if (op == '/')
  {
    if (b == 0) {printf("Cannot divide by 0 numb nuts\n");};
    double div = a / b;
    printf("%.2f\n", div);
  }
  else if (op == '^') 
  {
    double expo = pow(a, b);
    printf("%.2f\n", expo);
  }
  else if (op == 'r')
  {
    double root = sqrt(a);
    printf("%.2f\n", root);
  }
  else {printf("Unknown operator... learn sum math dude or update cliCalc.c");};
};
