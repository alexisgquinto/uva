//
//  main.cpp
//  12250 - Language Detection
//
//  Created by Alexis Quinto on 9/19/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <string.h>

#define MAX_LENGTH 20

using namespace std;

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    char str[MAX_LENGTH];
    int c = 1;
    while((scanf("%s", str)), strcmp(str, "#") != 0) {
        if (strcmp(str, "HELLO") == 0) {
            printf("Case %d: ENGLISH\n", c++);
        } else if (strcmp(str, "HOLA") == 0) {
            printf("Case %d: SPANISH\n", c++);
        } else if (strcmp(str, "HALLO") == 0) {
            printf("Case %d: GERMAN\n", c++);
        } else if (strcmp(str, "BONJOUR") == 0) {
            printf("Case %d: FRENCH\n", c++);
        } else if (strcmp(str, "CIAO") == 0) {
            printf("Case %d: ITALIAN\n", c++);
        } else if (strcmp(str, "ZDRAVSTVUJTE") == 0){
            printf("Case %d: RUSSIAN\n", c++);
        } else {
            printf("Case %d: UNKNOWN\n", c++);
        }
    }
    
    return 0;
}
