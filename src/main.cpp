#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"

using namespace Task3;
using namespace Task4;

int main() {
    cout << "Task 1: " << endl;
    vector<string> bookTitles = {
            "Catcher in the Rye",
            "Pride and Prejudice",
            "To Kill a Mockingbird",
            "The Great Gatsby",
            "Moby Dick"
    };

    bubbleSort(bookTitles);

    for (const auto &title: bookTitles) {
        cout << title << endl;
    }
        cout << "Task 2: " << endl;

    int numDenominations;
    cout << "Enter the number of denominations: ";
    cin >> numDenominations;

    vector<int> denominations(numDenominations);
    cout << "Enter the denominations:\n";
    for (int i = 0; i < numDenominations; ++i) {
        cin >> denominations[i];
    }

    Task2::selectionSort(denominations);

    Task2::displaySortedDenominations(denominations);

        cout << "Task 3: " << endl;

    vector<string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    rearrangeSoldiers(soldiers);

    cout << "Rearranged soldiers:\n";
    for (const auto& soldier : soldiers) {
        cout << soldier << "\n";
    }

        cout << "Task 4: " << endl;

    vector<int> arr = {5, 2, 8, 1, 4, 6};

    int result = countElementsWithSmallerNeighbors(arr);
    cout << result << "\n";

        cout << "Task 5: " << endl;

}
