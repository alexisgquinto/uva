//
//  main.cpp
//  10114 - Loansome Car Buyer
//
//  Created by Alexis Quinto on 9/23/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

#define MAX_MONTHS 100

using namespace std;

class DepValue {
public:
    int month;
    double percentage;
};

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int months;
    double downPayment;
    double carAmount;
    int n;
    
    while((scanf("%d %lf %lf %d", &months, &downPayment, &carAmount, &n)), (months >= 0)) {
        DepValue arr[MAX_MONTHS];
        int ctr = 0;
        int tmpN = n;
        while(tmpN--) {
            scanf("%d %lf", &arr[ctr].month, &arr[ctr].percentage);
            ++ctr;
        }
        
        ctr = 0;
        double totalOwed = carAmount;
        double depreciatingCarAmount = carAmount + downPayment;
        double monthlyPayment = carAmount / months;
        
        for (int i = 0; i <= months; ++i) {
            if (i != 0 && ctr + 1 < n && i == arr[ctr + 1].month) ctr++;
            
            DepValue x = arr[ctr];
            depreciatingCarAmount -= depreciatingCarAmount  * x.percentage;
            
            if (i != 0) totalOwed -= monthlyPayment;
            if (depreciatingCarAmount > totalOwed) {
                if (i == 1) {
                    printf("%d month\n", i);
                } else {
                    printf("%d months\n", i);
                }
                break;
            }
        }
    }
    return 0;
}
