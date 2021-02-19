//
//  main.cpp
//  11687 - Digits
//
//  Created by Alexis Quinto on 2/20/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    string num;
    
    while (cin >> num) {
        if (num.compare("END") == 0) break;
        
        int i = 1;
        while (true) {
            long digit = num.size();
            
            stringstream ss;
            ss << digit;
            
            if (ss.str() == num) {
                break;
            } else {
                num = ss.str();
                ++i;
            }
        }
        
        cout << i << "\n";
    }
    
    return 0;
}
