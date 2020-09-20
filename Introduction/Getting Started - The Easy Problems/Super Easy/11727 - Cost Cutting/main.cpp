//
//  main.cpp
//  11727 - Cost Cutting
//
//  Created by Alexis Quinto on 9/18/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    for(int tc = 1; tc <= T; ++tc) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        if ((x < y && y < z) || (x > y && y > z)) {
            printf("Case %d: %d\n", tc, y);
        } else if ((y < x && x < z) || (y > x && x > z)) {
            printf("Case %d: %d\n", tc, x);
        } else {
            printf("Case %d: %d\n", tc, z);
        }
        
    }
    
    return 0;
}
