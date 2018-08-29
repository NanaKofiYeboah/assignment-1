#include <iostream>
#include <conio.h>
using namespace std;

int main()
{


int num,flag=0,i=2;
cout<<"Enter any positive integer";
cin>>num;
while (i<num)
{
    if (num%i==0)
    {flag =1;
    break;

    }
    i=i+1;

}if (flag==0)
cout<<"number prime number";
else
    cout<<"number is not prime";
    return 0;

    }
