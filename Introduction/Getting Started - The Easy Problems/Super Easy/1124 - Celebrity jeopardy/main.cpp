//
//  main.cpp
//  1124 - Celebrity jeopardy
//
//  Created by Alexis Quinto on 9/13/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    string strline;
    
    int tc = 1;
    while(getline(cin, strline)) {
        if (tc++ != 1) cout << "\n";
        cout << strline;
    }
    
    return 0;
}
