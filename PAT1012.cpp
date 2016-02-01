#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i,a,n;
    double a1,a2,a3,a4,a5;
    int f1,f2,f3,f4,f5;
    f1 = 0;
    f2 = 0;
    f3 = 0;
    f4 = 0;
    f5 = 0;
    a1 = 0;
    a2 = 0;
    a3 = 0;
    a4 = 0;
    a5 = 0;
    double t2 = 1;
    double t4 = 0;
    cin>>n; 
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a%10==0)
        {
            a1 = a1 + a;
            f1++;
            }
        if(a%5==1)
        {
            a2 = a2 + a * t2;
            t2 = t2 * -1;
            f2++;
        }
        if(a%5==2)
        {
            a3++;
            f3++;
        }
        if(a%5==3)
        {
            a4 = a4 + a;
            t4++;
            f4++;
        }
        if(a%5==4 && a>a5)
        {
            a5 = a;
            f5++;
        }
    }
    a4 = a4/t4;
    if(f1>0) 
        cout<<a1<<' ';
    else
        cout<<"N ";
    if(f2>0) 
        cout<<a2<<' ';
    else
        cout<<"N ";
    if(f3>0) 
        cout<<a3<<' ';
    else
        cout<<"N ";
    if(f4>0)
        cout<<fixed<<setprecision(1)<<a4<<' ';
    else
        cout<<"N ";
    if(f5>0) 
        cout<<fixed<<setprecision(0)<<a5<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
