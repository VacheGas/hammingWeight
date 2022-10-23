#include <iostream>

int hammingWeight(uint32_t n) {
	int res = 0;

	while (n != 0) {
		n &= n - 1; 
		res++;
	}
	return res;
}

int main() {
	int count_one = hammingWeight(99);
	std::cout << count_one << std::endl;
}