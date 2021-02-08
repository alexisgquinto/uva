//
//  main.cpp
//  10919 - Prerequisites
//
//  Created by Alexis Quinto on 2/4/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <map>

#define MAX_K 105
#define MAX_M 105

using namespace std;

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int k, m;
    while (cin >> k) {
        if (k == 0) break;
        
        cin >> m;
        
        map<int, bool> courses;
        
        for (int i = 0; i < k; ++i) {
            int course;
            cin >> course;
            courses[course] = false;
        }
        
        bool graduate = true;
        while (m--) {
            int c, r;
            cin >> c >> r;
            
            int takenCourses = 0;
            int i = 0;
            while (i < c) {
                int course;
                cin >> course;
                ++i;
                
                if (courses.find(course) != courses.end()) {
                    if (takenCourses >= r) {
                        continue;
                    }
                    
                    ++takenCourses;
                }
            }
            
            if (takenCourses < r) {
                graduate = false;
            }
        }
        
        if (graduate) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
        
    }
    
    return 0;
}
