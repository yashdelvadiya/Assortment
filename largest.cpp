#include <iostream>

using namespace std;

int main(){

    int a[10],temp,j;
    cout<<"Please enter any 10 values:";
    cout<<"\n";
    for(int i=0; i<10; i++)
    {
        cout<<"Enter value " <<i+1 <<" :";
        cin>>a[i];
        cout<<"\n";
    }
    temp=a[0];
    for(j=0; j<10; j++){
        if( temp <a[j] ){
            temp=a[j]; 
        }
    }

    cout<< temp;
    return 0;
}