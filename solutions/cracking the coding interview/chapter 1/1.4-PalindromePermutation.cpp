#include<bits/stdc++.h>

using namespace std;

bool palindrome_permutation_bit(string s) {


    // space O(1) time O(n)
    int x[28]={0} , bitVector = 0 ;

    for(int i = 0 ; i<s.size() ;i++){
        if(s[i] != ' '){
        int mask = 1 << s[i]-'a';
            if((bitVector & mask) == 0){
                bitVector |= mask;
            }
            else{
                bitVector &= ~mask;
            }

        }


    }




    return bitVector == 0 | (bitVector & (bitVector -1)) == 0;



}


bool palindrome_permutation_hash(string s)
{
    // space O(1) time O(n)
    int x[28]={0} , odd=0 ;

    for(int i = 0 ; i<s.size() ;i++){
        if(s[i] != ' '){

        x[s[i]-'a']++;
        if(x[s[i]-'a'] & 1 )
        odd++;

        else
         odd--;

        }


    }

    return odd <= 1 ? true : false;

}




int main()
{
    int n;
    string s;
    getline(cin, s);

   cout <<  palindrome_permutation_hash(s) <<endl;
   cout <<  palindrome_permutation_bit(s)  <<endl;


    return 0;
}
