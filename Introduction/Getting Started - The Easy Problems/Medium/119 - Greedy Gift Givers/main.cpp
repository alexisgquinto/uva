//
//  main.cpp
//  119 - Greedy Gift Givers
//
//  Created by Alexis Quinto on 1/23/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int numGivers;
    int count = 0;
    while(cin >> numGivers) {
        map<string, int> given;
        vector<string> orderedNames;
        
        string tmpName;
        for (int i = 0; i < numGivers; ++i) {
            cin >> tmpName;
            orderedNames.push_back(tmpName);
        }
        
        int tmp = numGivers;
        while (tmp--) {
            string giverName;
            int amount;
            int numTakers;
            cin >> giverName >> amount >> numTakers;
            
            if (numTakers > 0) {
                int giveAwayAmount = amount / numTakers;
                int remainingAmount = amount - (giveAwayAmount * numTakers);
                
                given[giverName] -= amount;
                given[giverName] += remainingAmount;
                for (int i = 0; i < numTakers; ++i) {
                    string takerName;
                    cin >> takerName;
                    given[takerName] += giveAwayAmount;
                }
            }
        }
        
        if (count > 0)
                cout << endl;
        
        for (int i = 0; i < numGivers; ++i) {
            cout << orderedNames[i] << " " << given[orderedNames[i]] << "\n";
        }
        
        count++;
    }
    
    return 0;
}
