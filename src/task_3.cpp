#include "task_3.h"

using namespace std;

namespace Task3 {
    void rearrangeSoldiers(vector<string>& soldiers) {
        int numSoldiers = soldiers.size();

        // Iterate through the list of soldiers, swapping each with their adjacent companion
        for (int i = 0; i < numSoldiers - 1; i += 2) {
            swap(soldiers[i], soldiers[i + 1]);
        }

        // When the number of soldiers is odd, ensure the last one remains in place
        if (numSoldiers % 2 == 1) {
            // No need to swap the last soldier if the count is odd
        }
    }
}
