//
//  main.cpp
//  12279 - Emoogle Balance
//
//  Created by Alexis Quinto on 9/20/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int tc = 1;
    int n;
    while((scanf("%d", &n)), (n != 0)) {
        int x;
        int ctr = 0;
        while (n--) {
            scanf("%d", &x);
            if (x == 0) {
                --ctr;
            } else {
                ++ctr;
            }
        }
        printf("Case %d: %d\n", tc++, ctr);
    }
    
    return 0;
}
