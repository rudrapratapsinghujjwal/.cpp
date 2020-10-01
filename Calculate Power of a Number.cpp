#include<iostream>
using namespace std;

int power(int x, int y)
{
   if (y == 0)
   return 1;
   else if (y%2 == 0)
   return power(x, y/2)*power(x, y/2);
   else
   return x*power(x, y/2)*power(x, y/2);
}

int main()
{
   int x = 3;
   int y = 4;
   cout<<"x = "<<x<<endl;;
   cout<<"y = "<<y<<endl;
   cout<<"x^y = "<<power(x,y);
   return 0;
}
