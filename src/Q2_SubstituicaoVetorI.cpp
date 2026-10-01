//
// Created by ITALOANTONIOCOSTAFEL on 01/10/2026.
//
#include <iostream>
#include <iostream>

#include "../include/ArrayList.h"
using namespace std;

int main() {
    const int N = 10;
    ArrayList<int> X(N);

    for (int i = 0 ; i < N ; i++) {
        int value;
        cin >> value;
        X.addLast(value);
    }
    for (int i = 0 ; i < X.size() ; i++) {
        if (X.get(i) <= 0) {
            X.set(i, 1);
        }
    }
    for (int i =0; i < X.size(); i++) {
        cout << "X [" << i << "] = " << X.get(i) << endl;

    }
    return 0;

}