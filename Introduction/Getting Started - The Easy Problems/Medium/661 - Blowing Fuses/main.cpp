//
//  main.cpp
//  661 - Blowing Fuses
//
//  Created by Alexis Quinto on 1/28/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>

#define MAX_N 25
#define MAX_O 100000

using namespace std;

int main(int argc, const char * argv[]) {
    //freopen("input.txt", "r", stdin);
    int n, m, c;
    int t = 1;
    
    cin >> n >> m >> c;
    while (n != 0) {
        bool switches[MAX_N] = {0};
        int powers[MAX_N] = {0};
        int operations[MAX_O] = {0};
        
        int i = 1;
        while (i <= n) {
            cin >> powers[i];
            ++i;
        }
        
        int opCtr = 0;
        while (opCtr < m) {
            cin >> operations[opCtr];
            ++opCtr;
        }
            
        int combinedPower = 0;
        int maxPower = 0;
        
        int ctrM = 0;
        while (ctrM < m) {
            int d = operations[ctrM];
            
            if (!switches[d]) { //will turn on
                combinedPower += powers[d];
                if (c < combinedPower) {
                    break; //blowing fuse
                }
            } else { // will not turn on
                combinedPower -= powers[d];
            }
            
            if (maxPower < combinedPower)
                maxPower = combinedPower;
            
            switches[d] = !switches[d];
            ++ctrM;
        }
        
        cout << "Sequence " << t << "\n";
        if (c < combinedPower) {
            cout << "Fuse was blown." << "\n\n";
        } else {
            cout << "Fuse was not blown." << "\n";
            
            if (maxPower == 1) {
                cout << "Maximal power consumption was " << maxPower << " amperes.\n\n";
            } else {
                cout << "Maximal power consumption was " << maxPower << " amperes.\n\n";
            }
            
        }
        
        ++t;
        cin >> n >> m >> c;
    }
    
    return 0;
}
