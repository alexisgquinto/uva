//
//  main.cpp
//  10963 - The Swallowing Ground
//
//  Created by Alexis Quinto on 9/27/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int T;
    scanf("%d", &T);
    
    int printCtr = 1;
    while(T--) {
        if (printCtr > 1) printf("\n");
        printCtr++;
        
        int W;
        scanf("%d", &W);
        bool inconsistentGap = false;
        
        int y1, y2;
        int gap = 0, prevgap = 0;
        int ctr = 0;
        while(W--) {
            scanf("%d %d", &y1, &y2);
            gap = y1 - y2;
            if (ctr == 0) {
                prevgap = gap;
            } else {
                if (prevgap != gap) {
                    inconsistentGap = true;
                }
            }
            ctr++;
        }
        if(inconsistentGap)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
