#include <bits/stdc++.h>
using namespace std;
int main(){
    /*  
          XOR TABLE
            X Y Z
            0 0 0
            0 1 1
            1 0 1
            1 1 0
    */
    int x = 9, y =14, count=0; // taking two values as test cases

    int res = x ^ y ; // taking xor of the two values to get different bits

    // counting number of 1 present in the res 
    while(res>0){
        count += res & 1;
        res >>= 1;
    }
    cout << count; // printing the value of bits
    return 0;
}