//First programm!
#include <iostream>

//lesson 4
void Zamina (unsigned long &n1 , unsigned long &n2)
{
	//n1 = n1^2;
	//n2 = n2^2;
int i=1 ; int j= i<<3; int k=n1&j;int o=1;int b=o<<2; int f = n1&b;n1=n1^k;n1=n1^f;
}

// lesson 3
int Perevirka (unsigned long n1, unsigned long n2)
{
  return  (((n1&2)>>1)^((n2&2)>>1));
}

//lesson 5

long  max ( long l1)
{
    long i = (l1>>31);
	return (l1&(~i));
}
// lesson 1
long Next ( unsigned long l1)
{
	unsigned long  i = l1 + 2;
	int  mod  = i %2;
	return (i-mod);

}
using namespace std;
int main()
{
   unsigned long number1 = 9;
   unsigned long number2 = 3;

   cout<<Perevirka(number1,number2)<<endl;
  
   Zamina (number1,number2);
   cout<< number1 <<","<< number2 <<endl;
   
   long l1 =-10;
   cout << max(l1) <<endl;

   unsigned long number3 =4;
   cout << Next(number3 ) << endl;
system("pause ");   
 return(0);
 
}
