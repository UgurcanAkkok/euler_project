#include <iostream>
using namespace std;

// Largest prime factor of 600.851.475.143 ?

int main(){
    long num = 600851475143;
    long factor=1;
    while (num != 1){
        factor += 1;
        while(num % factor == 0){
            num = num / factor;
        }
        
    }

    cout << factor << endl;
    return 0;
}
