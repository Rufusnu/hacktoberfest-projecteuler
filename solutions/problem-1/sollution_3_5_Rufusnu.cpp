// AUTHOR: Sofian Razvan
// LANGUAGE: C++
// GITHUB: https://github.com/Rufusnu
#include <iostream>

using namespace std;

int main()
{
    int sum=0,x,y,i=1;
    while(x<1000 || y<1000)
    {
     x=5*i;
     y=3*i;
     if(y<1000)
     sum+=y;
     if(x<1000)
     sum+=x;
    }
    cout<<sum;
    return 0;
}
