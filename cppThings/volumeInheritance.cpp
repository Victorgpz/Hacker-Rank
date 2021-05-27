#include<iostream>
#include<math.h>

using namespace std;

class Circle{
    protected:
        double radius;
    public:
    void init_radius(double);
    double area(){
        // std::cout<<" circle area :"<<M_PI*pow(radius,2)<<"\n";
            return M_PI*pow(radius,2); 
    }

};
void Circle::init_radius(double a){
    radius = a;
}

//cylinder

class Cylinder : public Circle{
    protected:
        double height;
    public:
    void init_height(double);
    double volume();
};

void Cylinder::init_height (double a){
    height = a;
}

double Cylinder::volume(){
    //std::cout<<Circle::area()<<"\n";
    return Circle::area()*height;
}

class Cone :public Cylinder{
    public:
        //volume =pi*r^2(h/3)
    double volume(){
            //std::cout<<"area :"<<Circle::area();
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
    double radi,height;
    Circle circle;
    Cylinder cylinder;
    Cone cone;
    Sphere sphere;

    

    cout<<"enter the radi: ";
    cin>>radi;
    circle.init_radius(radi);
    cylinder.init_radius(radi);
    cone.init_radius(radi);
    sphere.init_radius(radi);

    cout<<"enter the height: ";
    cin>>height;
    cylinder.init_height(height);
    cone.init_height(height);

    cout<<"area of circle :"<<circle.area()<<"\n";
    cout<<"Volume of Cylinder :"<<cylinder.volume()<<"\n";
    cout<<"Volume of Cone :"<<cone.volume()<<"\n";
    cout<<"Volume of Sphere :"<<sphere.volume()<<"\n";

    
    return 0;
}
