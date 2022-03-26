#include<iostream>
using namespace std;

int main(){
    int arr[]={1,4,5,7,8,9,11,15};
    int even=0;
    int odd=0;

    int length= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(arr[i]%2==0){
            cout<< arr[i]<<" is even number"<<endl;
            even++;
        }else{
            cout<< arr[i]<<" is odd number"<<endl;
            odd++;
        }
    }

    cout<<"Even numbers : "<< even << endl;
    cout<<"Odd numbers : "<< odd ;
    return 0;
}