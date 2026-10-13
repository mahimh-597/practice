#include<iostream>
using namespace std;
int main() {
    const double KMS_PER_MILE = 1.60934;
    double miles, kms;
    cout << "ENTER DISTANCE IN MILES> ";
    cin >> miles;
    kms = KMS_PER_MILE * miles;
    cout << "that equals " << kms << " kilometers." << endl;
    return 0;
}