#include<iostream>
using namespace std;
int main()
{
  int num1, num2;
  cout<<"First Number: "<<num1;
  cout<<"Second Number: "<<num2;
  
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  
  cout<<"After swapping: num1: "<<num1<<" , num2: "<<num2;
  return 0;
}
