#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i1, i = 4;
    double d1,d = 4.0;
    string s1, s = "HackerRank ";  
    cin>>i1>>d1;

    cin.get();
    getline(cin, s1);

    cout<<i+i1<<endl<<fixed<< setprecision(1)<< d+d1<<endl<<s+s1<<endl;

    return 0;
}