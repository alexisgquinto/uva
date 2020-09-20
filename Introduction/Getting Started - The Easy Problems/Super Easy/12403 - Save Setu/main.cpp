//
//  main.cpp
//  12403 - Save Setu
//
//  Created by Alexis Quinto on 9/20/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    char action[10];
    int result = 0;
    int amount = 0;
    while(T--) {
        scanf("%s", action);
        if (strcmp(action, "donate") == 0) {
            scanf("%d", &amount);
            result += amount;
        } else {
            printf("%d\n", result);
        }
    }
    
    return 0;
}
