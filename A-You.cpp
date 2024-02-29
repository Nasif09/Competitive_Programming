#include <iostream>
using namespace std;

string intToWord(int num) {
    switch(num) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

string evenOdd(int num) {
    return (num % 2 == 0) ? "even" : "odd";
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        if (i >= 1 && i <= 9) {
            cout << intToWord(i) << endl;
        } else {
            cout << evenOdd(i) << endl;
        }
    }

    return 0;
}
