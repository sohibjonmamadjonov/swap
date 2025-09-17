#include <vector>
#include <utility>
#include <iostream>
using namespace std;

template <class T>
T swap(T a, T b) {
	T temp = move(a);
	a = move(b);
	b = move(temp);
}

int main() {
	int x = 10, y = 4 ;
    swap(x, y);
	cout << " X = "<< x;
	cout << " Y = " << y;
	 
 	
 
	vector<int> vec1 = { 1,2,3 };
	vector<int> vec2 = { 4,5,6 };
	swap(vec1, vec2);
	cout << "vec1[2] : " << vec1[2] <<endl<< "vec2[0] : " << vec2[0] << endl;
	return 0;
}