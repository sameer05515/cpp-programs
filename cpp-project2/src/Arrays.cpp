#include <iostream>

int main(){
    int arr[5];
    for(int i=0;i<std::size(arr);i++){
        arr[i]=i*40;
        std::cout << arr[i] << std::endl;
    }
}