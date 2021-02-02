//
//  main.cpp
//  10424 - Love calculator
//
//  Created by Alexis Quinto on 2/1/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

double processName(string a) {
    double digit = 0;
    for (int i = 0; i < a.length(); ++i) {
        if ('a'<= a[i] && a[i] <= 'z') {
            digit += a[i] - 'a' + 1;
        } else if ('A'<= a[i] && a[i] <= 'Z') {
            digit += a[i] - 'A' + 1;
        } if ('0' <= a[i] && a[i] <= '9') {
            digit += a[i] - '1' + 1;
        }
    }
    return digit;
}

double getDigitalRoot(double digit) {
    stringstream ss;
    ss << digit;
    return processName(ss.str());
}


int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    string nameA;
    string nameB;
    
    while(getline(cin, nameA)) {
        getline(cin, nameB);
        
        double digitA = processName(nameA);
        double digitB = processName(nameB);
        
        while (digitA > 9) {
            digitA = getDigitalRoot(digitA);
        }
        
        while (digitB > 9) {
            digitB = getDigitalRoot(digitB);
        }
        
        double result = 0.0;
        if (digitA < digitB) {
            result = (digitA / digitB) * 100;
        } else {
            result = (digitB / digitA) * 100;
        }
        
        cout << fixed << setprecision(2) << result << " %\n";
    }
    
    return 0;
}
