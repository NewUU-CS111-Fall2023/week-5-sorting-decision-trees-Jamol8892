#include <iostream>
#include <algorithm>  // Include this for swap
#include "task_2.h"

using namespace std;

namespace Task2 {
    void selectionSort(vector<int>& denominations) {
        int n = denominations.size();

        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;

            for (int j = i + 1; j < n; ++j) {
                if (denominations[j] < denominations[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap the found minimum element with the first element
            swap(denominations[i], denominations[minIndex]);
        }
    }

    void displaySortedDenominations(const vector<int>& denominations) {
        cout << "\nSorted denominations:\n";
        for (int i = 0; i < denominations.size(); ++i) {
            cout << denominations[i] << "\n";
        }
    }
}
