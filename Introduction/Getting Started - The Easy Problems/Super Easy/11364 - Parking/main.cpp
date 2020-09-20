//
//  main.cpp
//  11364 - Parking
//
//  Created by Alexis Quinto on 9/17/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

#define MAX_N 25

using namespace std;

bool myfunction(int x, int y) {
    return x < y;
}

int calculateTotalDistance (int n, int midi, vector<int> myvector) {
    return ((myvector[midi] - myvector[0]) * 2) + ((myvector[n-1] - myvector[midi]) * 2);
}

int main() {
    freopen("input.txt", "r", stdin);

    int T;
    scanf("%d", &T);

    while(T--) {
        int n;
        scanf("%d", &n);

        vector<int> myvector;
        int x;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &x);
            myvector.push_back(x);
        }

        sort(myvector.begin(), myvector.end(), myfunction);
    
        int result = 0;
        if (n%2 == 0) {
            int mid1 = calculateTotalDistance(n, (n/2), myvector);
            int mid2 =  calculateTotalDistance(n, (n/2) - 1, myvector);
            
            if (mid1 < mid2) {
                result = mid1;
            } else {
                result = mid2;
            }
        } else {
            result =  calculateTotalDistance(n, (n/2), myvector);
        }
        printf("%d\n", result);
    }

    return 0;
}


