#include <iostream>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

class Point
{
	friend ostream& operator<< (ostream&, const Point&);
	friend bool operator<( const Point&,  const Point&);
private:
	double x;
	double y;
public:
	
	Point(double x, double y) : x(x), y(y) {}

	double DistToCent() const{
		return sqrt(x*x + y*y);
	}

	double DistanceTo(const Point& p) const{
		return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
	}

};

ostream& operator<< (ostream& out, const Point& p)
{
	out << "(" << p.x <<", " << p.y << ")" <<endl;
	return out;
}
bool operator<( const Point& p1,  const Point& p2) {
	if (p1.DistToCent() < p2.DistToCent()) return true;
	return false;
}
int main()
{
	
	vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	sort(v.begin(), v.end()); // требуется перегрузка оператора < для
	// класса Point
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для 
		// класса Point
	return 0; 
}

