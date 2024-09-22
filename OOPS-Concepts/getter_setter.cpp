#include <bits/stdc++.h>
using namespace std;

class Point
{
private:
    int x, y;

public:
    // constructor to initialize the point coordinates
    Point()
    {
        x = 0;
        y = 0;
    }

    // setter method for 'x'
    void setX(int new_x)
    {
        x = new_x;
    }

    //  setter method for 'y'
    void setY(int new_y)
    {
        y = new_y;
    }

    // getter method for 'x'
    int getX() const
    {
        return x;
    }

    // getter method for 'y'
    int getY() const
    {
        return y;
    }
};

int main()
{
    int x, y;
    cout << "Enter the two numbers: ";
    cin >> x >> y;

    // create two points, p1 and p2
    Point p1, p2;

    // set the coordinates of p1 using the setter methods
    p1.setX(x);
    p1.setY(y);

    // display the coordinates of p1 using the getter methods
    cout << "The coordinate of point P1 is (" << p1.getX() << "," << p1.getY() << ")" << endl;

    return 0;
}