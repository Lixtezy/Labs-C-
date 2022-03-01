#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Point
{
private:
	double x;
	double y;

public:
	Point(double px, double py) :x(px), y(py) {}

	friend double DistToCenter(Point p)
	{
		return  sqrt((p.x) * (p.x) + (p.y) * (p.y));
	}

	friend bool operator< (const Point& p1, const Point& p2)
	{
		return DistToCenter(p1) < DistToCenter(p2);
	}

	friend ostream& operator<<(ostream& stream, const Point& p)
	{
		stream << "(" << p.x << ", " << p.y << ")";
		return stream;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	std::vector<Point> v;
	v.push_back(Point(3, 5));
	v.push_back(Point(11, 17));
	v.push_back(Point(34, 2));
	v.push_back(Point(9, 12));
	sort(v.begin(), v.end());
	for (auto& point : v)
	{
		cout << point << '\n';
	}
	return 0;
}