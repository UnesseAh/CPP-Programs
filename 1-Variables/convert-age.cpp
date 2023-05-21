#include <iostream>
using namespace std;

int main(){
    cout << "============================================\n";
    cout << "====== CONVERT YOUR AGE APPLICATION ======\n";
    cout << "============================================\n";

    int age;
    cout << "Enter your age :\n";
    cin >> age;

    int ageInMonths = age * 12;
    int ageInDays = age * 365;
    int ageInHours = ageInDays * 24;

    cout << "Your age in months is : " << ageInMonths << "\n";
    cout << "Your age in days is : " << ageInDays << "\n";
    cout << "Your age in hours is : " << ageInHours << "\n";

    return 0;
}