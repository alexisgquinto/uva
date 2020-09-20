//
//  main.cpp
//  11547 - Automatic Answer
//
//  Created by Alexis Quinto on 9/18/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    while(T--) {
        int n;
        scanf("%d", &n);
        
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        
        if (n < 0) n *= -1;
        n /= 10;
        
        printf("%d\n", n%10);
    }
    
    return 0;
}
