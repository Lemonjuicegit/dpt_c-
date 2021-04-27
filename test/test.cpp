#include <iostream>

using namespace std;

#define DEBUG 0
#if (DEBUG ==1)
class test{
public:
    int a;
    test(){}
    test(int a);
    int add(int d){
        return this->a+d;
    }
    ~test(){
    }
};
test::test(int a):a(a){
}


int main(int argc, char const *argv[]){
    test *Variable1=new test;
    test *Variable2=new test();
    test *Variable6=new test(6);
    test *Variable3;
    test Variable4;
    test Variable5(4);
    cout<<sizeof(Variable1)<<"\n";
    cout<<sizeof(Variable2)<<"\n";
    cout<<sizeof(Variable3)<<"\n";
    cout<<sizeof(Variable4)<<"\n";
    cout<<sizeof(Variable5)<<"\n";
    cout<<sizeof(Variable6)<<"\n";
    cout<<Variable1->a<<"\n";
    cout<<Variable2->a<<"\n";
    cout<<Variable6->a<<"\n";
    delete Variable1;
    delete Variable2;
    delete Variable3;
    delete Variable6;
    return 0;
}
#endif
