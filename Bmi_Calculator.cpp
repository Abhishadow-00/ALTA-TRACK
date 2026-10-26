#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    float weight_in_kg, height_in_meters, BMI;

    cout << "enter weight_in_kg and height_in_meters ";

    cin >> weight_in_kg >> height_in_meters;

    BMI = weight_in_kg / (height_in_meters * height_in_meters);

    cout << fixed << setprecision(2) << endl;

    cout << "BMI: " << BMI << endl;

    if (BMI < 18.5)
    {
        cout << "category: under weight";
    }

    else if (BMI >= 18.5 && BMI < 24.9)
    {
        cout << "category: Normal weight";
    }

    else if (BMI >= 25 && BMI < 29.9)
    {
        cout << "category: overweight";
    }

    else
    {
        cout << "category: obese";
    }
}
