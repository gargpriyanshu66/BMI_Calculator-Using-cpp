#include<iostream>
#include<math.h>
using namespace std;

class bmi{
    private:
    char name[100];
    float weight;
    float height;

    public:
    void getdata();
    void display();
};
void bmi :: getdata(){
    cout<<"|-------------------------****-------------------------|\n";
    cout<<"|               SIMPLE  BMI  CALCULATOR                |\n";
    cout<<"|\t\t\t    Designed by Priyanshu Garg.|\n";
    cout<<"|------------------------------------------------------|\n";

    cout<<"Enter your Name:";
    cin>>name;
    cout<<"Enter Your Weight(in kg):";
    cin>>weight;
    cout<<"Enter your Height(in meter):";
    cin>>height;
}
void bmi :: display(){
    float b = weight/pow(height,2);
    cout<<"\nHello "<<name<<"! Your BMI is "<<b;

    if (b<15){
        cout<<" and your BMI catagory is Starvation.\n"<<endl;
    }
    else if (b>=15 && b<17.5){
        cout<<" and your BMI catagory is Anorexic.\n"<<endl;
    }
    else if (b>=17.5 && b<18.5){
        cout<<" and your BMI catagory is Underweight.\n"<<endl;
    }
    else if (b>=18.5 && b<25){
        cout<<" and your BMI catagory is Ideal.\n"<<endl;
    }
    else if (b>=25 && b<30){
        cout<<" and your BMI catagory is Overweight.\n"<<endl;
    }
    else if (b>=30 && b<40){
        cout<<" and your BMI catagory is Obese.\n"<<endl;
    }
    else if (b>=40){
        cout<<" and your BMI catagory is Morbidly Obese, Please Consult with a Doctor.\n"<<endl;
    }
}

int main(){
    bmi b1;
    b1.getdata();
    b1.display();

    return 0;
}