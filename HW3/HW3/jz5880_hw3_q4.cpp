//#include <iostream>
//using namespace std;
//const int FLOOR_ROUND = 1;
//const int CEILING_ROUND = 2;
//const int ROUND = 3;
//int main()
//{
//    double userInput;
//    int roundingMethod;
//    cout << "Please enter a Real number:" << endl;
//    cin >> userInput;
//    cout << "Choose your rounding method:\n"
//            "1. Floor round\n2. Ceiling round\n"
//            "3. Round to the nearest whole number\n" << endl;
//    cin >> roundingMethod;
//    switch (roundingMethod)
//    {
//        case FLOOR_ROUND:
//            if (userInput < 0)
//            {
//                userInput = (int)userInput - 1;
//                cout << userInput << endl;
//            } else
//            {
//                userInput = (int)userInput;
//                cout << userInput << endl;
//            }
//            break;
//        case CEILING_ROUND:
//            if (userInput < 0)
//            {
//                userInput = (int)userInput;
//                cout << userInput << endl;
//            } else
//            {
//                userInput = (int)userInput + 1;
//                cout << userInput << endl;
//            }
//            break;
//        case ROUND:
//            if (userInput < 0)
//            {
//                userInput = (int)(userInput - 0.5);
//                cout << userInput << endl;
//            } else
//            {
//                userInput = (int)(userInput + 0.5);
//                cout << userInput << endl;
//            }
//            break;
//        default:
//            cout << "Invalid input" << endl;
//    }
//}
