#include <iostream>
#include <vector>
#include <cstdlib>
int main() {
    int n = 5000;
    std::vector<int> arr(n);
    srand(42);
    for (int i = 0; i < n; i++) arr[i] = rand() % 100000;
 
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j+1]) std::swap(arr[j], arr[j+1]);
 
    std::cout << arr[0] << " " << arr[n-1] << std::endl;
}
