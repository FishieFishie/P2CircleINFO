#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.1416
#endif

using namespace std;

//OBJECTIVE: to calculate the DISTANCE, RADIUS, CIRCUMFERENCE, and AREA of a circle

//calcDISTANCE ; square root (X2 - X1) ^ 2nd power + (Y2 - Y1) ^ 2nd power
//NOTE! the 2 in the () with X and Y is the power!
float calcDISTANCE(float X1, float Y1, float X2, float Y2) {
    return sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
}

//calcRADIUS ; recall calcDISTANCE? The first user input = the center + second user input = the point on the circumference
//INFO: this function/equation is calculating the radius by using calcDISTANCE
float calcRADIUS(float CENTERx, float CENTERy, float POINTx, float POINTy) {
    return calcDISTANCE(CENTERx, CENTERy, POINTx, POINTy);
}

//calcCIRCUMFERENCE ; 2 x pi x radius
float calcCIRCUMFERENCE(float RADIUS) {
    return 2 * M_PI * RADIUS;
}

//calcAREA ; area = pi x (radius ^ 2nd power)
float calcAREA(float radius) {
    return M_PI * pow(radius, 2);
}

//Establish the variables + User Input + Displaying the Final Results
int main() {
    float CENTERx, CENTERy, POINTx, POINTy;

    cout << "Enter the coordinates of the center of the circly (x, y): ";
    cin >> CENTERx >> CENTERy;

    cout << "Enter the coordinates of a point on the circumference of the circle (x, y): ";
    cin >> POINTx >> POINTy;

    float RADIUS = calcRADIUS(CENTERx, CENTERy, POINTx, POINTy);
    float CIRCUMFERENCE = calcCIRCUMFERENCE(RADIUS);
    float AREA = calcAREA(RADIUS);

    cout << "Radius of the Circle: " << RADIUS << endl;
    cout << "Circumference of the Circle: " << CIRCUMFERENCE << endl;
    cout << "Area of the circle: " << AREA << endl;

    return 0;
}

//EXPECTATION: To calculate and find the radius, circumference, and area of the circle