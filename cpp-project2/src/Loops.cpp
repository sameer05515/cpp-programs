#include <iostream>

void print(std::string val,std::string spaceVal,bool newLine,bool skipVal){
    if(!skipVal){        
        std::cout << val << spaceVal;
    }else{
        std::cout << "";
    }
    if(newLine){
        std::cout << std::endl;
    }   
}

int main(){
    const int COUNT {5};

    for(int i=0;i<COUNT;i++){
        for(int j=0;j<COUNT;j++){
            print("*","\t",false,false);
        }
        print("","\t",true,true);
    }
}