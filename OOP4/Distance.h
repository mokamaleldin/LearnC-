class Distance
{
private:
    int feet;
    float inches;
public:
    Distance();
    Distance(int f,float i);
    ~Distance();
    void setDistance(int f , float i);
    void print();
};

