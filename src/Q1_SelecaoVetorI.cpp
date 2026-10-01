//
// Created by ITALOANTONIOCOSTAFEL on 01/10/2026.
//
#include <iostream>
#include <iomanip>
#include "../include/ArrayList.h"
using namespace std;


int main() {
    const int N = 100;
    ArrayList<double> A(N);


    for (int i = 0; i < N; i++) {
        double value;
        cin >> value;
        A.addLast(value);
    }

    cout << fixed << setprecision(1);

    for (int i = 0; i < A.size(); i++) {
        if (A.get(i) <= 10.00) {
            cout <<"A[" << i << "] = " << A.get(i) << endl;
        }
    }

 return 0;

}