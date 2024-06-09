//#include <iostream>
//using namespace std;
//const double HALF_OFF_PRPMOTION = 0.5;
//const double CLUBDISCOUNT = 0.1;
//int main()
//{
//    double firstItemPrice, secondItemPrice;
//    char clubCard;
//    bool discount;
//    double taxRate;
//    cout << "Enter price of first item: ";
//    cin >> firstItemPrice;
//    cout << "Enter price of second item: ";
//    cin >> secondItemPrice;
//    cout << "Does customer have a club card? (Y/N): ";
//    cin >> clubCard;
//    if (clubCard == 'y' && 'Y')
//        discount = true;
//    else
//        discount = false;
//    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
//    cin >> taxRate;
//    //Calculating basePrice, discountPrice, and totalPrice based on inputs
//    double basePrice = firstItemPrice + secondItemPrice;
//    double discountPrice, totalPrice;
//    if (firstItemPrice > secondItemPrice)
//        secondItemPrice = secondItemPrice * HALF_OFF_PRPMOTION;
//    else
//        firstItemPrice = firstItemPrice * HALF_OFF_PRPMOTION;
//    if (!clubCard)
//        discountPrice = firstItemPrice + secondItemPrice;
//    else
//        discountPrice = (firstItemPrice + secondItemPrice) * (1-CLUBDISCOUNT);
//    totalPrice = discountPrice * (1 + taxRate/100);
//    //Displaying the results
//    cout << "Base price: " << basePrice << endl;
//    cout << "Price after discounts: " << discountPrice << endl;
//    cout << "Total price: " << totalPrice << endl;
//}
