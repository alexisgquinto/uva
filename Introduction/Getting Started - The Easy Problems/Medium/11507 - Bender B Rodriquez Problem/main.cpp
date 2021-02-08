//
//  main.cpp
//  11507 - Bender B Rodriquez Problem
//
//  Created by Alexis Quinto on 2/6/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string>

#define POS_X 1
#define POS_Y 2
#define NEG_X 3
#define NEG_Y 4
#define POS_Z 5
#define NEG_Z 6

using namespace std;

string getAxisString(int value) {
    switch(value) {
        case POS_X:
            return "+x";
        case POS_Y:
            return "+y";
        case NEG_X:
            return "-x";
        case NEG_Y:
            return "-y";
        case POS_Z:
            return "+z";
        case NEG_Z:
            return "-z";
    }
    return 0; //invalid
}

int getAxisValue(string axis) {
    if (axis.compare("+x") == 0) {
        return POS_X;
    } else if (axis.compare("+y") == 0) {
        return POS_Y;
    } else if (axis.compare("-x") == 0) {
        return NEG_X;
    } else if (axis.compare("-y") == 0) {
        return NEG_Y;
    } else if (axis.compare("+z") == 0) {
        return POS_Z;
    } else if (axis.compare("-z") == 0) {
        return NEG_Z;
    }
    return 0; //invalid
}

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int L;
    while(cin >> L) {
        if (L == 0) break;
        
        int direction = POS_X;
        for (int i = 1; i <= L - 1; ++i) {
            string bend;
            cin >> bend;
            
            int bValue = getAxisValue(bend);
            
            switch(direction) {
                case POS_X:
                    switch(bValue) {
                        case POS_Z:
                            direction = POS_Z;
                            break;
                        case NEG_Z:
                            direction = NEG_Z;
                            break;
                        case POS_Y:
                            direction = POS_Y;
                            break;
                        case NEG_Y:
                            direction = NEG_Y;
                            break;
                    }
                    break;
                case POS_Y:
                    switch(bValue) {
                        case POS_Z:
                            direction = POS_Y;
                            break;
                        case NEG_Z:
                            direction = POS_Y;
                            break;
                        case POS_Y:
                            direction = NEG_X;
                            break;
                        case NEG_Y:
                            direction = POS_X;
                            break;
                    }
                    break;
                case NEG_X:
                    switch(bValue) {
                        case POS_Z:
                            direction = NEG_Z;
                            break;
                        case NEG_Z:
                            direction = POS_Z;
                            break;
                        case POS_Y:
                            direction = NEG_Y;
                            break;
                        case NEG_Y:
                            direction = POS_Y;
                            break;
                    }
                    break;
                case NEG_Y:
                    switch(bValue) {
                        case POS_Z:
                            direction = NEG_Y;
                            break;
                        case NEG_Z:
                            direction = NEG_Y;
                            break;
                        case POS_Y:
                            direction = POS_X;
                            break;
                        case NEG_Y:
                            direction = NEG_X;
                            break;
                    }
                    break;
                case POS_Z:
                    switch(bValue) {
                        case POS_Z:
                            direction = NEG_X;
                            break;
                        case NEG_Z:
                            direction = POS_X;
                            break;
                        case POS_Y:
                            direction = POS_Z;
                            break;
                        case NEG_Y:
                            direction = POS_Z;
                            break;
                    }
                    break;
                case NEG_Z:
                    switch(bValue) {
                        case POS_Z:
                            direction = POS_X;
                            break;
                        case NEG_Z:
                            direction = NEG_X;
                            break;
                        case POS_Y:
                            direction = NEG_Z;
                            break;
                        case NEG_Y:
                            direction = NEG_Z;
                            break;
                    }
                    break;
            }
            
        }
        
        cout << getAxisString(direction) << "\n";
    }
    
    
    return 0;
}
