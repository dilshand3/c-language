#include <iostream>
#include <vector>
#include <algorithm> // swap function के लिए

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    
    // Outer loop: n-1 passes के लिए चलता है
    for (int i = 0; i < n - 1; i++) {
        
        // Inner loop: comparisons के लिए। 
        // हर pass के बाद, सबसे बड़ा element अंत में place हो जाता है, 
        // इसलिए हमें n-i-1 elements की ही जाँच करनी होती है।
        for (int j = 0; j < n - i - 1; j++) {
            
            // Adjacent elements की तुलना करें
            if (arr[j] > arr[j + 1]) {
                // अगर गलत order में हैं, तो swap करें
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> numbers = {5, 1, 4, 2, 8};
    
    cout << "Original array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(numbers);

    cout << "Sorted array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}