#include<bits/stdc++.h>
using namespace std;

#define endl            "\n"
#define Code            ios_base::sync_with_stdio(false);
#define By              cin.tie(NULL);
#define Nasif           cout.tie(NULL)
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define Gcd(a,b)        __gcd(a, b)
#define Lcm(a,b)        (a*b) / Gcd(a,b)
#define mem(a,b)        memset(a, b, sizeof(a))//a is array or vector;b is the value that wants to set
#define show(...)       __f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>//show(parameters)
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){ const char* comma = strchr (names + 1, ',');cout.write (names, comma - names) << ": " << arg1 << " | "; __f (comma + 1, args...);}


int main()
{
    Code By Nasif;
    int a,b,c1,c2,b1,b2,c3=0,b3=0;
    cin>>a>>b;
    if(a==1)
    {
        c1=1;
        c2=0;
    }
    if(a==2)
    {
        c1=2;
        c2=0;
    }
    
    if(a==4)
    {
        c1=4;
        c2=0;
    }
     if(a==0)
    {
        c1=0;
        c2=0;
    }
    if(b==0)
    {
        b1=0;
        b2=0;
    }
    if(b==1)
    {
        b1=1;
        b2=0;
    }
    if(b==2)
    {
        b1=2;
        b2=0;
    }
    if(b==4)
    {
        b1=4;
        b2=0;
    }
    if(a==3)
    {
        c1=1;
        c2=2;
    }
    if(a==5)
    {
        c1=1;
        c2=4;
    }
    if(a==6)
    {
        c1=2;
        c2=4;
    }
    if(b==3)
    {
        b1=1;
        b2=2;
    }
    if(b==5)
    {
        b1=1;
        b2=4;
    }
    if(b==6)
    {
        b1=2;
        b2=4;
    }
    if(a==7)
    {
        c1=1;
        c2=4;
        c3=2;
    }
    if(b==7)
    {
        b1=2;
        b2=4;
        b3=1;
    }

    if(c1!=b1 && c2!=b2 && c3!=b3)
    {cout<<c1+c2+c3+b1+b2+b3;}

    else if (c1==b1)
    {
        if(c1==0 && b1==0)
        {
            cout<<c1+c2+c3+b1+b2+b3;
        }else
        cout<<c2+c3+b1+b2+b3;
    }

    else if(c2==b2)
    {
        if(c2==0 && b2==0)
        {
            cout<<c1+c2+c3+b1+b2+b3;
        }else
        cout<<c1+c3+b1+b2+b3;
    }
    else if(c3==b3)
    {
        if(c3==0 && b3==0)
        {
            cout<<c1+c2+b1+b2+c3+b3;
        }else
        cout<<c1+c2+b1+b2+c3;
    }

    return 0;
}