#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    int k,d;
    cin >> k >> d;
    double result = 0;

    for (int i=0; i<=k; i++){
        result += 4 * (pow(-1, i) / (2.0 * i + 1));
    }

    cout << fixed << setprecision(d) << result;
    return 0;
}