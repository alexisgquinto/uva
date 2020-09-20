//
//  main.cpp
//  12372 - Packing for Holiday
//
//  Created by Alexis Quinto on 9/20/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int T;
    int tc = 1;
    scanf("%d", &T);
    
    while(T--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        if (x <= 20 && y <= 20 && z <= 20) {
            printf("Case %d: good\n", tc++);
        } else {
            printf("Case %d: bad\n", tc++);
        }
    }
    
    return 0;
}
