//
//  main.cpp
//  testing
//
//  Created by Janessa Pong on 2021-10-25.
//

#include <iostream>
#include <stdio.h>

void shenanigans(int num){
    for(int i=0; i < num; i++){
        std::cout << "fusc" << std::endl;
    }
    return;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    shenanigans(5);
    
    return 0;
    
    
}


