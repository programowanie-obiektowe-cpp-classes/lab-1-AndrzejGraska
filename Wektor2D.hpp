class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    }
    Wektor2D(double x1, double x2)
    {
        x = x1;
        y = x2;
    }

    void setX(double x1) { x = x1; }
    void setY(double x2) { y = x2; }

    double getX() { return x; }
    double getY() { return y; }
    // Tutaj napisz implementacje klasy Wektor2D
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D(w1.getX() + w2.getX(), w1.getY() + w2.getY());
}

double operator*(Wektor2D w1, Wektor2D w2)
{
    return w1.getX() * w2.getX() + (w1.getY() * w2.getY());
}