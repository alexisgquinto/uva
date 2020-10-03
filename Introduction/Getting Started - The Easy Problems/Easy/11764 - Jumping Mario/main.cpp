//
//  main.cpp
//  11764 - Jumping Mario
//
//  Created by Alexis Quinto on 10/3/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int T, tc = 1;
    int N, nctr;
    int up, down, prev, curr;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        up = 0;
        down = 0;
        nctr = 0;
        while(N--) {
            scanf("%d", &curr);
            if(nctr > 0) {
                if (prev < curr) {
                    ++up;
                } else if (prev > curr){
                    ++down;
                }
            }
            prev = curr;
            ++nctr;
        }
        printf("Case %d: %d %d\n", tc++, up, down);
    }
    return 0;
}
