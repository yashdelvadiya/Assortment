#include <iostream>

using namespace std;

int main(){
    int row,column;
    cout<<"pls enter the number of row";
    cin>> row;
    cout<<"pls enter the number of column";
    cin>> column;

    int a[row][column];
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<"Pls enter value of" <<a[i][j];
            cin>>a[i][j];
            cout<<"\n";
        } 
    }

    return 0;
}