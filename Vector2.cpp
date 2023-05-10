#include <iostream>
#include <math.h>

typedef struct Vector2Int
{
    int x, y;

    Vector2Int()
    {
        this->x = 0;
        this->y = 0;
    }

    Vector2Int(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int Manhattan()
    {
        return x + y;
    }

    friend std::istream &operator>>(std::istream &in, Vector2Int &vector)
    {
        in >> vector.x >> vector.y;

        return in;
    }

    Vector2Int &operator+=(const Vector2Int &rhs)
    {
        this->x += rhs.x;
        this->y += rhs.y;

        return *this;
    }

    Vector2Int &operator-=(const Vector2Int &rhs)
    {
        this->x -= rhs.x;
        this->y -= rhs.y;

        return *this;
    }

    Vector2Int &operator=(const Vector2Int &rhs)
    {
        this->x = rhs.x;
        this->y = rhs.y;

        return *this;
    }

    friend Vector2Int operator+(const Vector2Int &lhs, const Vector2Int &rhs)
    {
        return Vector2Int(lhs.x + rhs.x, lhs.y + rhs.y);
    }

    friend Vector2Int operator-(const Vector2Int &lhs, const Vector2Int &rhs)
    {
        return Vector2Int(lhs.x - rhs.x, lhs.y - rhs.y);
    }

    friend Vector2Int operator*(const Vector2Int &lhs, const int rhs)
    {
        return Vector2Int(lhs.x * rhs, lhs.y * rhs);
    }

} Vector2Int;

typedef struct Vector2
{
    double x, y;

    Vector2()
    {
        this->x = 0;
        this->y = 0;
    }

    Vector2(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    double SqrMagnitude()
    {
        return x * x + y * y;
    }

    double Magnitude()
    {
        return sqrt(SqrMagnitude());
    }

    Vector2 Normalized()
    {
        return *this / Magnitude();
    }

    friend std::istream &operator>>(std::istream &in, Vector2 &vector)
    {
        in >> vector.x >> vector.y;

        return in;
    }

    Vector2 &operator+=(const Vector2 &rhs)
    {
        this->x += rhs.x;
        this->y += rhs.y;

        return *this;
    }

    Vector2 &operator-=(const Vector2 &rhs)
    {
        this->x -= rhs.x;
        this->y -= rhs.y;

        return *this;
    }

    Vector2 &operator*=(const double &rhs)
    {
        this->x *= rhs;
        this->y *= rhs;

        return *this;
    }

    Vector2 &operator*=(const double &rhs)
    {
        this->x /= rhs;
        this->y /= rhs;

        return *this;
    }

    Vector2 &operator=(const Vector2 &rhs)
    {
        this->x = rhs.x;
        this->y = rhs.y;

        return *this;
    }

    friend Vector2 operator+(const Vector2 &lhs, const Vector2 &rhs)
    {
        return Vector2(lhs.x + rhs.x, lhs.y + rhs.y);
    }

    friend Vector2 operator-(const Vector2 &lhs, const Vector2 &rhs)
    {
        return Vector2(lhs.x - rhs.x, lhs.y - rhs.y);
    }

    friend Vector2 operator*(const Vector2 &lhs, const double rhs)
    {
        return Vector2(lhs.x * rhs, lhs.y * rhs);
    }

    friend Vector2 operator/(const Vector2 &lhs, const double rhs)
    {
        return Vector2(lhs.x / rhs, lhs.y / rhs);
    }

} Vector2;