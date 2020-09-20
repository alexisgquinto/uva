//
//  main.cpp
//  IORoutine
//
//  Created by Alexis Quinto on 9/13/20.
//  Copyright © 2020 Alexis Quinto. All rights reserved.
//

#include <iostream>

/*
 Repeat until TC is 0
 3
 1 2
 5 7
 6 3
 */
void run1() {
    int TC, a, b;
    scanf("%d", &TC);
    while (TC--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}

/*
 When both numbers are 0
 1 2
 5 7
 6 3
 0 0
 */
void run2() {
    int a, b;
    while(scanf("%d %d", &a, &b), (a || b)) {
        printf("%d\n", a + b);
    }
}

/*
 Scanf returns number of items read
 1 2
 5 7
 6 3
 */
void run3() {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", a + b);
    }
}

/*
 Check for EOF
 1 2
 5 7
 6 3
 */
void run4() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }
}

/*
 Check for EOF with case number
 */
void run5() {
    int a, b, c = 1;
    freopen("input.txt", "r", stdin);
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("Case %d: %d\n\n", c++, a + b);
    }
}

/*
 Put blank only in between test cases
 */
void run6() {
    int a, b, c = 1;
    freopen("input.txt", "r", stdin);
    while (scanf("%d %d", &a, &b) != EOF) {
        if (c > 1) printf("\n");
        printf("Case %d: %d\n", c++, a + b);
    }
}

/*
 Variable number of inputs
*/
void run7() {
    int k, ans, v;
    freopen("input2.txt", "r", stdin);
    while(scanf("%d", &k) != EOF) {
        ans = 0;
        while(k--) {
            scanf("%d", &v);
            ans += v;
        }
        printf("%d\n", ans);
    }
}


int N; // using global variables in contest can be a good strategy
char x[110]; // make it a habit to set array size a bit larger that needed

/*
 C standard I/O has partial regex capabilities
 */
void run8() {
    freopen("input3.txt", "r", stdin);
    scanf("%d\n", &N);
    while(N--) {
        scanf("0.%[0-9]...\n", x);
        printf("the digits are 0.%s\n", x);
    }
}

int main(int argc, const char * argv[]) {
    printf("Hello, World!\n");
    run5();
    return 0;
}
