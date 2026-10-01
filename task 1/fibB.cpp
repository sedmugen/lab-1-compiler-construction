#include <iostream>
long long fib(int n) { return n <= 1 ? n : fib(n-1) + fib(n-2); }
int main() { std::cout << fib(35) << std::endl; }
