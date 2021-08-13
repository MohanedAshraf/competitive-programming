#include<bits/stdc++.h>

using namespace std;

int countCompression(string s)
{
  // space O(1) , Time O(n)
    int counter= 0 , compressedLength = 0;
    for(int i = 1 ; i<s.size() ; i++){
            counter++;

        if(i+1 >= s.size() || s[i] != s[i+1]){
            compressedLength += 1+ to_string(counter).length();
            counter=0;
        }

    }

    return compressedLength ;



}


string compress(string s){
    // space O(n) , time O(n)
    int finalLength = countCompression(s);
    if(finalLength >= s.size()) return s;

    string a ="" ;
    int counter = 0;
    for(int i = 1 ; i<s.size() ; i++){
            counter++;

        if(i+1 >= s.size() || s[i] != s[i+1]){
            a.push_back(s[i]);
            a+=to_string(counter);
            counter=0;
        }

    }

    return a ;



}


int main()
{
    int n;
    string s;
    cin>>s;


   cout <<compress(s) <<endl;



    return 0;
}
