#include<iostream>
using namespace std;

class stock1{
    string code;
    int items;
    float price;
    public:
        stock1(string c, int i, float p){
            code = c;
            items = i;
            price = p;
        }
        int total_value(){
            int tot = price * items;
            return tot;
        }
};

class stock2{
    string code;
    float total;
    public:
        stock2(string c, float t){
            code = c;
            total = t;
        }
};

int main()
{
    
    return 0;
}
