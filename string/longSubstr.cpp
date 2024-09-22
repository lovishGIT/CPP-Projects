#include<iostream>
using namespace std;
// int is_present(string str, char c) {
//     int i=0;
//     while( i<str.length() ) {
//         if( c == str[i] ) 
//             return i;
//     }
//     return -1;
// }
// void long_substr(string str) { // without repeat
//     string substr;
//     for(int i=0; i< str.length(); i++) {
//         for (int j = 0; j < str.length(); j++) {
//             if(!is_present(substr, str[i])) {
//                 substr+= str[i];
//                 continue;
//             }
            
//         }
//     }
// }
// int main() {
//     string str;
//     cin>> str;

//     long_substr(str);
//     return 0;
// }



// void longest_substr(string str) {
//     int ans=0;
//     int n= str.size();
//     for(int i=0; i<n; i++) {
//         int freq[26]= {0};
//         for (int j = 0; j < n; j++) {
//             if( freq[str[i] - 'a'] > 1) {
//                 //found
//             }
//             freq
//         }
        
//     }
// }



// int substring(string str) {
//     int ans=0;
//     int n= str.length();
//     int freq[128]= {0};
//     int i=0;
//     int j=0;
//     while (j<n) {
//         if (freq[str[j] - '\0']) {
//             freq[str[i] - '\0'] --;
//             i++;
//         }
//         else {
//             freq[str[j]-'\0']++;
//             ans= max(ans, j-i+1);
//             j++;
//         }
//     }
//     return ans;
// }
int main() {
    string str;
    cin>> str;
    cout<< substring(str);
    return 0;
}