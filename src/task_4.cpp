#include "task_4.h"

using namespace std;

namespace Task4 {
    int countElementsWithSmallerNeighbors(const vector<int>& arr) {
        int count = 0;
        int size = arr.size();

        // Iterate through the array, considering each element and its neighboring elements
        for (int i = 1; i < size - 1; ++i) {
            // Use conditional checks to identify elements meeting the criteria
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1] && arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
                ++count;
            }
        }

        return count;
    }
}
