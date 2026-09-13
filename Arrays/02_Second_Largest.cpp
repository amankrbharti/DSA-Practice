#include <iostream>
#include <vector>
using namespace std;

// Logic
int secondLargest(vector<int>& arr) {
    int largest = arr[0];
    int second = -1;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    return second;
}

// Main function
int main() {
    vector<int> arr = {10, 5, 8, 20, 15};

    cout << "Second Largest: " << secondLargest(arr);

    return 0;
}
