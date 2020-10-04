//
//  main.cpp
//  12015 - Google is Feeling Lucky
//
//  Created by Alexis Quinto on 10/4/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <list>
#include <string>

#define MAX_N 10

using namespace std;

// To improve the solution, Map can be used instead of List
int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int T, tc = 1;
    cin >> T;
    
    while(T--) {
        list<string> L;
        
        int ctr = MAX_N;
        int  globalRelevance = 0;
        while(ctr--) {
            string str;
            int r;
            cin >> str >> r;
            
            if (ctr == MAX_N - 1) {
                globalRelevance = r;
                L.push_back(str);
            } else {
                if (globalRelevance < r) {
                    L.clear();
                    globalRelevance = r;
                    L.push_back(str);
                } else if (globalRelevance == r) {
                    L.push_back(str);
                }
            }
        }
        
        cout << "Case #" << tc++ << ":" << '\n';
        list<string>::iterator it;
        for (it = L.begin(); it != L.end(); ++it) {
            cout << *it << '\n';
        }
    }
    
    return 0;
}
