//
// Created by ITALOANTONIOCOSTAFEL on 01/10/2026.
//
#include <iostream>
#include <initializer_list>
#include "../include/ArrayList.h"

using namespace std;


int findMaxConsecutiveOnes(const ArrayList<int>& nums) {
    int best = 0;
    int current = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums.get(i) == 1) {
            current++;
            if (current > best) best = current;
        } else {
            current = 0;
        }
    }
    return best;
}

void runCase(initializer_list<int> values) {
    ArrayList<int> nums(100000);
    for (int v : values) nums.addLast(v);

    cout << "nums = " << nums.toString() << " -> " << findMaxConsecutiveOnes(nums) << "\n";
}

int main() {
    runCase({1, 1, 0, 1, 1, 1});
    runCase({1, 0, 1, 1, 0, 1});
    return 0;
}