﻿#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Circle {
private:
	double x;
	double y;
	double rad;
	string color;
public:
	void set_data(double cordx, double cordy, double r, string c) {
		x = cordx;
		y = cordy;
		rad = r;
		color = c;
	}
	void get_info() {
		cout << "X: " << x << ". Y: " << y << ". Radius: " << rad << ". Color: " << color << endl;
	}
};



int main() {
	setlocale(LC_ALL, "RU");

	Circle big;
	big.set_data(0.0, 17.3, 17.3, "Крансый");
	big.get_info();

	Circle small;
	small.set_data(1.0, 3.5, 2.5, "Синий");
	small.get_info();
	return 0;
}

int Squareandlong() {
	double rad;
	cout << "Введите радиус окружности: ";
	cin >> rad;
	cout << "Длина окружности: " << 2 * M_PI * rad << endl;
	cout << "Площадь окружности; " << M_PI * pow(rad, 2) << endl;

	return 0;
}

void printToFile(const std::string& файл) {
	std::ofstream outputFile(файл);
	if (outputFile.is_open()) {
		outputFile << "Circle Information:" << std::endl;
		outputFile << "Center Coordinates: (" << x << ", " << y << ")" << std::endl;
		outputFile << "Radius: " << rad << std::endl;
		outputFile << "Color: " << c << std::endl;
		outputFile << "Long and Square: " << Squareandlong() << std::endl;
		outputFile.close();
	}
	else {
		std::cerr << "Не удалось открыть файл" << файл << std::endl;
	}
}

string randomcolor() {
	const char* colors[] = { "Красный", "Синий", "Зеленый", "Белый", "Фиолетовый", "Желтый" };
	int numColors = sizeof(colors) / sizeof(colors[0]);
	int randomInd = rand() % numColors;
	return colors[randomInd];
}