//
//  main.cpp
//  272 - TEX Quotes
//
//  Created by Alexis Quinto on 9/13/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    char c;
    bool quote = true; //toggled value
    
    while(scanf("%c", &c) != EOF) {
        if (c == '"') {
            if (quote) {
                printf("``");
            } else {
                printf("''");
            }
            quote = !quote;
        } else {
            printf("%c", c);
        }
    }
    
    return 0;
}
