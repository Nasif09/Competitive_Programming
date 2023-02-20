#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Nasif cout.tie(NULL)
#define ll long long int
#define pb push_back
#define mp make_pair
#define Gcd(a, b) __gcd(a, b)
#define Lcm(a, b) (a * b) / Gcd(a, b)
#define mem(a, b) memset(a, b, sizeof(a)) // a is array or vector;b is the value that wants to set
#define show(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1> // show(parameters)
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << ": " << arg1 << " | ";
    __f(comma + 1, args...);
}

int main()
{
    Code By Nasif;
    int n, x, p;

    cin >> n >> x;
    int arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == x)
        {
            p = i + 1;
        }
    }
    cout << p;

    return 0;
}