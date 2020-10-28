#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int answer = 0, count_no = 0;
    for(int n = 2; n <= 25164150; n++){
        for (int i = 2; i< n; i++){
            if (n%i == 0)
                goto continue_search;
        }
        count_no ++;
        if (count_no == 10001){
                answer = n;
                goto last;
        }
        continue_search:
            answer *= 1;
    }
    last:
    cout << "The 10001th PRIME number is = " << answer << endl;
    cout << "The counter number is = " << count_no << endl;
    return 0;
}
