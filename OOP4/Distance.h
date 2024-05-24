class Distance
{
private:
    int feet;
    float inches;
public:
    Distance();
    Distance(int f,float i);
    void print();
    Distance addDistance(Distance d2);
};
