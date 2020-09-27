//
//  main.cpp
//  621 - Secret Research
//
//  Created by Alexis Quinto on 9/22/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    string n;
    while(T--) {
        cin >> n;
        unsigned long len = n.length();
        if (len >= 3 && n[len - 2] == '3' && n[len - 1] == '5') {
            printf("-\n");
        } else if (len >= 3 && n[0] == '9' && n[len - 1] == '4') {
            printf("*\n");
        } else if (len >= 4 && n[0] == '1' && n[1] == '9' && n[2] == '0') {
            printf("?\n");
        } else {
            printf("+\n");
        }
    }
    
    return 0;
}
