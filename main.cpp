#include <iostream>
#include <math.h>
#include <cstdint>
#include <vector>

using namespace std;

int main()
{
    long long int num = 600851475143;
    long long int factor = 3;
    //long long int large_p_factor = 1;
    long long int i = 0;
    int c = 0;
    long long int check_num = 1;
    vector <long long int> all_factor;
    long long int f;

    while (factor <= num){
        if (num % factor == 0){
            bool flag = false;
            for ( i = factor-2; i>1; i-=2){
                long long int m = factor;
                if (m%i == 0){
                    flag = true;
                    break;
                }
            }
            if (flag == false){
            //large_p_factor = factor;
            all_factor.push_back(factor);
            c++;
            //cout << large_p_factor << endl;
            cout << c << endl;
            cout << all_factor[c-1] << endl;
            }
        }
        f = all_factor[c-1];
        check_num *= f;
        if (check_num == num)
            break;
        factor += 2;
    }
    //cout <<  "The largest prime factor = " << large_p_factor << endl;
    cout <<  "The largest prime factor = " << all_factor[c-1] << endl;
    return 0;
}
