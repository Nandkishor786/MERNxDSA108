#include <iostream>
using namespace std;

//Print all permutations of a string
// Q1. Unique String Permutations
// You are given three integers n1, n2, n3 representing the number of times characters 'a', 'b', and 'c' appear in a string.
// Generate all unique permutations of the string.


void generate(int a, int b, int c, string current, int total) {
    if (current.length() == total) {
        cout << current << endl;
        return;
    }

    if (a > 0) {
        generate(a - 1, b, c, current + 'a', total);
    }

    if (b > 0) {
        generate(a, b - 1, c, current + 'b', total);
    }

    if (c > 0) {
        generate(a, b, c - 1, current + 'c', total);
    }
}

int main() {
    int n1, n2, n3;
    cout<<"ENTER THE COUNTS FOR abc"<<endl;
    cin >> n1 >> n2 >> n3;

    int total = n1 + n2 + n3;
    generate(n1, n2, n3, "", total);

    return 0;
}
