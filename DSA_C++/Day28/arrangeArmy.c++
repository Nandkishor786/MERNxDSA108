#include <bits/stdc++.h>
using namespace std;


//must use dp+memoizations
int f(int pos, int prev, int n, int r, int end) {
    // base case
    if(pos == n) {
        return (prev == end) ? 1 : 0;
    }
    int ways = 0;
    for(int i = 1; i <= r; i++) {
        if(i != prev) {
            ways += f(pos + 1, i, n, r, end);
        }
    }
    return ways;
}
int main() {
    int n, r, end;
    cin >> n >> r >> end;

    int start = 1; // given in problem

    cout << f(1, start, n, r, end);

    return 0;
}