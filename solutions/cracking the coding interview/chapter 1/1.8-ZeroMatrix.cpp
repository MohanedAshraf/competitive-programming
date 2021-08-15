#include<bits/stdc++.h>

using namespace std;

void nullifyRow(int **matrix , int m , int r){
    for(int j=0 ; j< m ;j++)
    matrix[r][j] = 0;
}

void nullifyColumn(int **matrix , int n , int c){
    for(int i=0 ; i< n ;i++)
    matrix[i][c] = 0;
}

void zeroMatrix(int **matrix , int n , int m){
    // space O(1) , time O(mn)
    bool rowHasZero = 0 , colHasZero = 0 ;

    for(int j =0 ; j< m ; j++)
        if(matrix[0][j]==0 )
        rowHasZero = true ;

    for(int i =0 ; i< n ; i++)
        if(matrix[i][0] == 0)
        colHasZero = true ;


    for(int i = 1 ; i < n ; i++ ){
        for(int j = 1 ; j< m ; j++){
            if(matrix[i][j] == 0){
                matrix[i][0]= 0;
                matrix[0][j]= 0;
            }
        }
    }



    for(int j = 1 ; j <m ; j++)
            if(matrix[0][j] == 0)
                nullifyColumn(matrix , n , j);


    for(int i = 1 ; i <n ; i++)
            if(matrix[i][0] == 0)
                nullifyRow(matrix , m , i);


    if(rowHasZero)
        nullifyRow(matrix , m , 0);

    if(colHasZero)
        nullifyColumn(matrix ,  n , 0);


}


int main()
{
    int N , M;
    cin>>N>>M;

    int ** matrix = new int*[N];
	for ( int i = 0; i < N; ++i ) {
		matrix[i] = new int[M];
	}

	for ( int i = 0; i < N; ++i) {
		for ( int j = 0; j < M; ++j ) {
			cin >> matrix[i][j];
		}
	}

    zeroMatrix(matrix , N , M);

    cout<<endl;


    for ( int i = 0; i < N; ++i) {
		for ( int j = 0; j < M; ++j ) {
			cout<< matrix[i][j]<<" ";
		}
		cout<<endl;
	}



    return 0;
}
