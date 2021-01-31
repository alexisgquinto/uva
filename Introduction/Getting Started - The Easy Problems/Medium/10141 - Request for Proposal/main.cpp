//
//  main.cpp
//  10141 - Request for Proposal
//
//  Created by Alexis Quinto on 1/31/21.
//  Copyright © 2021 Alexis Quinto. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Proposal {
public:
    string name;
    double price;
    double reqMet;
    
    double getCompliance (double n) {
        return reqMet / n;
    }
};

int main(int argc, const char * argv[]) {
    // freopen("input.txt", "r", stdin);
    
    int n, p;
    int ctrT = 1;
    while (cin >> n >> p) {
        if (n == 0 && p == 0) break;
        
        int ctrN = 0;
        cin >> ws;
        while (ctrN < n) {
            string req;
            getline(cin, req);
            ++ctrN;
        }
        
        int ctrP = 0;
        Proposal bestProposal;
        cin >> ws;
        while (ctrP < p) {
            Proposal proposal;
            getline(cin, proposal.name);
            cin >> proposal.price;
            cin >> proposal.reqMet;
            
            int ctrReqMet = 0;
            cin >> ws;
            while (ctrReqMet < proposal.reqMet) {
                string reqMetName;
                getline(cin, reqMetName);
                ++ctrReqMet;
            }
            
            if (ctrP == 0) {
                bestProposal = proposal;
            } else {
                double bpComp = bestProposal.getCompliance(n);
                double pComp = proposal.getCompliance(n);
                if (bpComp < pComp) {
                    bestProposal = proposal;
                } else if (bpComp == pComp && bestProposal.price > proposal.price) {
                    bestProposal = proposal;
                }
            }
            ++ctrP;
        }
        
        if (ctrT > 1) cout << "\n";
        
        cout << "RFP #" << ctrT << "\n";
        cout << bestProposal.name << "\n";
        
        ++ctrT;
    }
    
    return 0;
}
