#include<bits/stdc++.h>

using namespace std;

bool ispermutationSorting(string a , string b )
{
    // space O(1) time O(n log n)
    if(a.size() != b.size())
        return false;

    sort(a.begin() ,a.end());
    sort(b.begin() , b.end());

    if(a == b)return true;

    return false;

}


bool ispermutationHash(string a , string b )
{
    // space O(1) time O(n)
    if(a.size() != b.size())
        return false;

    int x[1000] = {0};

    for(int i=0 ; i<a.size() ; i++)
        x[a[i]]++;

    for(int i=0 ; i<b.size() ; i++){
        if(x[b[i]])
        x[b[i]]--;

        else
        return false;
    }


    return true;


}



int main()
{

    string  a , b;
    cin>>a>>b;

   cout <<  ispermutationSorting(a , b) <<endl;
   cout <<  ispermutationHash(a , b) << endl;





    return 0;
}
