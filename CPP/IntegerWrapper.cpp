#include<iostream>
class integer {
private:
    int i;
public:
    integer(int _i) {
        i = _i;
    }
    int intvalue () {       //32 bit
        return i;
    }

    long longvalue() {      //64 bit
        return i;
    }
};

int main()
{
    integer iob = integer(10);
    std::cout<<iob.intvalue()<<std::endl;
    return 0;
}