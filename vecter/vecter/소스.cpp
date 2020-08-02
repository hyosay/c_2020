#include <stdio.h>
#include <vector>
#include<iostream>
using namespace std;

void main() {
	vector<int> v = { 1,3,5,2,7 };
	v.pop_back();
	cout << v.back();

	
}