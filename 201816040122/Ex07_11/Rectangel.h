//Rectangel.h
;using namespace std;
class Rectangel
{
    public:
     explicit Rectangel(dRouble=1,double=1);
     void sRetRectangel(double,double);
     void setRectangelLength(double);
     void setRectangelWidth(double);
     double getRectangelLength()const;
     double getRectangelWidth()const;
     double Perimeter();
     double Area();
    private:
        double length;
        double width;
};
