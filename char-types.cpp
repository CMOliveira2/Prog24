#include <iostream>
using namespace std;
int main (){
    int n;
    int digit=0;
    int letter=0;
    int other=0;
    cin >> n;

    for (int i=0; i<n;i++){
        char x;
        cin >>  x;
        if (x >= '0' && x<='9'){
            digit++;
        }else if((x>='a'&& x<='z') ||(x>='A'&& x<='Z' )){
            letter++;
        }else{
            other++;
        }
    }
    cout << letter << " " << digit << " " << other ;
    return 0;
}