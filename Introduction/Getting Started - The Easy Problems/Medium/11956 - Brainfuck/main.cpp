//
//  main.cpp
//  1195 - Brainfuck
//
//  Created by Alexis Quinto on 2/20/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <iomanip>

#define MAX_SIZE 100

using namespace std;

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int T;
    cin >> T;
    int ctr = 1;
    while (T--) {
        cout << "Case " << ctr << ": ";
        int ptr = 0;
        int array[MAX_SIZE];
        
        for (int i = 0; i < MAX_SIZE; ++i) {
            array[i] = 0;
        }

        string line;
        cin >> line;

        for (int i = 0; i < line.size(); ++i) {
            char c = line[i];

            switch(c) {
                case '>':
                    ptr = (ptr + 1) % MAX_SIZE;
                    break;
                case '<':
                    ptr -= 1;
                    if (ptr < 0) ptr = MAX_SIZE - 1;
                    break;
                case '+':
                    if (array[ptr] == 255) {
                        array[ptr] = 0;
                    } else {
                        array[ptr] += 1;
                    }
                    break;
                case '-':
                    if (array[ptr] == 0) {
                        array[ptr] = 255;
                    } else {
                        array[ptr] -= 1;
                     }
                    break;
            }
        }
        
        for (int i = 0; i < MAX_SIZE; ++i) {
            if (i > 0) cout << " ";
            //printf("%02X", array[i]);
            cout << hex << setfill('0') << setw(2) << array[i];
        }
        
        cout << "\n";
        ctr++;
    }
    
    return 0;
}
