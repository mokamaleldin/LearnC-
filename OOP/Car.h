#include <string>
using namespace std;
class Car
{
private:
    string maker;
    int model;
    string colors;
    static int count ; // it will be the static data

public:
    void setMaker(string m);
    string getMaker();
    void setModel(int m);
    int getModel();
    string getColors();

    Car(string m,int mod,string c);
    ~Car();

    int getCarsCount();
};