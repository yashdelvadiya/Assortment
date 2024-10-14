#include <iostream>

using namespace std;

int main(){

    int i,k,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    cout<<"Please enter numbers of values to input:";
    cout<<"\n";
    cin>>i;
    int a[i];

    cout<<"you can enter value between 0 to 9";

    for(k=0; k<i; k++){
        cout<<"Please enter value "<< k+1 <<":";
        cin>> a[k];
        cout<<"\n";
    }

    
    for(int j=0; j<i; j++){
        switch(a[j]){
            case 0:
            zero++;
            break;

            case 1:
            one++;
            break;

            case 2:
            two++;
            break;

            case 3:
            three++;
            break;

            case 4:
            four++;
            break;

            case 5:
            five++;
            break;

            case 6:
            six++;
            break;

            case 7:
            seven++;
            break;
                
            case 8:
            eight++;
            break;
            
            case 9:
            nine++;
            break;

            default:
            break;
            
        }
    }

    cout<<"Freq of 0 is:"<<zero <<"\n";
    cout<<"Freq of 1 is:"<<one <<"\n";
    cout<<"Freq of 2 is:"<<two <<"\n";
    cout<<"Freq of 3 is:"<<three <<"\n";
    cout<<"Freq of 4 is:"<<four <<"\n";
    cout<<"Freq of 5 is:"<<five <<"\n";
    cout<<"Freq of 6 is:"<<six <<"\n";
    cout<<"Freq of 7 is:"<<seven <<"\n";
    cout<<"Freq of 8 is:"<<eight <<"\n";
    cout<<"Freq of 9 is:"<<nine <<"\n";

    return 0;
}