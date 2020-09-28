//
//  main.cpp
//  11332 - Summing Digits
//
//  Created by Alexis Quinto on 9/28/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    long long n;
    while((scanf("%lld", &n)), (n != 0)) {
        printf("%d\n", n % 9 == 0 ? 9 : n % 9);
    }
    return 0;
}
