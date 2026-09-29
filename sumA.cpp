#include &lt;iostream&gt;
int main() {

long long sum = 0;
for (long long i = 0; i &lt; 100000000; i++) sum
+= i;
std::cout &lt;&lt; sum &lt;&lt; std::endl;
}
