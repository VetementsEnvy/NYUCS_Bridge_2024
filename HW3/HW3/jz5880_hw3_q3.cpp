//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//    double a, b, c;
//    double discriminant, sqrtResult;
//    double x1, x2;
//    cout << "Please enter value of a: ";
//    cin >> a;
//    cout << "Please enter value of b: ";
//    cin >> b;
//    cout << "Please enter value of c: ";
//    cin >> c;
//    //Infinite number of solutions
//    if (a == 0 && b == 0 && c == 0)
//        cout << "Infinite number of solutions" << endl;
//    //
//    else if (a == 0 && b == 0)
//        cout << "No solution" << endl;
//    else if (a == 0)
//    {
//        x1 = - c / b;
//        cout << "This equation has a single real solution x = "
//             << x1 << endl;
//    }
//    else
//    {
//        discriminant = b * b - 4 * a * c;
//        sqrtResult = sqrt(abs(discriminant));
//        if (discriminant > 0)
//        {
//            x1 = (-b - sqrtResult)/ (2 * a);
//            x2 = (-b + sqrtResult)/ (2 * a);
//            cout << "This equation has two real solutions x1 = "
//                 << x1 << " x2 = " << x2 << endl;
//        }
//        else if (discriminant == 0)
//        {
//            x1 = (-b) / (2 * a);
//            cout << "This equation has a single real solution x = "
//                 << x1 << endl;
//        }
//        else
//            cout << "This equation has no real solutions" << endl;
//    }
//}
