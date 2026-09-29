#include <iostream>
int main() {

long long sum = 0;
for (long long i = 0; i < 100000000; i++) sum
+= i;
std::cout << sum << std::endl;
}