#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int answer = 0, count_num;
    for(int i = 20; i<1000000000; i++){
        count_num = 0;
        for(int j = 2; j<=20; j++){
            if (i%j != 0){
                break;
            }
            count_num ++;
        }
        if (count_num == 19){
                answer = i;
                cout <<  "answer = " << answer << endl;
                break;
        }
    }
    return 0;
}
