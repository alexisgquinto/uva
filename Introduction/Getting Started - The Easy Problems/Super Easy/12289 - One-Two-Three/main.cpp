//
//  main.cpp
//  12289 - One-Two-Three
//
//  Created by Alexis Quinto on 9/20/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    string ONE = "one";
    int T;
    scanf("%d", &T);
    
    while(T--) {
        string str;
        cin >> str;
        
        if (str.size() == 3) {
            int err = 0;
            
            for (int i = 0; i < str.size(); ++i) {
                if (str[i] != ONE[i]) ++err;
            }
            
            if (err <= 1) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        } else {
            printf("3\n");
        }
    }
    
    return 0;
}
