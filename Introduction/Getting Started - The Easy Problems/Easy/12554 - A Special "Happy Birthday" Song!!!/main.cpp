//
//  main.cpp
//  12554 - A Special "Happy Birthday" Song!!!
//
//  Created by Alexis Quinto on 11/8/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

#define NAME_LEN 105
#define SONG_W0RD_LEN 10
#define SONG_LEN 16

int main(int argc, const char * argv[]) {
    freopen("input.txt", "r", stdin);
    
    int N;
    scanf("%d", &N);
    
    char song[SONG_LEN][SONG_W0RD_LEN] = {
        "Happy",
        "birthday",
        "to",
        "you",
        "Happy",
        "birthday",
        "to",
        "you",
        "Happy",
        "birthday",
        "to",
        "Rujia",
        "Happy",
        "birthday",
        "to",
        "you"
    };
    
    char members[NAME_LEN][NAME_LEN];
    
    int ctr = 0;
    while(ctr < N) {
        scanf("%s", members[ctr]);
        ++ctr;
    }
    
    ctr = 0;
    int largest = SONG_LEN < N ? N : SONG_LEN;
    int multiplier = largest / SONG_LEN;
    int excess = largest % SONG_LEN;
    int finalLen = SONG_LEN * multiplier;
    if (excess > 0) finalLen += SONG_LEN;

    while(ctr < finalLen) {
        printf("%s: %s\n", members[ctr % N], song[ctr % SONG_LEN]);
        ++ctr;
    }
    
    return 0;
}
