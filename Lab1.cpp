
#include <iostream>

using namespace std;

int main()
{
    float floatA, floatB, floatC, floatD, floatE, floatF, floatResult;
    double doubleA, doubleB, doubleC, doubleD, doubleE, doubleF, doubleResult;
    int m, n, p;

    cout << "Exercise 1: Please, enter A (float): ";
    cin >> floatA;
    cout << "Please, enter A (double): ";
    cin >> doubleA;
    cout << "Please, enter B (float): ";
    cin >> floatB;
    cout << "Please, enter B (double): ";
    cin >> doubleB;

    floatC = pow((floatA + floatB), 2);
    floatD = pow(floatA, 2) + (2 * floatA * floatB);
    floatE = pow(floatB, 2);
    floatF = floatC - floatD;
    floatResult = floatF / floatE;

    cout << printf("\n The result with float type = %f", floatResult);

    doubleC = pow((doubleA + doubleB), 2);
    doubleD = pow(doubleA, 2) + (2 * doubleA * doubleB);
    doubleE = pow(doubleB, 2);
    doubleF = doubleC - doubleD;
    doubleResult = doubleF / doubleE;

    cout << printf("\n The result with double type = %f", doubleResult);

    cout << "\n \n The result with float type different from result with double type";
    cout << printf("\n because float B is %f and double B is %f", floatB, doubleB);

    // cout << printf("\n \n floatA: %.12f , floatB: %.12f , floatC: %.12f, floatD: %.12f, floatE: %.12f, floatF: %.12f", floatA, floatB, floatC, floatD, floatE, floatF);
    // cout << printf("\n doubleA: %.12f , doubleB: %.12f , doubleC: %.12f, doubleD: %.12f, doubleE: %.12f, doubleF: %.12f", doubleA, doubleB, doubleC, doubleD, doubleE, doubleF);
    
    cout << " \n \n \n  Exercise 2: Please, enter N: ";
    cin >> n;
    cout << "Please, enter M: ";
    cin >> m;

    p = n++ + m;
    cout << printf("\n 1) p = n++ + m = %d , n = %d, m = %d    //", p, n, m);

    if (m-- > n) {
        cout << "\n 2) m-- > n: true";
    } else {
        cout << "\n 2) m-- > n: false";
    }

    if (n-- > m) {
        cout << "\n 3) n-- > m: true";
    } else {
        cout << "\n 3) n-- > m : false";
    }

    return 0;
    
}