//
//  main.cpp
//  10324 - Zeros and Ones
//
//  Created by Alexis Quinto on 2/1/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    string binaryStr;
    int tc = 1;
    while(cin >> binaryStr) {
        int n;
        cin >> n;
        
        int i, j;
        cout << "Case " << tc << ":\n";
        while(n--) {
            cin >> i >> j;
            
            int minIndex = min(i, j);
            int maxIndex = max(i, j);
            
            int character;
            bool flag = false;
            for (int index = minIndex; index <= maxIndex; ++index) {
                if (index == minIndex){
                    character = binaryStr[index];
                } else {
                    if (character != binaryStr[index]) {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag) {
                cout << "No\n";
            } else {
                cout << "Yes\n";
            }
        }
        ++tc;
    }
    
    
    return 0;
}
