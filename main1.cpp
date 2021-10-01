#include <iostream>

using namespace std;

int main(){
    float t1, t2, t3, t;
    cout << "Zadajte teploty rano na obed a vecer:";
    cin >> t1 >> t2 >> t3;
    t = (t1 + t2 + t3 + t3)/4;
    cout << "priemerna denna teplota je: " << t << "stupnov celzia" ;
    return 0;
}