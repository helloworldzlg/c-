class Base
{
public:
    Base(int i) :baseI(i){};
    int getI(){ return baseI; }
    static void countI(){};
    virtual ~Base(){}
    virtual void print(void)
    {
        cout << "Base::print()";
    }

private:
    int baseI;
    static int baseS;
};

class Derive : public Base
{
public:
    Derive(int d) : Base(1000), DeriveI(d)
    {}

    virtual void print(void)
    {
        cout << "Derive::Derive print" << emdl;
    }

    virtual void Drive_print()
    {
        cout << "Derive::Drive_print" << endl;
    }

    virtual ~Derive
    {}

private:
    int DeriveI;
}