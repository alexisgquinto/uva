//
//  main.cpp
//  11498 - Division of Nlogonia
//
//  Created by Alexis Quinto on 9/18/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int K;
    while((scanf("%d", &K)), (K != 0)) {
        int N, M;
        scanf("%d %d", &N, &M);
        
        int x, y;
        while(K--) {
            scanf("%d %d", &x, &y);
            
            int xprime = x - N;
            int yprime = y - M;
            
            if (xprime == 0 || yprime == 0) {
                printf("divisa\n");
            } else {
                if (xprime < 0 && yprime > 0) {
                    printf("NO\n");
                } else if (xprime > 0 && yprime > 0) {
                    printf("NE\n");
                } else if (xprime > 0 && yprime < 0) {
                    printf ("SE\n");
                } else {
                    printf("SO\n");
                }
            }
            
        }
    }
    
    return 0;
}
