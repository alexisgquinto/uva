//
//  main.cpp
//  11559 - Event Planning
//
//  Created by Alexis Quinto on 9/29/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

#define MAX_LOWEST 99999999

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);

    int N, B, H, W;
    while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF) {
        int lowestPrice = MAX_LOWEST;
        while(H--) {
            int pricePerPax;
            scanf("%d", &pricePerPax);
            int tmpW = W;
            int numBeds, tmp;
            while(tmpW--) {
                scanf("%d", &numBeds);
                if (numBeds >= N) {
                    tmp = N * pricePerPax;
                    if (tmp < lowestPrice && tmp <= B) {
                        lowestPrice = tmp;
                    }
                }
            }
        }
        if (lowestPrice == MAX_LOWEST)
            printf("stay home\n");
        else
            printf("%d\n", lowestPrice);
    }
    return 0;
}
