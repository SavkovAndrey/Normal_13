#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <memory> 
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <set>
#include <thread> 
#include <chrono> 
#include <algorithm>
#include <numeric>
#include <mutex>
using namespace std;
//---------------------Функции и Прототипы---------------------------------------

class timer
{
private:
public:
	int seconds;
	int minutes;
	int hours;
	int total;

	timer()
	{

		cout << "Введите значение времени!\n";
		cout << ">> часы:  ";
		cin >> hours;
		cout << ">> минуты: ";
		cin >> minutes;
		cout << ">> секунды: ";
		cin >> seconds;

	    total = seconds + minutes * 60 + hours * 3600;
	
	}

	void minus()
	{
		int s_minus;
		cout << "\nВведите количество секунд: ";
		cin >> s_minus;

		int temp = total - s_minus;

		hours = temp / 3600;
		temp %= 3600;

		minutes = temp / 60;
		
		seconds = temp % 60;

    }

	void print()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}

	int distance(timer a)
	{
		int result;

	return  result = this->total - a.total;
	}

};



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------
	

	timer time;

	time.minus();

	cout << "\nОставшееся время: ";
	time.print();

	cout << "\nВведите первый момент времени: ";
	timer time1;

	cout << "\nВведите второй момент времени: ";
	timer time2;

	cout << "\nКолличество секунд между введенными моментами:  " << time1.distance(time2) << endl;

	system("pause");
	return 0;
}
