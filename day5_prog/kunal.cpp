//Kunal's Even Days (August)
//Kunal can go out only on even days. Count how many even days are in August (31 days).

#include <iostream>
using namespace std;
int evenDays()
{
    int count = 0;
    for (int day = 1; day <= 31; day++) {
        if (day % 2 == 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int totalEvenDays = evenDays();
    cout << "Kunal can go out on " << totalEvenDays << " even days in August." << endl;
    return 0;
}