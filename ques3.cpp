// Develop a program to find the sum of a number's firstdigit anf last digits.
#include <iostream>
using namespace std;
int main()
{
    int num,sum,firstdigit,lastDigit;
    sum=0;
    cout<<"enter any number";
    cin>>num;

    lastDigit=num%10;

    while(num>=10)
    {
        num=num/10;
    }
    firstdigit=num;
    sum=firstdigit+lastDigit;
    cout << "The sum of firstdigit and lastdigit is :"<<sum<<endl;
    return 0;
}