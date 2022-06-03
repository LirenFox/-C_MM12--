#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int distance;
    cin >> distance;
	//每秒能追 100-2.54*30 (cm)
    cout << ceil( distance*100/(100-2.54*30) ) << endl;
    return 0;
}
