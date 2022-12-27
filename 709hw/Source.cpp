#include<iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = y = 2;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout <<"X"<< x << "\t" <<"Y" << y << endl;
	}
};
class Car
{
private:
		string e;
	double patrol;
public:
	void Init(string eng, double p)
	{
		e = eng;
		patrol = p;
	}
};
int main()
{
	Point obj2;
	obj2.Print();
}