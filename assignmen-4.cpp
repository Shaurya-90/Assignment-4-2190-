#include<iostream>
#include<string>


using namespace std;
class vehicle{
    public:
    float mileage,price;
    vehicle(){
        cout<<"enter the mileage: ";
        cin>>mileage;
        cout<<"enter the price: ";
        cin>>price;
    }
};


class car:public vehicle{
    public:
    int oc,wa,sc;
    string fueltype;
    car(){
        cout<<"enter the ownership cost: ";
        cin>>oc;
        cout<<"enter the warranty: ";
        cin>>wa;
        cout<<"enter the seating capacity: ";
        cin>>sc;
        cout<<"enter the fuel type: ";
        cin>>fueltype;
    }
};


class bike:public vehicle{
    public:
    int cy,ge,ft;
    string ct,wt;
    bike(){
        cout<<"enter the no.of cylinders: ";
        cin>>cy;
        cout<<"enter the no.of gears: ";
        cin>>ge;
        cout<<"enter the cooling type: ";
        cin>>ct;
        cout<<"enter the wheel type: ";
        cin>>wt;
        cout<<"enter the fuel tank size: ";
        cin>>ft;
    }
};


class audi:public car{
    public:
    string mt;
    audi(){
        cout<<"enter the modeltype: ";
        cin>>mt;
    }
    void display(){
        cout<<"audi: ";
        cout<<"model type: "<<mt<<endl;
        cout<<"ownership cost: "<<oc<<endl;
        cout<<"warranty: "<<wa<<endl;
        cout<<"seating capacity: "<<sc<<endl;
        cout<<"fuel type: "<<fueltype<<endl;
        cout<<"mileage: "<<mileage<<endl;
        cout<<"price: "<<price<<endl;
    }
};



class ford:public car{
    public:
    string mt;
    ford(){
        cout<<"enter the modeltype: ";
        cin>>mt;
    }
    void display(){
        cout<<"ford: ";
        cout<<"model type: "<<mt<<endl;
        cout<<"ownership cost: "<<oc<<endl;
        cout<<"warranty: "<<wa<<endl;
        cout<<"seating capacity: "<<sc<<endl;
        cout<<"fuel type: "<<fueltype<<endl;
        cout<<"mileage: "<<mileage<<endl;
        cout<<"price: "<<price<<endl;
    }
};


class bajaj:public bike{
    public:
    string maketype;
    bajaj(){
        cout<<"enter the maketype: ";
        cin>>maketype;
    }
    void display(){
        cout<<"bajaj: ";
        cout<<"maketype: "<<maketype<<endl;
        cout<<"no.of cylinders: "<<cy<<endl;
        cout<<"no.of gears: "<<ge<<endl;
        cout<<"cooling type: "<<ct<<endl;
        cout<<"wheel type: "<<wt<<endl;
        cout<<"fuel tank size: "<<ft<<endl;
        cout<<"mileage: "<<mileage<<endl;
        cout<<"price: "<<price<<endl;
    }
};


class tvs:public bike{
    public:
    string maketype;
    tvs(){
        cout<<"enter the maketype: ";
        cin>>maketype;
    }
    void display(){
        cout<<"tvs: ";
        cout<<"maketype: "<<maketype<<endl;
        cout<<"no.of cylinders: "<<cy<<endl;
        cout<<"no.of gears: "<<ge<<endl;
        cout<<"cooling type: "<<ct<<endl;
        cout<<"wheel type: "<<wt<<endl;
        cout<<"fuel tank size: "<<ft<<endl;
        cout<<"mileage: "<<mileage<<endl;
        cout<<"price: "<<price<<endl;
    }
};


int main(){
    audi ob1;
    ford ob2;
    bajaj ob3;
    tvs ob4;
    ob1.display();
    ob2.display();
    ob3.display();
    ob4.display();
}