//
//  main.cpp
//  573 - The Snail
//
//  Created by Alexis Quinto on 1/26/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>

using namespace std;

bool hasReachedGoal(double y, double height) {
    return (y < 0 || y > height);
}

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    double h, u, d, f;
    cin >> h;
    
    while (h != 0) {
        cin >> u >> d >> f;
        
        int day = 0;
        double distanceClimbed = 0;
        
        double ff = u * (f/100);
        
        while (distanceClimbed >= 0 && distanceClimbed <= h) {
            if (u - ff >= 0) {
                if (day >= 1) {
                    distanceClimbed += u - ff;
                    u -= ff;
                } else {
                    distanceClimbed += u;
                }
                
                if (hasReachedGoal(distanceClimbed, h)) break;
                
                distanceClimbed -= d;
                
                if (hasReachedGoal(distanceClimbed, h)) break;
            } else {
                distanceClimbed -= d;
                if (hasReachedGoal(distanceClimbed, h)) break;
            }
            day++;
        }
        
        if (distanceClimbed >= h) {
            cout << "success on day " << day + 1 << '\n';
        } else {
            cout << "failure on day " << day + 1 << '\n';
        }
        
        cin >> h;
    }
    
}
