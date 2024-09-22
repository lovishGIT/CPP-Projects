#include <iostream>
using namespace std;

int prefixCheck(string text, string prefixString) {
    int maxLength = 0;

    for (int i = 0; i < min(text.length(), prefixString.length()); i++) {
        if (text[i] == prefixString[i]) maxLength++;
        else break;
    }

    return maxLength;
}

int suffixCheck(string text, string suffixString) {
    int maxLength = 0;
    int textLen = text.length();
    int suffixLen = suffixString.length();

    for (int i = 0; i < min(textLen, suffixLen); i++) {
        if (text[textLen - 1 - i] == suffixString[suffixLen - 1 - i]) maxLength++;
        else break;
    }

    return maxLength;
}

int main() {
    string str1 = "banana";
    string str2 = "bana";
    string str3 = "nana";

    cout << prefixCheck(str1, str2) << endl;
    cout << suffixCheck(str1, str3) << endl;

    return 0;
}
