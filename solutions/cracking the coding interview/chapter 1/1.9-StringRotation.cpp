#include<bits/stdc++.h>

using namespace std;



bool isRotation(string a , string b){
    // space O(1) , time O(n)

    if(a.size() == a.size() && a.size() > 0){
        string x = a + a;
        if(x.find(b) != string::npos)
            return true;
        else
            return false;
    }

    return false;

}


int main()
{
   string a  ,b ;
   cin>>a>>b;

   cout<<isRotation(a , b);


    return 0;
}
