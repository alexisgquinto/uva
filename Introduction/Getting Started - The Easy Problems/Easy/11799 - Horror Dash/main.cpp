//
//  main.cpp
//  11799 - Horror Dash
//
//  Created by Alexis Quinto on 10/3/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int T, tc = 1;
    scanf("%d", &T);
    while(T--) {
        int N;
        int max = 0, value = 0;
        scanf("%d", &N);
        while(N--) {
            scanf("%d", &value);
            if (value > max) {
                max = value;
            }
        }
        printf("Case %d: %d\n", tc++, max);
    }
    return 0;
}
