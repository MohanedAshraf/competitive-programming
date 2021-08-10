#include<bits/stdc++.h>

using namespace std;

string URLify(char s[] , int n )
{
    // space O(n) time O(n)
    int spaces = 0 , index;
    for(int i = 0 ;i < n ; i++)
        if(s[i] == ' ') spaces++;
    index = n + spaces*2;
    for(int i = n-1 ; i>=0 ; i--){
        if(s[i] == ' ' ){
            s[index-1] = '0';
            s[index-2] = '2';
            s[index-3] = '%';
            index-=3;
        }

        else{
        s[index-1]=s[i];
        index--;

        }
    }

    return s;

}




int main()
{
    int n;
    char  s[10000];
    cin.getline(s,sizeof(s));
    cin>>n;

   cout <<  URLify(s , n) <<endl;



    return 0;
}
