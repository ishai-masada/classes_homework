#include <iostream>

class Vector2
{
public:
    double x;
    double y;

    Vector2(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    const Vector2 operator+(const Vector2 rhs)
    {
        return Vector2(x + rhs.x, y + rhs.y);
    }

    void operator+=(const Vector2 rhs)
    {
        x += rhs.x;
        y += rhs.y;
    }
};

int main()
{
    Vector2 a = Vector2(3.0, 4.0);
    Vector2 b = Vector2(5.0, 18.0);
    Vector2 c = a + b;
    std::cout << c.x << ", " << c.y << std::endl;
    c += b;
    std::cout << c.x << ", " << c.y << std::endl;

    return 0;
}
