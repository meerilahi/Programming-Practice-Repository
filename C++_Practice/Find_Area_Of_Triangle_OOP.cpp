#include <iostream>
using namespace std;

class Triangle
{
    private:
    double side1;
    double side2;
    double side3;

    public:
    Triangle()
    {
    side1 = side2 = side3 = 0;
    };
    Triangle(double s1, double s2, double s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    };
    void get(double s1, double s2, double s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    };
    double find_area_triangle(Triangle A)
    {
        double area = (side1*side2) / 2;
        return area;
    };
    double find_perameter_triangle(Triangle A)
    {
        double perameter = A.side1 + A.side2 + A.side3;
        return perameter;
    };
};
main()
{
    Triangle A(2,3,4);
    double area = A.find_area_triangle(A);
    double perameter = A.find_perameter_triangle(A);
    cout << "Area:      " << area << endl;
    cout << "Perameter: " << perameter << endl;
    
}