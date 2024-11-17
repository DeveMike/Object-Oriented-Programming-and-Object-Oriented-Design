#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{

private:
    double width;
    double height;


public:
    Rectangle();
    ~Rectangle();


    double getArea() const;
    double getCircum() const;
    void setWidth(double newWidth);
    void setHeight(double newHeight);
};

#endif // RECTANGLE_H
