#include<iostream>
#include<math.h>

using namespace std;

class Circle{
    public:
        int radius;
    double area(){
            return M_PI*pow(radius,2); 
    }

};

class Cylinder : public Circle{
    public:
        int height;
    double volume(){
            return Circle::area()*height;
    }
};

class Cone :public Cylinder{
    public:
        //volume =pi*r^2(h/3)
    double volume(){
            return Circle::area()*(height/3);
            
    }
};

class Sphere :public Circle{
    public:
        //volume=((4*pi*r^3)/3)
    double volume(){
            return  ((4*M_PI*(pow(radius,3))/3));
    }
};


int main(){
    int radi,height;
    Circle circle;
    Cylinder cylinder;
    Cone cone;
    Sphere sphere;

    

    cout<<"enter the radi: ";
    cin>>radi;
    circle.radius=radi;

    cout<<"enter the height";
    cin>>height;
    cylinder.height=height;

    cout<<"Volume of Cylinder :"<<cylinder.volume();
    cout<<"Volume of Cone :"<<cone.volume();
    cout<<"Volume of Sphere :"<<sphere.volume();

    
    return 0;
}