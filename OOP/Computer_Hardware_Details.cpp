#include<iostream>
using namespace std;
static int count=0;
class Computer{
        public:
            int price;
            string ram,hdd,speed,type; 
            Computer(string x,string y,string z, string u, int v)
            {
                type=x;
                ram=y;
                hdd=z;
                speed=u;
                price=v;
                count++;
            }

            Computer(const Computer &obj2)
            {
                type=obj2.type;
                ram=obj2.ram;
                hdd=obj2.hdd;
                speed=obj2.speed;
                price=obj2.price;
                count++;
            }

            ~Computer()
            {
                count--;
                cout<<"Inside the Destructor count:"<<count<<endl;
            }

};

int main()
{
    Computer obj1("Branded","4GB","1TB","2.54GHZ",50000);
    Computer obj2=obj1;
    int o=0;
    cout<<"Your Computer details are:"<<endl;
    cout<<"Assembled/Branded: "<<obj2.type<<endl;
    cout<<"RAM: "<<obj2.ram<<endl;
    cout<<"HDD: "<<obj2.hdd<<endl;
    cout<<"Processor Speed: "<<obj2.speed<<endl;
    cout<<"Price: "<<obj2.price<<endl;
}
