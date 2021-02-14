//
//  main.cpp
//  11586 - Train Tracks
//
//  Created by Alexis Quinto on 2/13/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isLoop(const string &str) {
    int countM = 0;
    int countF = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'M')
            ++countM;
        if (str[i] == 'F')
            ++countF;
    }
    
    if (countM == countF && countM > 1)
        return true;
    return false;
}

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);

    int i;
    cin >> i;
    
    cin >> ws;
    while (i--) {
        string line;
        getline(cin, line);
        
        bool match =isLoop(line);
        
        if (!match) {
            cout << "NO LOOP\n";
        } else {
            cout << "LOOP\n";
        }
    }
    
    
    return 0;
}
