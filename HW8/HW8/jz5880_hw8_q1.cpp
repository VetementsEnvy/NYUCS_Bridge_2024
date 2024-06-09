//#include <iostream>
//
//void printTriangle(int n);
//void printOppositeTriangles(int n);
//void printRuler(int n);
//using namespace std;
//int main()
//{
//    printTriangle(4);
//    cout << endl;
//    printOppositeTriangles(4);
//    cout << endl;
//    printRuler(4);
//}
//void printTriangle(int n)
//{
//    if(n == 1)
//    {
//        cout << "*" << endl;
//    } else
//    {
//        printTriangle(n - 1);
//        for(int index = 0; index < n; index++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//void printOppositeTriangles(int n)
//{
//    if(n == 1)
//    {
//        cout << "*" << endl;
//    } else
//    {
//        for(int index = 0; index < n; index++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//        printOppositeTriangles(n - 1);
//        for(int index = 0; index < n; index++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//
//void printRuler(int n)
//{
//    if (n == 1)
//    {
//        cout << "-\n";
//        return;
//    }
//    printRuler(n - 1);
//    for (int i = 0; i < n; i++)
//    {
//        cout << "-";
//    }
//    cout << "\n";
//    printRuler(n - 1);
//}
