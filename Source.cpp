#include <vector>
#include <iostream>

using namespace std;
template<typename T>
class Vector {
private:
	T* data;
	size_t size, cap;
public:
	Vector(size_t size = 4) :size(size) {
		data = new T[size]();
	}
	~Vector() {
		delete[] data;
	}
	T& operator[](size_t index) {
		return data[index];
	}

	const T& operator[](size_t index)
		const{
		return data[index];
	}

	size_t getSize() const {
		return size;
	}

 
};

template<typename T>
void my_swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void my_swap(Vector<T>& a, Vector<T>& b) {
	swap(a.cap, b.cap);
	swap(a.data, b.data);
	swap(a.size, b.size);
	
}

int main() {
	int x = 13, y = 07;
	my_swap(x, y);
	cout << " X = " << x;

	cout << " Y = " << y << endl;;
	vector<int> vec1 = { 17,7,06,5 };

	vector<int> vec2 = { 19,2,05,3 };
	my_swap(vec1, vec2);
	cout << "vec1[3] : " << vec1[3] << endl << "vec2[1] : " << vec2[1] << endl;
	return 0;
}


