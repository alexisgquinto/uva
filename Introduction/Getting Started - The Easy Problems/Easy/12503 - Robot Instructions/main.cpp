//
//  main.cpp
//  12503 - Robot Instructions
//
//  Created by Alexis Quinto on 10/24/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>

#define LEFT 1
#define RIGHT 2
#define SAME_AS 3
#define INSTRUCTION_MAX_LEN 105

using namespace std;

int n = 0;
int ctr;
int arr[INSTRUCTION_MAX_LEN];
int globalAnswer;

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d", &n);
        ctr = 0;
        globalAnswer = 0;
        while(n--) {
            string w1;
            std::cin >> w1;
            
            if (w1.compare("LEFT") == 0) {
                arr[ctr] = -1;
                globalAnswer += -1;
            } else if (w1.compare("RIGHT") == 0) {
                arr[ctr] = 1;
                globalAnswer += 1;
            } else {
                string w2;
                std::cin >> w2;
                
                int index;
                std:: cin >> index;
                arr[ctr] = arr[index - 1];
                globalAnswer += arr[index - 1];
            }
            ctr++;
        }
        printf("%d\n", globalAnswer);
    }
    
    return 0;
}
