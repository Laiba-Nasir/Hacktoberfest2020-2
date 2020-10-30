#include <iostream>  
using namespace std; 
 
// this is the program for factorial without recursion.
int main()  
{  
   int number;    
  cout<<"Enter any Number: ";    
 cin>>number; 
 int fact=factorial(number);
 cout<<"Factorial of "<<number<<" is "<<fact<<endl;   
  
  return 0;  
}  
int factorial(int n){
  if(n>1)
  return n*factorial(n-1);
  else
 return 1;
  
}
  
  

  