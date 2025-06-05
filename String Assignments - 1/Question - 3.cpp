// Q(3) = Input a string of even length and reverse the second half of the string.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
   string str;
   cin >> str;
   int n = str.length();
   if(n % 2 != 0){
    cout << "Invalid String" << endl;
   }
   else{
    reverse(str.begin() + n/2, str.end());
   }
   cout << str << endl;
}