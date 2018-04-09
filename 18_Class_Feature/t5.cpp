class Base
{
public:

    Base(int i) :baseI(i){};
    virtual ~Base(){}
    int getI(){ return baseI; }
    static void countI(){};
    virtual void print(void){ cout << "Base::print()"; }

private:
    int baseI;
    static int baseS;
};

class Base_2
{
public:
    Base_2(int i) :base2I(i){};
    virtual ~Base_2(){}
    int getI(){ return base2I; }
    static void countI(){};
    virtual void print(void){ cout << "Base_2::print()"; }

private:
    int base2I;
    static int base2S;
};

class Drive_multyBase :public Base, public Base_2
{
public:
    Drive_multyBase(int d) :Base(1000), Base_2(2000) ,Drive_multyBaseI(d){};
    virtual void print(void){ cout << "Drive_multyBase::print" ; }
    virtual void Drive_print(){ cout << "Drive_multyBase::Drive_print" ; }

private:
    int Drive_multyBaseI;
};