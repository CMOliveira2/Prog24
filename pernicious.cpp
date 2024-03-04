#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i=2;i*i <= num;i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int bitCounter(int n) {
    int count = 0;
    while (n!=0) {
        n &= (n-1);
        count++;
    }
    return count;
}

bool isPernicious(int n) {
    return isPrime(bitCounter(n));
}

int main(){
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (isPrime(i) && isPernicious(i)) {
            std::cout << i << " ";
        }
    }
    return 0;
}