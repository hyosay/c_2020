#include<iostream>
#include<vector>
using namespace std;

void search(int k) {
	vector<int> subset;
	int n = 1;
	if (k == n + 1){
		for (int i = 0; i < k; i++) {
			printf("%d", i);
		}
	}
	else {
		subset.push_back(k);
		search(k + 1);
		subset.pop_back();
		search(k + 1);
	}
}

int main() {
	search(1);
}
