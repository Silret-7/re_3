#include <iostream>
using namespace std;

template <typename T>

class SimpleVector {
private:
	T* arr;
	int currentsize;
	int currentCapacity;
public:
	SimpleVector() {
		currentCapacity = 10;
		currentsize = 10;
	}
	SimpleVector(int cap) : currentCapacity(cap), currentsize(10) {
		arr = new T[currentCapacity]
	}

	int size{
		return currentsize;
	}

	int capacity{
		return currentCapacity;
	}

	void push_back(T value) {
		if (currentsize < currentCapacity) {
			arr[size] = value;
			size++;
		}
	}
	void pop_back() {
		if (size > 0) {
			size--;
		}
	}
	

};

int main() {


	return 0;
}