//First programm!
#include <iostream>

//lesson 4
void Zamina (unsigned long &n1 , unsigned long &n2)
{
	//n1 = n1^2;
	//n2 = n2^2;
       //int i=1 ; int j= i<<3; int k=n1&j;int o=1;int b=o<<2; int f = n1&b;n1=n1^k;n1=n1^f;
}

// lesson 3
int Perevirka (unsigned long n , int p1 , int p2 )
{
  int i =1 ;
  i=i<<p1-1;
  unsigned long ni = n&i;
  int j=1;
  j=j<<p2 -1;
  unsigned long nj = n&j;
  
  return (ni>>p1-1)^(nj>>p2-1) ;
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
   unsigned long n=7;
   int p1 = 3;
   int p2 = 1;
   
   cout<<Perevirka(unsigned long n , int p1 , int p2)<<endl;
  
   Zamina (number1,number2);
   cout<< number1 <<","<< number2 <<endl;
   
   long l1 =-10;
   cout << max(l1) <<endl;

   unsigned long number3 =4;
   cout << Next(number3 ) << endl;
system("pause ");   
 return(0);
 
}