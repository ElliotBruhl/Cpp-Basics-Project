#include <iostream>
using std::cout;

int main() {

    const int gasTankSize = 20;
    const double townMPG = 23.5;
    const double highwayMPG = 28.9;

    cout << "The car can drive " << gasTankSize*townMPG << " miles in the town.\n";
    cout << "The car can drive " << gasTankSize*highwayMPG << " miles on the highway.";

    return 0;
}