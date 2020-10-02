//
//  main.cpp
//  11679 - Sub-prime
//
//  Created by Alexis Quinto on 10/3/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

#define MAX_B 25
#define MAX_N 25

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int B, N;
    int arrB[MAX_B] = {0};
    int x, y, z;
    bool canLiquidate;
    while(scanf("%d %d", &B, &N), (B != 0 && N != 0)) {
        canLiquidate = true;
        
        for (int i = 1;i <= B; ++i)
            scanf("%d", &arrB[i]);
        
        for (int i = 0; i < N; ++i) {
            scanf("%d %d %d", &x, &y, &z);
            arrB[x] -= z;
            arrB[y] += z;
        }
        
        for (int i = 1; i <= B; ++i) {
            if (arrB[i] < 0) {
                canLiquidate = false;
                break;
            }
        }
        
        if (canLiquidate)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
