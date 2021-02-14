//
//  main.cpp
//  11683 - Laser Sculpture
//
//  Created by Alexis Quinto on 2/14/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int A, C;
    while(cin >> A >> C) {
        if (A == 0) break;
        
        int answer = 0;
        int p1, p2 = 0;
        
        cin >> p1;
        for (int i = 2; i <= C; ++i) {
            cin >> p2;
            
            if (p1 < p2) {
                answer += p2 - p1;
            }
            
            p1 = p2;
        }
        
        if (C == 1) p2 = p1;
        answer += A - p2;
        
        cout << answer << "\n";
    }
    
    return 0;
}
