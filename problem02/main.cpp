#include <iostream>
using namespace std;
// The goal is to add all the even numbers in fibonacci sequence up to 4.000.000
int main(){
    int prev = 1;
    int curr = 1;
    int next = 1;
    int result = 0; 
    while (prev < 4000000){
        
        cerr << prev << endl;
        if (prev % 2 == 0){
            result += prev;
        }

        //Shifts prev and curr then makes next the sum of two
        prev = curr;
        curr = next;
        next = prev + curr;
    }

    cout << "Result is " << result << endl;

    return 0;
}
