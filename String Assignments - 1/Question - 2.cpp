// Q(2) = Input a string of length n and count all the consonants in the given string.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    string str;
    cin >> str;
    int count = 0;
    int n = str.length();
    for(int i = 0; i<n; i++){
       char ch = str[i];
        if(((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) &&
           !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            count++;
    }
}
cout << count << endl;
}