//
//  main.cpp
//  11044 - Searching for Nessy
//
//  Created by Alexis Quinto on 9/15/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    int a, b;
    
    while(T--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", ((a/3) * (b/3)));
    }
    
    return 0;
}
