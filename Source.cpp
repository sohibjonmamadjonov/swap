#include <vector>
#include <iostream>
using namespace std;
template<typename T>
void my_swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
int main() {
	int x = 123, y = 23;
	swap(x, y);
	cout << " X = " << x;

	cout << " Y = " << y << endl;;
	vector<int> vec1 = { 23,12,32 };

	vector<int> vec2 = { 32,34,15 };
	swap(vec1, vec2);
	cout << "vec1[2] : " << vec1[2] << endl << "vec2[0] : " << vec2[0] << endl;
	return 0;
}
