#include<iostream>
using namespace std;
int prime(int n,int i)
{
    if(i==1)
    return 1;
    else
    {
        if(n%i==0)
        return 0;
        else
        return prime(n,i-1);

    }

}
int main()
{
    int n,p;
    cout<<"enter ";
    cin>>n>>p;
    cout<<prime(n,p);
}
