//
//  main.cpp
//  12577 - Hajj-e-Akbar
//
//  Created by Alexis Quinto on 9/20/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    char str[20];
    int tc = 1;
    while((scanf("%s", str)), (strcmp(str, "*") != 0)) {
        if (strcmp(str, "Hajj") == 0) {
            printf("Case %d: Hajj-e-Akbar\n", tc++);
        } else {
            printf("Case %d: Hajj-e-Asghar\n", tc++);
        }
    }
    
    return 0;
}
