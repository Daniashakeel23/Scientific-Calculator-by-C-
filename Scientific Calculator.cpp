#include<iostream>
#include<cmath>
using namespace std;
int sum(int var1,int var2)
{
    return var1+var2;
}
int sub(int var1,int var2)
{
    return var1-var2;
}
int prod(int var1,int var2)
{
    return var1*var2;
}
int quo(int var1,int var2)
{
    return var1/var2;
}
int rem(int var1,int var2)
{
    return var1%var2;
}
int sqrt(int var1,int var2)
{
    return (var1,var2);
}
int log(int var1,int var2)
{
    return (var1,var2);
}
int main()
{
    int var1,var2,res1,res2,res3,res4,res5,res6,res7;
    cout<<"Enter first number"<<endl;
    cin>>var1;
    cout<<"Enter second number"<<endl;
    cin>>var2;
    res1=sum(var1,var2);
    res2=sub(var1,var2);
    res3=prod(var1,var2);
    res4=quo(var1,var2);
    res5=rem(var1,var2);
    res6=sqrt(var1);
    res7=log(var2);
    cout<<"sum"<<res1<<endl;
    cout<<"sub"<<res2<<endl;
    cout<<"prod"<<res3<<endl;
    cout<<"quo"<<res4<<endl;
    cout<<"rem"<<res5<<endl;
    cout<<"sqrt"<<res6<<endl;
    cout<<"log"<<res7<<endl;
    return 0;
}

