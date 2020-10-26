#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num = 999;
    int store = 0;
    int mul,d1,d2,d3,d4,d5,d6,m,len;

    for(int i = 111; i<1000; i++){
        for(int j = 111; j<1000; j++){
            mul = i*j;
            m = mul;
            //cout << "i= "<< i << endl;
            //cout << "j= "<< j << endl;
            //cout << "mul= "<< mul << endl;
            for ( len = 0; m > 0; len++)
                m = m / 10;
            //cout << "lenth = " << len << endl;

            if (len == 6){
                d1 = mul%10;
                d6 = mul/100000;
                if (d1 != d6)
                goto jump;
                d2 = (mul/10)%10;
                d5 = (mul/10000)%10;
                if (d2 != d5)
                goto jump;
                d3 = (mul/100)%10;
                d4 = (mul/1000)%10;
                if (d3 == d4){
                    cout << "d1= " << d1 << endl;
                    cout << "d6= " << d6 << endl;
                    cout << "d2= " << d2 << endl;
                    cout << "d5= " << d5 << endl;
                    cout << "d3= " << d3 << endl;
                    cout << "d4= " << d4 << endl;
                    if (mul>store){
                        store = mul;
                        cout << "store = " << store;
                    }
                }
            }

            //cout << "i= "<< i << endl;
            //cout << "j= "<< j << endl;

            if (len == 5){
                d1 = mul%10;
                d5 = (mul/10000)%10;
                if (d1 != d5)
                goto jump;
                d2 = (mul/10)%10;
                d4 = (mul/1000)%10;
                if (d2 == d4){
                    cout << "d1= " << d1 << endl;
                    cout << "d5= " << d6 << endl;
                    cout << "d2= " << d2 << endl;
                    cout << "d4= " << d5 << endl;
                    cout << "d3= " << d3 << endl;
                    if (mul>store){
                        store = mul;
                        cout << "store = " << store;
                    }
                }
            }
            jump:
                cout << " " << endl;

        }
    }

    cout <<  "answer = " << store << endl;
    return 0;
}
