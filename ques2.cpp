// Develop a program to count the total number of digits in number.

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int num;
    int count=0;
    cout<<"Enter any number"<<endl;
    cin>>num;   
    num=abs(num);
    if(num==0)
    {
        count=1;
    }
    else{
        while(num>0)
        {
            num/=10;
            count++;
        }
    }

    cout<<"total number of digits is: "<<count<<endl;
     return 0;

}

