//#include <iostream>
//#include <cmath>
//using namespace std;
//
//void analyzeDividors(int num, int& outCountDivs, int& outSumDivs)
//{
//    int sqrtNum = pow(num, 0.5), outCount = 1, outSum = 1;
//    for (int i = 2; i <= sqrtNum; i++)
//    {
//        if(num % i == 0)
//        {
//            if (i == num / i)
//            {
//                outCount++;
//                outSum += i;
//            } else
//            {
//                outCount += 2;
//                outSum += (i + num/i);
//            }
//        }
//    }
//    outCountDivs = outCount;
//    outSumDivs = outSum;
//}
//bool isPerfect(int num)
//{
//    int outCount = 1, outSum = 1;
//    analyzeDividors(num, outCount, outSum);
//    return (num == outSum);
//}
//int main()
//{
//    int num;
//    cout << "Please enter a number for analysis (X >= 2): ";
//    cin >> num;
//    
//    //Print out all perfect numbers within the range
//    for (int index = 2; index <= num; index++)
//    {
//        if (isPerfect(index))
//        {
//            cout << index << endl;
//        }
//    }
//    // Print out all pairs of amicable numbers within the range
//    cout << "Amicable pairs: " << endl;
//        for (int i = 2; i <= num; i++)
//        {
//            int outCountOne, outSumOne;
//            analyzeDividors(i, outCountOne, outSumOne);
//            if (outSumOne > i && outSumOne <= num)
//            {
//                int outCountTwo, outSumTwo;
//                analyzeDividors(outSumOne, outCountTwo, outSumTwo);
//                if (outSumTwo == i)
//                {
//                    cout << "(" << i << ", " << outSumOne << ")" << endl;
//                }
//            }
//        }
//    return 0;
//}
//
//
