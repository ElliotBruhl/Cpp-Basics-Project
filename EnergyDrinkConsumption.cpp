#include <iostream>
using std::cout;

int main() {

    const int totalCustomersSurveyed = 16'500;
    const int purchasedDrinks = totalCustomersSurveyed * .15f;
    const int preferCitrus = purchasedDrinks * .58f;

    cout << "There are " << purchasedDrinks << " customers in the survey that purchase energy drinks.\n";
    cout << preferCitrus << " of those customers prefer citrus-flavored energy drinks.";

    return 0;
}