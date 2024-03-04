#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int distance = 0;
    int x1, y1;
    cin >> x1 >> y1;

    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        distance += abs(x - x1) + abs(y - y1);
        x1 = x;
        y1 = y;
    }

    cout << distance;

    return 0;
}