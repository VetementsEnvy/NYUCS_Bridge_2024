//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//





//
//template <class T>
//class LListNode
//{
//public:
//    T val;
//    LListNode<T>* next;
//    LListNode(T val, LListNode<T>* next = nullptr): val(val), next(next) {}
//};
//template <class T>
//void reverse_linked_list(LListNode<T>* head)
//{
//    LListNode<T>* curr = head;
//    LListNode<T>* prev = nullptr;
//    while(curr != nullptr)
//    {
//        LListNode<T>* next = curr->next;
//        curr->next = prev;
//        prev = curr;
//        curr = next;
//    }
//}
//
//
//
//
//
//
//
//template <class T>
//LListNode<T>* concatenation(LListNode<T>* first, LListNode<T>* second)
//{
//    LListNode<T>* dummyhead = new LListNode<T>(0);
//    LListNode<T>* current = dummyhead;
//    while(first!=nullptr)
//    {
//        current->next = new LListNode<T>(first->val);
//        current = current->next;
//        first = first->next;
//    }
//
//    while(second!=nullptr)
//    {
//        current->next = new LListNode<T>(second->val);
//        current = current->next;
//        second = second->next;
//    }
//
//    LListNode<T>* head = dummyhead->next;
//    delete dummyhead;
//    return head;
//
//}
//
//
//
//template <class T>
//class BSTNode
//{
//public:
//    T val;
//    BSTNode<T>* left;
//    BSTNode<T>* right;
//    BSTNode<T>* parent;
//    BSTNode(T val, BSTNode<T>* left = nullptr, BSTNode<T>* right =nullptr, BSTNode<T>* parent = nullptr): val(val), left(left), right(right), parent(parent) {}
//};
//
//
//template <class T>
//void inOrderTraverse(BSTNode<T>* node, T& given_val, vector<T>& v)
//{
//    if(node == nullptr) {return;}
//
//    inOrderTraverse(node->left, given_val, v);
//
//
//    if(node->val <= given_val)
//        v.push_back(node->val);
//
//    inOrderTraverse(node->right, given_val, v);
//}
//
//
//
//template <class T>
//void determineChild(BSTNode<T>* node)
//{
//    if(node == nullptr)
//    {
//        cout << "the node does not exist";
//        return;
//    }
//
//    if(node->parent == nullptr)
//    {
//        cout << "the node has no parents";
//        return;
//    }
//
//    if(node->parent->left == node)
//    {
//        cout << "the node is the left child of its parent";
//    }
//
//    if(node->parent->right == node)
//    {
//        cout << "the node is the right child of its parent";
//    }
//}
//
//
//
//
//
//template <class T>
//void inOrderTraverse(BSTNode<T>* node, vector<T>& result)
//{
//    if(node == nullptr) {return;}
//    inOrderTraverse(node->left, result);
//    result.push_back(node->val);
//    inOrderTraverse(node->right, result);
//}
//
//template <class T>
//bool compare(LListNode<T>* sortedList, vector<T> result)
//{
//    int i = 0;
//    while(sortedList != nullptr)
//    {
//        if(sortedList->val != result[i++])
//            return false;
//        sortedList = sortedList->next;
//
//    }
//    return true;
//}
//
//
//template <class T>
//class DoublyLListNode
//{
//public:
//    T val;
//    DoublyLListNode<T>* prev;
//    DoublyLListNode<T>* next;
//    DoublyLListNode(T val, DoublyLListNode<T>* prev = nullptr,
//                    DoublyLListNode<T>* next = nullptr):
//    val(val), prev(prev), next(next) {}
//};
//
//
//template <class T>
//void fixDoublyLListNode(DoublyLListNode<T>* node)
//{
//    int i = 1;
//    DoublyLListNode<T>* curr = node;
//    DoublyLListNode<T>* prev = nullptr;
//    while(curr != nullptr)
//    {
//        if(i % 2 == 0)
//        {
//            curr->next = curr->prev;
//            curr->prev = prev;
//        }
//        i++;
//        prev = curr;
//        curr = curr->next;
//    }
//}
//
//
//
//int main()
//{
//    LListNode<int>* head = new LListNode<int>(1);
//    LListNode<int>* node2 = new LListNode<int>(2);
//    LListNode<int>* node3 = new LListNode<int>(3);
//    LListNode<int>* node4 = new LListNode<int>(4);
//    head->next = node2;
//    node2->next = node3;
//    node3->next = node4;
//
////    while(head!= nullptr)
////    {
////        cout << head->val << ' ';
////        head = head->next;
////    }
//
//    reverse_linked_list(head);
//    while(node4!= nullptr)
//    {
//        cout << node4->val << ' ';
//        node4 = node4->next;
//    }
//
//
//
    
    
    
    
    
    
    
    
    
//    DoublyLListNode<int>* head = new DoublyLListNode<int>(1);
//    DoublyLListNode<int>* node2 = new DoublyLListNode<int>(2);
//    DoublyLListNode<int>* node3 = new DoublyLListNode<int>(3);
//    DoublyLListNode<int>* node4 = new DoublyLListNode<int>(4);
//    head->next = node2;
//    node2->next = head;
//    node2->prev = node3;
//    node3->prev = node2;
//    node3->next = node4;
//    node4->next = node3;
//
//    fixDoublyLListNode(head);
//
//    DoublyLListNode<int>* current = head;
//    while(current != nullptr)
//    {
//        cout << current->val << ' ';
//        current = current->next;
//    }
//
//
    
    
    
    
//    LListNode<int>* sortedList;
//    vector<int> result;
//
//    BSTNode<int>* root = new BSTNode<int>(3);
//        root->left = new BSTNode<int>(2);
//        root->left->left = new BSTNode<int>(1);
//        root->right = new BSTNode<int>(4);
//        root->right->right = new BSTNode<int>(5);
//
//
//    LListNode<int>* head = new LListNode<int>(1);
//    head->next = new LListNode<int>(2);
//    head->next->next = new LListNode<int>(3);
//    head->next->next->next = new LListNode<int>(4);
//    head->next->next->next->next = new LListNode<int>(5);
//
//
//    inOrderTraverse(root, result);
//    bool res = compare(head,result);
//    cout << res << ' ';
//
    
    
    
    
    
    
    
//    BSTNode<int>* node = new BSTNode<int>(5,
//            new BSTNode<int>(3, new BSTNode<int>(2), new BSTNode<int>(4)),
//            new BSTNode<int>(7, new BSTNode<int>(6)), new BSTNode<int>(8));
//    vector<int> result;
//    int given_val = 5;
//
//    inOrderTraverse(node, given_val, result);
//
//
//    for(int i: result)
//    {
//        cout << i << ' ';
//    }
//
    
    
    
    
    
    
    
//    LListNode<int>* first = new LListNode<int>(1);
//    first->next = new LListNode<int>(2);
//    first->next->next = new LListNode<int>(3);
//
//    LListNode<int>* second = new LListNode<int>(2);
//    second->next = new LListNode<int>(3);
//    second->next->next = new LListNode<int>(4);
//
//    LListNode<int>* head = concatenation(first, second);
//
//    while(head!=nullptr)
//    {
//        cout << head->val << ' ';
//        head = head->next;
//    }
//
    
//
//
//}













//
//template <typename T>
//class BSTNode {
//public:
//    T value;
//    BSTNode* left;
//    BSTNode* right;
//
//    BSTNode(T val, BSTNode* l = nullptr, BSTNode* r = nullptr)
//        : value(val), left(l), right(r) {}
//};
//
//template <typename T>
//int countNullChildren(BSTNode<T>* node) {
//    // Base case: If the current node is null, we've found a null child in the parent node.
//    if (node == nullptr) {
//        return 1;
//    }
//
//    // Recursively count null children in both left and right subtrees.
//    return countNullChildren(node->left) + countNullChildren(node->right);
//}
//
//// Example usage
//int main() {
//    // Create a simple BST:
//    //        5
//    //       / \
//    //      3   7
//    //     /   / \
//    //    2   6   8
//    BSTNode<int>* root = new BSTNode<int>(5,
//        new BSTNode<int>(3, new BSTNode<int>(2), nullptr),
//        new BSTNode<int>(7, new BSTNode<int>(6), new BSTNode<int>(8))
//    );
//
//    int nullCount = countNullChildren(root);
//    std::cout << "The number of null child pointers in the tree is: " << nullCount << std::endl;
//
//    // Remember to delete allocated nodes to avoid memory leaks in a real application.
//    return 0;
//}
//
//
//








//template <class T>
//struct BSTNode
//{
//    T val;
//    BSTNode* left;
//    BSTNode* right;
//    BSTNode* parent;
//    BSTNode(T val, BSTNode* left = nullptr, BSTNode* right = nullptr, BSTNode* parent = nullptr): val(val), left(left), right(right), parent(parent) {}
//};
//
//
//template <class T>
//void inOrderTraverse(BSTNode<T>*& given_node, T given_val, vector<T>& result)
//{
//    if(given_node == nullptr) {return;}
//
//    inOrderTraverse(given_node->left, given_val, result);
//
//
//    if (given_node->val <= given_val)
//    {
//        result.push_back(given_node->val);
//    }
//
//    inOrderTraverse(given_node->right, given_val, result);
//}
//
//
//
//
//
//int main()
//{
//    int given_val = 5;
//    BSTNode<int>* root = new BSTNode<int>(5,
//        new BSTNode<int>(3, new BSTNode<int>(2), new BSTNode<int>(4)),
//        new BSTNode<int>(7, new BSTNode<int>(6), new BSTNode<int>(8))
//    );
//
//    vector<int> result;
//
//    inOrderTraverse(root, 5, result);
//
//
//    for(int res: result)
//    {
//        cout << res << ' ';
//    }
//
//
//
//}



//template <class T>
//struct LListNode
//{
//    T value;
//    LListNode<T*> next;
//    LListNode() {}
//    LListNode(T val, LListNode<T*> next): value(val), next(next) {}
//
//};
//
//template <class T>
//LListNode<T>* concatenateLists(LListNode<T>* first, LListNode<T>* second)
//{
//
//
//    LListNode<T>* dummyHead = new LListNode<T>();
//    LListNode<T>* current = dummyHead;
//
//    while(first != nullptr)
//    {
//        current->next = new LListNode<T>(first->value, nullptr);
//        current = current->next;
//        first = first->next;
//    }
//
//    while(second != nullptr)
//    {
//        current->next = new LListNode<T>(second->value, nullptr);
//        current = current->next;
//        second = second->next;
//    }
//
//    LListNode<T>* newList = dummyHead->next;
//    delete dummyHead;
//    return newList;
//

    
    

//    vector<LListNode<T>*> nodeVec;
//    while(first != nullptr && first->next != nullptr)
//    {
//        nodeVec.push_back(first);
//        first = first->next;
//    }
//    while(second != nullptr && second->next != nullptr)
//    {
//        nodeVec.push_back(second);
//        second = second->next;
//    }
//
//    LListNode<T>* newList = new LListNode<T>(nodeVec[0]->value, nullptr);
//    LListNode<T>* head = newList;
//    for(int i = 1; i < nodeVec.size(); i++)
//    {
//        newList->next = new LListNode<T>(nodeVec[i]->value, nullptr);
//        newList = newList->next;
//
//    }
//
//    return head;
//
    
    
//    for(T node: nodeVec)
//    {
//        newList.next = node;
//    }
//
//}
























//struct Position
//{
//private:
//    int x;
//    int y;
//public:
//    Position(): x(0), y(0) {};
//    Position(int x, int y): x(x), y(y) {};
//    Position(const Position& P): x(P.x), y(P.y) {};
//    
//    
//    bool operator==(const Position& P)
//    {
//        return (x == P.x && y == P.y);
//    }
//    Position& operator=(const Position& P)
//    {
//        if(this != &P)
//        {
//            this->x = P.x;
//            this->y = P.y;
//        }
//        return *this;
//    }
//    
//    const Position getPosition() const {return *this;}
//    
//    void setPosition(const Position& P)
//    {
//        x = P.getPosition().x;
//        y = P.getPosition().y;
//    }
//    
//    
//    
//    friend ostream& operator<<(ostream& out, const Position& P);
//    friend istream& operator>>(istream& ins, Position& P);
//    
//};
//
//ostream& operator<<(ostream& out, const Position& P)
//{
//    out << "(x = " << P.x << " , y = " << P.y << ")";
//    return out;
//}
//istream& operator>>(istream& ins, Position& P)
//{
//    char temp;
//    ins >> P.x >> temp >> P.y;
//    return ins;
//}
//
//
//
//
//
//int main()
//{
//    Position newPosition = Position();
//    cout << "current position: ";
//    cout << newPosition << endl;
//    
//    cin >> newPosition;
//    cout << "new position: ";
//    cout << newPosition << endl;
//    
//    
//    Position PositionTwo(10, 20);
//    newPosition = PositionTwo;
//    cout << "newest position: ";
//    cout << newPosition;
//    
//}
//
//
//
//
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
////struct ShoeType
////{
////    char style;
////    double price;
////};
////
////
////struct Date
////{
////    int month;
////    int day;
////    int year;
////};
////
////struct StockRecord
////{
////    ShoeType shoe_info;
////    Date arrival_date;
////};
////
////
////
////
////ShoeType discount(ShoeType old_record)
////{
////    ShoeType new_record;
////    new_record.style = old_record.style;
////    new_record.price = old_record.price * (1 - 0.1);
////    return new_record;
////}
////
////void read_shoe_record(const ShoeType new_shoe)
////{
////    cout << new_shoe.style << endl;
////    cout << new_shoe.price << endl;
////}
////
////int main()
////{
////    ShoeType old_shoe = {'A', 9.99};
////    Date newDate = {1, 1, 2024};
////
////    StockRecord record = {old_shoe, newDate};
////
////    record.arrival_date.year = 2016;
////
////    cout << record.arrival_date.year;
////}
//
//class DayOfYear
//{
//        int month;
//        int day;
//    public:
//        DayOfYear(): month(1), day(1) {};
//        DayOfYear(int month, int day): month(month), day(day) {};
//        void input();
//        void output();
//};
//
//void DayOfYear::input()
//{
//    std::cout << "Enter month (1-12): ";
//    std::cin >> month;
//    while (month < 1 || month > 12) {
//        std::cout << "Invalid month. Please enter a value between 1 and 12: ";
//        std::cin >> month;
//    }
//
//    std::cout << "Enter day (1-31): ";
//    std::cin >> day;
//    while (day < 1 || day > 31) {
//        std::cout << "Invalid day. Please enter a value between 1 and 31: ";
//        std::cin >> day;
//    }
//}
//
//void DayOfYear::output()
//{
//    std::cout << "Month: " << month << ", Day: " << day << std::endl;
//
//
//}
//
//class Temperature
//{
//public:
//    void set(double new_degrees, char new_scale); //Sets the member variables to the values given as //arguments.
//    double degrees;
//    char scale; //'F' for Fahrenheit or 'C' for Celsius.
//
//};
//
//void Temperature::set(double new_degrees, char new_scale)
//{
//    degrees = new_degrees;
//    scale = new_scale;
//}
//
//
//class Automobile
//{
//public:
//    void set_price(double new_price);
//    void set_profit(double new_profit);
//    double get_price();
//private:
//    double price;
//    double profit;
//    double get_profit();
//};
//
//
//
//
//class BankAccount
//{
//public:
//    BankAccount(int dollars, int cents, double rate);
//    BankAccount(int dollars, double rate);
//    BankAccount();
//    void set(int dollars, int cents, double rate);
////Postcondition: The account balance has been set to $dollars.cents;
////The interest rate has been set to rate percent.
//    void set(int dollars, double rate);
////Postcondition: The account balance has been set to $dollars.00.
////The interest rate has been set to rate percent.
//    void update( );
////Postcondition: One year of simple interest has been
////added to the account balance.
//    double get_balance( );
////Returns the current account balance.
//    double get_rate( );
////Returns the current account interest rate as a percentage.
//    void output(ostream& outs);
////Precondition: If outs is a file output stream, then
////outs has already been connected to a file.
////Postcondition: Account balance and interest rate have
////been written to the stream outs.
//private:
//    double balance;
//    double interest_rate;
//    double fraction(double percent);
//    //Converts a percentage to a fraction. For example, fraction(50.3)
//    //returns 0.503.
//};
//
//
//BankAccount::BankAccount(int dollars, int cents, double rate)
//{
//
//    if ((dollars < 0) || (cents < 0) || (rate < 0))
//    {
//        cout << "Illegal values for money or interest rate.\n";
//        exit(1);
//    }
//    balance = dollars + 0.01*cents;
//    interest_rate = rate;
//}
//
//BankAccount::BankAccount(int dollars, double rate)
//{
//    if ((dollars < 0) || (rate < 0))
//    {
//        cout << "Illegal values for money or interest rate.\n";
//        exit(1);
//    }
//    balance = dollars;
//    interest_rate = rate;
//}
//
//BankAccount::BankAccount()
//{
//
//}
//
//void BankAccount::set(int dollars, int cents, double rate)
//{
//    if ((dollars < 0) || (cents < 0) || (rate < 0))
//    {
//        cout << "Illegal values for money or interest rate.\n";
//        exit(1);
//    }
//    balance = dollars + 0.01*cents;
//    interest_rate = rate;
//}
//
//void BankAccount::set(int dollars, double rate)
//{
//    if ((dollars < 0) || (rate < 0))
//    {
//        cout << "Illegal values for money or interest rate.\n";
//        exit(1);
//    }
//    balance = dollars;
//    interest_rate = rate;
//}
//
//void BankAccount::update( )
//{
//    balance = balance + fraction(interest_rate)*balance;
//}
//
//double BankAccount::fraction(double percent_value)
//{
//    return (percent_value / 100.0);
//}
//
//double BankAccount::get_balance( )
//{
//    return balance;
//}
//
//double BankAccount::get_rate( )
//{
//    return interest_rate;
//}
//
//void BankAccount::output(ostream& outs)
//{
//    outs.setf(ios::fixed);
//    outs.setf(ios::showpoint);
//    outs.precision(2);
//    outs << "Account balance $" << balance << endl;
//    outs << "Interest rate " << interest_rate << "%" << endl;
//}
//
//
//double difference(BankAccount account1, BankAccount account2)
//{
//    return account1.get_balance() - account2.get_balance();
//}
//
//void double_update(BankAccount& the_account)
//{
//    the_account.update();
//    the_account.update();
//}
//
//
//class YourClass
//{
//public:
//    YourClass(int new_info, char more_new_info); YourClass();
//    void do_stuff();
//private:
//    int information;
//    char more_information;
//};
//
//
//class Pairs
//{
//public:
//    Pairs( );
//    Pairs(int first, int second);
//    //other members and friends
//    friend istream& operator >>(istream& ins, Pairs& second);
//    friend ostream& operator <<(ostream& outs, const Pairs& second);
//private:
//    int f;
//    int s;
//};
//
//istream& operator >>(istream& ins, Pairs& second)
//{
//    char temp;
//    ins >> temp;
//    ins >> second.f;
//    ins >> temp;
//    ins >> second.s;
//    return ins;
//}
//
//
//ostream& operator <<(ostream& outs, const Pairs& second)
//{
//    outs << '(';
//    outs << second.f;
//    outs << ',';
//    outs << second.s;
//    outs << ')';
//    return outs;
//}
//
//class Percent
//{
//public:
//    friend bool operator ==(const Percent& first, const Percent& second);
//    friend bool operator <(const Percent& first, const Percent& second);
//    Percent();
//    Percent(int percent_value);
//    friend istream& operator >>(istream& ins, Percent& the_object);
//    //Overloads the >> operator to input values of type //Percent.
//    //Precondition: If ins is a file input stream, then ins //has already been connected to a file.
//    friend ostream& operator <<(ostream& outs, const Percent& a_percent);
//    //Overloads the << operator for output values of type //Percent.
//    //Precondition: If outs is a file output stream, then //outs has already been connected to a file.
//private:
//    int value;
//};
//
//
//istream& operator >>(istream& ins, Percent& the_object)
//{
//    char percent_sign;
//    ins >> the_object.value;
//    ins >> percent_sign;
//    return ins;
//
//
//}
//ostream& operator <<(ostream& outs, const Percent& a_percent)
//{
//    outs << a_percent.value << '%';
//    return outs;
//}
//
//
//
//struct Score
//{
//    int home_team;
//    int opponent;
//};
//
//
//
//
//int main()
//{
//    Score scoreArr[10];
//
//
//
////    DayOfYear dayofyear;
////    dayofyear.input();
////    dayofyear.output();
//
////    Temperature tmp;
////    tmp.set(24.5, 'F');
////    cout << tmp.degrees << " " << tmp.scale;
//
////    BankAccount account1, account2;
////    account1.set(500, 99, 5.5);
////    account2.set(400, 99, 5.5);
////
////    double diff = difference(account1, account2);
////    cout << diff << endl;
//
////    double_update(account1);
////    cout << account1.get_balance() << endl;
////
////    BankAccount account3 = new_account(account1);
////    account3.output(cout);
////    BankAccount account;
////    account.output(cout);
////    DayOfYear doy1(5, 4);
////    DayOfYear doy2 = DayOfYear();
////    doy1.output();
////    doy2.output();
//
//    int x;
//    cin >> x;
//    cout << x << endl;
//    return 0;
//
//
//
//}
