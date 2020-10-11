//
//  main.cpp
//  12157 - Tariff Plan
//
//  Created by Alexis Quinto on 10/11/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>

#define MILE_MIN_COST 10
#define MILE_DURATION 30
#define MILE_CHARGE(x) (((x+1)/MILE_DURATION) * MILE_MIN_COST)
#define MILE_REM_CHARGE(x) ((x+1)%MILE_DURATION)

#define JUICE_MIN_COST 15
#define JUICE_DURATION 60
#define JUICE_CHARGE(x) (((x+1)/JUICE_DURATION) * JUICE_MIN_COST)
#define JUICE_REM_CHARGE(x) ((x+1)%JUICE_DURATION)

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int T, tc = 1;
    scanf("%d", &T);
    
    while(T--) {
        int N;
        scanf("%d", &N);
        
        int mile = 0;
        int juice = 0;
        while(N--) {
            int x;
            scanf("%d", &x);
            
            mile += MILE_CHARGE(x);
            mile += MILE_REM_CHARGE(x) == 0 ? 0 : MILE_MIN_COST;
            
            juice += JUICE_CHARGE(x);
            juice += JUICE_REM_CHARGE(x) == 0 ? 0 : JUICE_MIN_COST;
        }
        
        // printf("%d & %d ", mile, juice);
        if (mile == juice) {
            printf("Case %d: Mile Juice %d\n", tc++, mile);
        } else {
            if (mile > juice) {
                printf("Case %d: Juice %d\n", tc++, juice);
            } else {
                printf("Case %d: Mile %d\n", tc++, mile);
            }
        }
    }
    return 0;
}
