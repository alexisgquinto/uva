//
//  main.cpp
//  11942 - Lumberjack Sequencing
//
//  Created by Alexis Quinto on 10/3/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

#define MAX_L 10

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    printf("Lumberjacks:\n");
    
    int T;
    scanf("%d", &T);
    while(T--) {
        int arr[MAX_L];
        for (int i = 0; i < MAX_L; ++i) {
            scanf("%d", &arr[i]);
        }
        
        bool isIncreasing;
        if (arr[0] < arr[1]) {
            isIncreasing = true;
        } else {
            isIncreasing = false;
        }
        
        bool ordered = true;
        for (int i = 2; i < MAX_L; ++i) {
            if (isIncreasing && arr[i - 1] > arr[i]) {
                ordered = false;
                break;
            } else if (!isIncreasing && arr[i - 1] < arr[i]) {
                ordered = false;
                break;
            }
        }
        
        if (ordered) {
            printf("Ordered\n");
        } else {
            printf("Unordered\n");
        }
    }
    
    return 0;
}
