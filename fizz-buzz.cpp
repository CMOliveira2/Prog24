#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;

    for(int i=1; i<=x;i++){
        if(i%3==0 && i%5==0){
            cout << "";
        }else if(i % 3 == 0){
            cout << "Fizz ";
        }else if (i % 5 == 0){
            cout << "Buzz ";
        }else {
            cout << i << " ";
        }
    }
    return 0;
}