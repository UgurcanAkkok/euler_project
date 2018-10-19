#include <iostream>
using namespace std;

//The goal of this program is to find the sum of all the numbers that are multiples of 3 and 5 below 1000

int main(){
    int result = 0;
    cout << "Starting the proccess.." << endl;
    for (int i = 0; i < 1000; i++){
        if (i % 3 == 0 or i % 5 == 0){
            result += i;
            cout << i << endl;
        }
        else {
            continue;
        }
    }
    cout << result << endl;

    return 0 ;
}
