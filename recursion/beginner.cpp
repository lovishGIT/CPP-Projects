#include<iostream>
using namespace std;
// int factorial(int n) {
//     if(n<=1) 
//         return 1;
//     return n* factorial(n-1);
// }
// int sum_n(int n) {
//     if(n<=1)
//         return 1;
//     return n + sum_n(n-1);
// }
// int nth_fibonacci(int n) {
//     if(n==0) 
//         return 0;
//     if(n==1)
//         return 1;
//     return nth_fibonacci(n-1) + nth_fibonacci(n-2);
// }
int sumn_fibonacci(int n) {
    if(n==1)
        return 1;
    

}
int main() {
    int n;
    cin>> n;
    // cout<< factorial(n);
    // cout<< sum_n(n);
    // cout<< nth_fibonacci(n); // 0 1 1 2 3 5 8 13
    cout<< sumn_fibonacci(n);
    return 0;
}