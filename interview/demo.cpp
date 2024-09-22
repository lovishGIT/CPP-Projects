#include<iostream>
using namespace std;
string rev(string str) {
    int first=0;
    int last= str.length()-1;

    while(first < last) {
        char temp= str[first];
        str[first]= str[last];
        str[last]= temp;

        first++;
        last--;
    }
    return str;
}
int main() {
    // for(int i=1; i<=100; i++) {
    //     cout<< i<< " ";
    //     if(i%15 == 0) {
    //         cout<< "FizzBuzz"<<endl;
    //     }
    //     else if(i%3==0) {
    //         cout<< "Fizz"<<endl;
    //     }
    //     else if(i%5==0) {
    //         cout<< "Buzz"<<endl;
    //     }
    // }
    cout<< rev("Hello");
    return 0;
}