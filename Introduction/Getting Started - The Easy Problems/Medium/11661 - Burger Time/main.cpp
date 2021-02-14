//
//  main.cpp
//  11661 - Burger Time
//
//  Created by Alexis Quinto on 2/14/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>

#define MAX_SIZE 20000005

using namespace std;

int main(int argc, const char * argv[]) {
    //freopen("input.txt", "r", stdin);
    
    long L;
    while(cin >> L) {
        if (L == 0) break;
        
        string str;
        cin >> str;
        long d = -1;
        long r = -1;
        long min = MAX_SIZE;
        for (long l = 0; l < L; ++l) {
            if (str[l] == 'Z') {
                min = 0;
                break;
            }
            
            if (str[l] == 'R') {
                r = l;
            }
            
            if (str[l] == 'D') {
                d = l;
            }
            
            long tmp;
            if (r != -1 && d != -1) {
                if (r < d) {
                    tmp = d - r;
                    if (tmp < min) min = tmp;
                } else {
                    tmp = r - d;
                    if (tmp < min) min = tmp;
                }
            }
            
        }
        cout << min << '\n';
        
    }
    
    return 0;
}
