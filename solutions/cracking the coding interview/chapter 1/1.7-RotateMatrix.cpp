#include<bits/stdc++.h>

using namespace std;



void rotateMatrix(int **matrix , int n){
    // space O(1) , time O(n^2)

    for(int i = 0 ; i < n/2 ; i++ ){
        int m = n - 1 - i;
        for(int j = i ;  j < m ; j++){
            int offest = j-i;
            int top = matrix[i][j];

            //left -> top
            matrix[i][j] = matrix[m-offest][i];

            //bottom -> left
            matrix[m-offest][i] = matrix[m][m-offest];

            //right -> bottom
            matrix[m][m-offest] = matrix[j][m];

            //top -> right
            matrix[j][m] = top;

        }
    }



}


int main()
{
    int N;
    cin>>N;
    int ** matrix = new int*[N];
	for ( int i = 0; i < N; ++i ) {
		matrix[i] = new int[N];
	}

	for ( int i = 0; i < N; ++i) {
		for ( int j = 0; j < N; ++j ) {
			cin >> matrix[i][j];
		}
	}

    rotateMatrix(matrix , N);

    cout<<endl;


    for ( int i = 0; i < N; ++i) {
		for ( int j = 0; j < N; ++j ) {
			cout<< matrix[i][j]<<" ";
		}
		cout<<endl;
	}



    return 0;
}
