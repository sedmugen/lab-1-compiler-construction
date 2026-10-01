#include <iostream>

int main() {
int count = 0;
for (int n = 2; n < 200000; n++) {
bool isPrime = true;
for (int d = 2; d * d <= n; d++) if
(n % d == 0) { isPrime = false; break; }
if (isPrime) count++;
}
std::cout << count << std::endl;
}