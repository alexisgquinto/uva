//
//  main.cpp
//  12468 - Zapping
//
//  Created by Alexis Quinto on 10/11/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int a, b;
    while((scanf("%d %d", &a, &b)), (a != -1 && b != -1)) {
        if (a == b) {
            printf("%d\n", 0);
        } else {
            int smallest = a;
            int largest = b;
            if (a > b) {
                smallest = b;
                largest = a;
            }
            
            int x = largest - smallest;
            int xprime = (smallest - 0) + (99 - largest) + 1;
            printf("%d\n", x < xprime ? x : xprime);
        }
    }
    return 0;
}
