#include <iostream>
using namespace std;

class Road {

private:
	int length;
	int width;
public:
	Road(int newlength, int newwidth) {
		length = newlength;
		width = newwidth;
	}
	void Print() {
		setlocale(LC_ALL, "ru");
		cout << "Dlina dorogi: " << length << endl;
		cout << "Shirina dorogi: " << width << endl;
	}
};

class Car {
private:
	double X, V;
	int P;
public:
	Car(double newx, int newp, double newv) {
		X = newx;
		P = newp;
		V = newv;
	}
	void Print() {
		cout << "X: " << X << endl;
		cout << "P: " << P << endl;
		cout << "V: " << V << endl;
	}
};

int main() {
	Car car1(10.1, 20, 30.5);
	car1.Print();

	Road road1(50, 100);
	road1.Print();

	return 0;
}
