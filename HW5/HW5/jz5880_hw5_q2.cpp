//#include <iostream>
//using namespace std;

//
//void printShiftedTriangle(int n,int m,char symbol)
//{
//    int nSpace, extraSpace, nCharToPrint;
//    nCharToPrint = 1;
//    nSpace = m;
//    extraSpace = n - 1;
//
//    for (int i = 1; i <= n; i++)
//    {
//        //print out the left marggin
//        for (int j = 1; j <= nSpace; j++)
//        {
//            cout << " ";
//        }
//        //print extra space for each row
//        for (int k = 1; k <= extraSpace; k++)
//        {
//            cout << " ";
//        }
//        //print out symbol at the end
//        for (int l = 1; l <= nCharToPrint; l++)
//        {
//            cout << symbol;
//        }
//        extraSpace--;
//        nCharToPrint = 2 * i + 1;
//        cout << endl;
//    }
//}
//
//
//void printPineTree(int n, char symbol)
//{
//    int nSpace, nCharToPrint;
//    for (int i = 1; i <= n; i++)
//    {
//        nSpace = n;
//        nCharToPrint = 1;
//        for (int j = 1; j <= i + 1; j++)
//        {
//            //print out the space for the left margin
//            for(int k = 1; k <= nSpace; k++)
//            {
//                cout << " ";
//            }
//            //print out symbol for each row
//            for(int l = 1; l <= nCharToPrint; l++)
//            {
//                cout << symbol;
//            }
//            nSpace--;
//            nCharToPrint = 2 * j + 1;
//            cout << endl;
//        }
//    }
//
//}
//
//int main()
//{
//    int nTriangles;
//    char character;
//    cout << "please enter the number of triangles in the tree: ";
//    cin >> nTriangles;
//    cout << "please enter the character filling the tree: ";
//    cin >> character;
//    printShiftedTriangle(3, 4, '+');
//    cout << endl;
//    printPineTree(nTriangles, character);
//    return 0;
//}
