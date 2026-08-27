#include<iostream>
using namespace std;
class Cylinder
{
    private:
    double radius;
    double height;
    static const double PI;
    public:
    Cylinder(): radius(0.0), height(0.0){}
    Cylinder(double radius, double height): radius(radius), height(height){}
    double getRadius() const
    {
        return radius;
    }
    void setRadius(double r)
    {
        radius = r;
    }
    double getHeight()const
    {
        return height;
    }
    void setHeight(double h)
    {
        height = h;
    }
    double Calculatevolume()const
    {
        return PI*radius*height;
    }

};
const double Cylinder::PI = 3.14;
int main()
{
    Cylinder c1(5.0, 10.0);
    cout<<"Cylinder 1 detials:"<< endl;
    cout<<"raduis of the cylinder:"<<c1.getHeight()<<endl;
    cout<<"height of the cylinder:"<<c1.getRadius()<<endl;
    cout<<"Volume of the cylinder:"<<c1.Calculatevolume()<<endl;
    Cylinder c2;
    c2.setRadius(10.0);
    c2.setHeight(20.0);
    cout<<"Cylinder 2 detials:"<< endl;
    cout<<"raduis of the cylinder:"<<c2.getHeight()<<endl;
    cout<<"height of the cylinder:"<<c2.getRadius()<<endl;
    cout<<"Volume of the cylinder:"<<c2.Calculatevolume()<<endl;
    return 0;
}




