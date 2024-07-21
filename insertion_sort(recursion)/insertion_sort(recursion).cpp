#include<iostream>
#include<vector>
void insertion_sort(std::vector<int>& a, int i, int n) {
	if (i == n)return;
	int j = i;
	while(j>0 && a[j-1]>a[j]){
		std::swap(a[j], a[j - 1]);
		j--;
	}
	insertion_sort(a, i + 1, n);

}
int main() {
	std::vector<int> a = { 1,4,3,2,54,3,5,5,34,2,5,4,2,5,3,23,1,1,1,32,43,54,6,4,3,2,4,5,6,7 };
	insertion_sort(a, 0, a.size() - 1); 
	for (auto x : a) {
		std::cout << x << " ";
	}
	

}