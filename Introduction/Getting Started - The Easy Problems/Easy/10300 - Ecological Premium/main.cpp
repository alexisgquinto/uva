//
//  main.cpp
//  10300 - Ecological Premium
//
//  Created by Alexis Quinto on 9/27/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    while(T--) {
        int F;
        scanf("%d", &F);
        
        double sum = 0;
        double x, y, z;
        while(F--) {
            scanf("%lf %lf %lf", &x, &y, &z);
            sum += ((x/y) * z) * y;
        }
        
        printf("%lld\n", (long long) sum);
    }
    
    
    return 0;
}
