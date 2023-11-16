// task_1.cpp

#include "task_1.h"

void bubbleSort(vector<string>& titles) {
    int n = titles.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Compare adjacent strings and swap if they are in the wrong order
            if (titles[j] > titles[j + 1]) {
                swap(titles[j], titles[j + 1]);
            }
        }
    }
}
