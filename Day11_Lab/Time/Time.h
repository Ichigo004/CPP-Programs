class Time
{
    int h;
    int m;
    int s;

public:
    Time();
    Time(int, int, int);
    void Accept();
    Time operator+(Time);
    Time operator-(Time);
    void Display();
};