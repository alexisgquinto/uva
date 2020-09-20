//
//  main.cpp
//  10550 - Combination Lock
//
//  Created by Alexis Quinto on 9/14/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int a, b, c, d;
    
    int max = 40;
    int fullDeg = 360;
    int degPerUnit = fullDeg / max;
    while((scanf("%d %d %d %d", &a, &b, &c, &d)), (a != 0 || b != 0 || c != 0 || d != 0)) {
        int step1 = ((max * 2) * degPerUnit);
        int step2 = ((max * 1) * degPerUnit);
        int step3 = 0;
        
        if (a >= b) {
            step1 += (a - b) * degPerUnit;
        } else {
            step1 += ((a - 0) + (40 - b)) * degPerUnit;
        }
        
        if (c >= b) {
            step2 += (c - b) * degPerUnit;
        } else {
            step2 += ((40 - b) + (c - 0)) * degPerUnit;
        }
        
        if (c >= d) {
            step3 += (c - d) * degPerUnit;
        } else {
            step3 += ((c - 0) + (40 - d)) * degPerUnit;
        }
        
        int result = step1 + step2 + step3;
        
        printf("%d\n", result);
    }
    return 0;
}
