//
//  main.cpp
//  11172 - Relational Operator
//
//  Created by Alexis Quinto on 9/15/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    int a, b;
    while(T--) {
        scanf("%d %d", &a, &b);
        if (a > b) {
            printf(">\n");
        } else if (a < b) {
            printf("<\n");
        } else {
            printf("=\n");
        }
    }
    
    return 0;
}
