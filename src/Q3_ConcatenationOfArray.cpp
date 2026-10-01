//
// Created by ITALOANTONIOCOSTAFEL on 01/10/2026.
//

#include <iostream>
#include <initializer_list>
#include "../include/ArrayList.h"

using namespace std;

void getConcatenationOfArrayList(ArrayList<int> & nums, ArrayList<int> & ans) {
    ans.clear();
    int n = nums.size();


    for (int round = 0; round < 2; round++) {
        for (int i = 0; i < n; i++) {
            ans.addLast(nums.get(i));

        }
    }
}

void runCase(initializer_list<int> values) {
    ArrayList<int> nums(1000);
    ArrayList<int> ans(1000);
    for (int v : values) nums.addLast(v);
    getConcatenationOfArrayList(nums, ans);
    cout << "nums = " << nums.toString() << " ->" << ans.toString() << endl;
}

int main() {
    runCase({1 , 2, 1});
    runCase({1, 3, 2, 1});
    return 0;
}