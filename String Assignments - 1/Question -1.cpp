// Q1. Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0 based indexing 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    string s;
    cout << "Enter the name of the string";
    cin >> s;
    for(int i = 1; i<s.size(); i+=2){
        s[i] = '#';
    }
    cout << s;
}