#include <bits/stdc++.h>
using namespace std;
int main() {
	int *p = allocator<int>().allocate(512, (int*)0);
	allocator<int>().deallocate(p, 512);
}
