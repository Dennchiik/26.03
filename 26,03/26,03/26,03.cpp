//Перше завдання
/*#include <iostream>
#include <vector>

using namespace std;

class Point {
public:
    int x, y;
    Point(int _x, int _y) : x(_x), y(_y) {}
};

int main() {
    vector<Point> points;

    points.push_back(Point(1, 2));
    points.push_back(Point(3, 4));
    points.push_back(Point(5, 6));
    points.push_back(Point(7, 8));
    points.push_back(Point(9, 10));

    cout << "Елементи вектора Point:" << endl;
    for (const Point& p : points) {
        cout << "x: " << p.x << ", y: " << p.y << endl;
    }

    return 0;
}
*/
//Друге завдання
/*#include <iostream>
#include <list>

using namespace std;

class Point {
public:
    int x, y;
    Point(int _x, int _y) : x(_x), y(_y) {}
};

int main() {
    list<Point> points;

    points.push_back(Point(1, 2));
    points.push_back(Point(3, 4));
    points.push_back(Point(5, 6));
    points.push_back(Point(7, 8));
    points.push_back(Point(9, 10));

    cout << "Елементи списку Point:" << endl;
    for (const Point& p : points) {
        cout << "x: " << p.x << ", y: " << p.y << endl;
    }

    return 0;
}
*/