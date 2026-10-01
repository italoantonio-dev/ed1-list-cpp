//
// Created by ITALOANTONIOCOSTAFEL on 01/10/2026.
//
#include <iostream>
#include <initializer_list>
#include <unordered_set>
#include "../include/ArrayList.h"

using namespace std;

bool containsDuplicate(const ArrayList<int> & nums) {
    unordered_set<int> seen;

    for (int i = 0; i < nums.size(); i++) {
        if (!seen.insert(nums.get(i)).second) {
            return true;

        }

    }
    return false;
}

void runCase(initializer_list<int> values) {
    ArrayList<int> nums(100000);
    for (int v : values) nums.addLast(v);

    cout << "nums = " << nums.toString() << " -> " << containsDuplicate(nums) << endl;

}

int main() {
    runCase({1, 2, 3, 1});
    runCase({1, 2, 3, 4});
    runCase({1, 1, 1, 3, 3, 4, 3, 2, 4, 2});
        return 0;
}