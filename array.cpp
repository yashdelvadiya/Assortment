#include <iostream>

using namespace std;

int main(){

    int a[5];
    cout<<"Please enter any 5 values:";
    cout<<"\n";
    for(int i=0; i<5; i++)
    {
        cout<<"Enter value " <<i+1 <<" :";
        cin>>a[i];
        cout<<"\n";
    }
    for(int i=0; i<5; i++){
        if(a[i]<0){
            cout<<a[i];
            cout<<"\n";
        }
    }

    return 0;
}