#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;
    float c;

    for(int i = 1; i <= 500; i++){
        for (int j = 1; j<= 500; j++){
            c = sqrt(pow(i,2) + pow(j,2));
            if (i+j+c != 1000)
                continue;
            else {
                a = i;
                b = j;
                goto last;
            }
        }
    }
    last:
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << int(c) << endl;
    cout << "The product abc = " << a*b*int(c) << endl;
    return 0;
}
