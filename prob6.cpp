#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sum_n = 0, difference, sum_of_sq, sq_of_sum;
    for(int i = 1; i<100; i++){
        sum_n += i;
        sum_of_sq +=i*i;
    }
    sq_of_sum = sum_n * sum_n;
    difference = sq_of_sum - sum_of_sq;
    cout << "The difference is = " << difference << endl;
    return 0;
}
