#include <string>
using namespace std;
class Car
{
private:
    string maker;
    int model;
        
public:
    void setMaker(string m);
    string getMaker();
    void setModel(int m);
    int getModel();
};