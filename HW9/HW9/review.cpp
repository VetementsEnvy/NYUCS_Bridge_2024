//#include <stack>
//#include <queue>
//#include <iostream>
//#include <list>
//#include <fstream>
//using namespace std;
////
//////struct A
//////{
//////    int member_b;
//////    int member_c;
//////};
//////
//////
//////struct Date
//////{
//////    int month;
//////    int day;
//////    int year;
//////};
//////
//////struct EmployeeRecord
//////{
//////    double wage_rate;
//////    int accured_vacation;
//////    char status;
//////};
//////
//////struct ShoeType
//////{
//////    char style;
//////    double price;
//////};
//////
//////struct StockRecord
//////{
//////    ShoeType shoe_info;
//////    Date arrival_date;
//////};
//////
//////
//////
//////
//////
//////
//////void read_shoe_record(ShoeType& new_shoe)
//////{
//////    char temp_style;
//////    double temp_price;
//////    cout << "what is your shoe style" << endl;
//////    cin >> new_shoe.style;
//////    cout << "what is your shoe price" << endl;
//////    cin >> new_shoe.price;
//////};
//////
//////ShoeType discount(ShoeType old_record)
//////{
//////    ShoeType new_shoe;
//////    new_shoe.style = old_record.style;
//////    new_shoe.price = old_record.price * 0.9;
//////    return new_shoe;
//////}
//////
////////class DayOfYear
////////{
////////public:
////////    void input();
////////    void output();
////////    int month;
////////    int day;
////////};
////////
////////
////////void DayOfYear::input()
////////{
////////    cout << "what is your month of the year" << endl;
////////    cin >> this->month;
////////    cout << "what is your day of the year" << endl;
////////    cin >> this->day;
////////}
//////
//////
//////
//////class Temperature
//////{
//////public:
//////    void set(double new_degrees, char new_scale); //Sets the member variables to the values given as //arguments.
//////    double degrees;
//////    char scale; //'F' for Fahrenheit or 'C' for Celsius. };
//////
//////};
//////
//////
//////void Temperature::set(double new_degrees, char new_scale)
//////{
//////    this->degrees = new_degrees;
//////    this->scale = new_scale;
//////}
//////
//////
//////class DayOfYear
//////{
//////public:
//////    DayOfYear(int month, int day);
//////    DayOfYear();
//////    friend bool after(DayOfYear date1, DayOfYear date2);
//////
//////    void input();
//////    void output();
//////    void set(int new_month, int new_day);
//////    //Precondition: new_month and new_day form a possible date. //Postcondition: The date is reset according to the //arguments.
//////    int get_month();
//////    //Returns the month, 1 for January, 2 for February, etc.
//////    int get_day();
//////    //Returns the day of the month.
//////private:
//////    void check_date( );
//////    int month;
//////    int day;
//////};
//////
//////
//////DayOfYear::DayOfYear(int month, int day)
//////{
//////    month = month;
//////    day = day;
//////    check_date();
//////}
//////
//////DayOfYear::DayOfYear()
//////{
//////    month = 1;
//////    day = 1;
//////}
//////
//////
//////bool after(DayOfYear date1, DayOfYear date2)
//////{
//////    return (date1.get_month() > date2.get_month()) ||
//////    ((date1.get_month() == date2.get_month()) && (date1.get_day() > date2.get_day()));
//////}
//////
//////
//////bool before(DayOfYear date1, DayOfYear date2)
//////{
//////    return (date1.get_month() < date2.get_month()) ||
//////    ((date1.get_month() == date2.get_month()) && (date1.get_day() < date2.get_day()));
//////
//////
//////}
//////
//////void DayOfYear::check_date()
//////{
//////    if(month < 1 ||  month > 12 || day < 1 || day > 31)
//////    {
//////        cout << "Illegal date" << endl;
//////        exit(1);
//////    }
//////    if((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
//////    {
//////        cout << "Illegal date" << endl;
//////        exit(1);
//////    }
//////    if((month == 2) && (day > 29))
//////    {
//////        cout << "Illegal date" << endl;
//////        exit(1);
//////    }
//////}
//////
//////
//////class Automobile
//////{
//////public:
//////    void set_price(double new_price);
//////    void set_profit(double new_profit);
//////    double get_price();
//////private:
//////    double price;
//////    double profit;
//////    double get_profit();
//////};
//////
//////
//////
//////class BankAccount
//////{
//////public:
//////    BankAccount() {};
//////    BankAccount(int dollars, int cents, double rate):
//////    dollars_part(dollars), cent_part(cents), interest_rate(rate)
//////    {
//////        if((dollars < 0) || (cents < 0) || (rate < 0))
//////        {
//////            cout << "Illgal values input" << endl;
//////            exit(1);
//////        }
//////    };
//////    BankAccount(int dollars, double rate):
//////    dollars_part(dollars), interest_rate(rate)
//////    {
//////        if((dollars < 0) || (rate < 0))
//////        {
//////            cout << "Illgal values input" << endl;
//////            exit(1);
//////        }
//////    };
//////
//////    void set(int dollars, int cents, double rate);
//////    void set(int dollars, double rate);
//////    void update( );
//////    double get_balance( );
//////    double get_rate( );
//////    void output(ostream& outs);
//////private:
//////    double balance;
//////    double dollars_part;
//////    double cent_part;
//////    double interest_rate;
//////    double fraction(double percent);
//////};
//////
//////
//////
//////
//////
//////
//////
//////void BankAccount::update( )
//////{
//////    balance = balance + fraction(interest_rate)*balance;
//////}
//////
//////double BankAccount::fraction(double percent_value)
//////{
//////    return (percent_value / 100.0);
//////}
//////
//////
//////void double_update(BankAccount &the_account)
//////{
//////    the_account.update();
//////    the_account.update();
//////}
//////
//////
//////double difference(BankAccount account1, BankAccount account2)
//////{
//////    double diff = account1.get_balance() - account2.get_balance();
//////    return diff;
//////}
//////
//////BankAccount new_account(BankAccount old_account)
//////{
//////    BankAccount new_account;
//////    new_account.set(0, old_account.get_rate());
//////    return new_account;
//////}
//////
//////
////class Money
////{
////public:
////    friend Money operator+(Money amount1, Money amount2);
////    friend Money operator-(Money amount1, Money amount2);
////    friend bool operator==(Money amount1, Money amount2);
////    friend bool operator<(Money amount1, Money amount2);
////    friend bool operator<=(Money amount1, Money amount2);
////    friend bool equal(Money amount1, Money amount2);
////    friend istream& operator>>(istream& ins, Money& money);
////    friend ostream& operator<<(ostream& ins, Money& money);
////    Money(long dollars, int cents);
////    Money(long dollars);
////    Money() {};
////    double get_value();
////    void input(istream& ins);
////    void output(ostream& outs);
////    void output();
////
////
////private:
////    long all_cents;
//////    int digit_to_int(char c);
////};
////
////istream& operator>>(istream& ins, Money& money)
////{
////    ins >> money.all_cents;
////    return ins;
////}
////
////ostream& operator<<(ostream& outs, Money& money)
////{
////    outs << money.all_cents;
////    return outs;
////
////}
////
////
////void Money::output(ostream& outs)
////{
////    outs << all_cents;
////}
////
////void Money::output()
////{
////    output(cout);
////}
////
////double Money::get_value()
////{
////    return (all_cents * 0.01);
////}
////
////Money operator+(Money amount1, Money amount2)
////{
////    Money temp;
////    temp.all_cents = amount1.all_cents + amount2.all_cents;
////    return temp;
////
////}
////
////Money operator-(Money amount1, Money amount2)
////{
////    Money temp;
////    temp.all_cents = amount1.all_cents - amount2.all_cents;
////    return temp;
////
////}
////
////bool operator==(Money amount1, Money amount2)
////{
////    return (amount1.all_cents == amount2.all_cents);
////}
////bool operator<(Money amount1, Money amount2)
////{
////    return (amount1.all_cents < amount2.all_cents);
////}
////
////bool operator<=(Money amount1, Money amount2)
////{
////    return (amount1.all_cents <= amount2.all_cents);
////}
////
////
////
////class Pairs
////{
////public: Pairs( );
////    Pairs(int first, int second);
////    //other members and friends
////    friend istream& operator >>(istream& ins, Pairs& second);
////    friend ostream& operator <<(ostream& outs, const Pairs& second);
////private:
////    int f;
////    int s;
////};
////
////istream& operator >>(istream& ins, Pairs& second)
////{
////    char ch;
////    ins >> ch;
////    ins >> second.f;
////    ins >> ch;
////    ins >> second.s;
////    return ins;
////
////}
////
////ostream& operator <<(ostream& outs, const Pairs& second)
////{
////    outs << '(';
////    outs << second.f;
////    outs << ", ";
////    outs << second.s;
////    outs << ')';
////    return outs;
////}
////
////
////class Percent {
////public:
////    friend bool operator ==(const Percent& first, const Percent& second);
////    friend bool operator <(const Percent& first, const Percent& second);
////    Percent();
////    Percent(int percent_value);
////    friend istream& operator >>(istream& ins, Percent& the_object);
////   //Overloads the >> operator to input values of type //Percent.
////   //Precondition: If ins is a file input stream, then ins //has already been connected to a file.
////   friend ostream& operator <<(ostream& outs, const Percent& a_percent);
////   //Overloads the << operator for output values of type //Percent.
////   //Precondition: If outs is a file output stream, then //outs has already been connected to a file.
////private:
////   int value;
////};
////
////
////
////struct Score
////{
////    int home_team;
////    int opponent;
////};
////
////
////
////
////
////const int MAX_LIST_SIZE = 50;
////class TemperatureList
////{
////public:
////    TemperatureList();
////    void add_temperature(double temperature);
////    const int get_size() const;
////    const double get_temperature(int index) const;
////    bool full() const;
////    friend ostream& operator<<(ostream& outs, const TemperatureList& the_object);
////
////
////private:
////    double list[MAX_LIST_SIZE];
////    int size;
////};
////
////TemperatureList::TemperatureList( ) : size(0)
////{
////
////}
////
////void TemperatureList::add_temperature(double temperature)
////{
////    if(full())
////    {
////        cout << "Error: adding to a full list.\n";
////        exit(1);
////    } else
////    {
////        list[size] = temperature;
////        size++;
////    }
////}
////
////const int TemperatureList::get_size() const
////{
////    return size;
////}
////
////const double TemperatureList::get_temperature(int index) const
////{
////    if(index < 0 || index > MAX_LIST_SIZE)
////    {
////        cout << "Error: index is out of the scope" << endl;
////        exit(1);
////    } else
////    {
////        return list[index];
////    }
////}
////
////
////
////
////
////bool TemperatureList::full() const
////{
////    return (size == MAX_LIST_SIZE);
////}
////
////ostream& operator<<(ostream& outs, const TemperatureList& the_object)
////{
////    for(int i = 0; i < the_object.size; i++)
////    {
////        outs << the_object.list[i] << "F\n";
////    }
////    return outs;
////}
////
////
////
////
////istream& operator >>(istream& ins, Percent& the_object)
////{
////    int tmp;
////    char temp;
////    ins >> tmp >> temp;
////    the_object.value = tmp;
////    return ins;
////}
////
////
////ostream& operator <<(ostream& outs, const Percent& a_percent)
////{
////    outs << a_percent.value << "%";
////    return outs;
////}
////
////
////
//////class A
//////{
//////public:
//////    A(int x, int y): x(x), y(y) {};
//////    A() {};
//////    int getx() const {return x;}
//////    int gety() const {return y;}
//////    void print()
//////    {
//////        cout << "x: " << x << endl;
//////        cout << "y: " << y << endl;
//////    }
//////private:
//////    int x;
//////    int y;
//////
//////};
//////class B: public A
//////{
//////
//////public:
//////    B(int x, int y, int z): A(x, y), z(z) {};
//////
//////
//////    void print()
//////    {
//////        cout << "z: " << z << endl;
//////    }
//////private:
//////    int z;
//////};
////
//////void printsome(A& a_obj)
//////{
//////    a_obj.print();
//////}
//////
////
////class Smart
////{
////public:
////    Smart();
////    void print_answer() const;
////protected:
////    int a;
////    int b;
////};
////
////class SmartBut:public Smart
////{
////public:
////    SmartBut();
////    SmartBut(int new_a, int new_b, bool crazy);
////    bool is_crazy() {return crazy;}
////
////private:
////    bool crazy;
////
////};
////
////
////int sequentialSearch(vector<int> v, int toFind)
////{
////    for(int i = 0; i < v.size(); i++)
////    {
////        if(v[i] == toFind)
////        {
////            return i;
////        }
////    }
////    return -1;
////}
////
////int binarySearch(vector<int> v, int toFind)
////{
////    int start = 0;
////    int end = v.size() - 1;
////    while(start <= end)
////    {
////        int mid = (end + start) / 2;
////        if(v[mid] == toFind)
////        {
////            return mid;
////        } else if (v[mid] > toFind)
////        {
////            end = mid - 1;
////        } else
////        {
////            start = mid + 1;
////        }
////    }
////    return -1;
////}
////
////void selectionSort(vector<int>& v)
////{
////    for(int i = 0; i < v.size(); i++)
////    {
////        int min = i;
////        for(int j = i + 1; j < v.size(); j++)
////        {
////            if(v[j] < v[min])
////            {
////                min = j;
////            }
////
////        }
////        int temp = v[min];
////        v[min] = v[i];
////        v[i] = temp;
////    }
////}
////
////
////void insertSort(vector<int>& v)
////{
////    for(int i = 1; i < v.size(); i++)
////    {
////        int temp = v[i];
////        int j;
////        for(j = i; j > 0 && v[j - 1] > temp; j--)
////        {
////            v[j] = v[j - 1];
////        }
////        v[j] = temp;
////    }
////}
////
////void merge(vector<int>& v, int leftPos, int leftEnd, int rightEnd, vector<int>& temp)
////{
////    int rightPos = leftEnd + 1;
////    int originalStart = leftPos;
////    int tempPos = leftPos;
////    while(leftPos <= leftEnd && rightPos <= rightEnd)
////    {
////        if (v[leftPos] < v[rightPos])
////            temp[tempPos++] = v[leftPos++];
////        else
////            temp[tempPos++] = v[rightPos++];
////    }
////    while(leftPos <= leftEnd)
////    {
////        temp[tempPos++] = v[leftPos++];
////    }
////    while(rightPos <= rightEnd)
////    {
////        temp[tempPos++] = v[rightPos++];
////    }
////    for(int i = originalStart; i <= rightEnd; i++)
////    {
////        v[i] = temp[i];
////    }
////}
////void mergeSort(vector<int>& v, int start, int end, vector<int>& temp)
////{
////    if(start < end)
////    {
////        int mid = (start + end) / 2;
////        mergeSort(v, start, mid, temp);
////        mergeSort(v, mid + 1, end, temp);
////        merge(v, start, mid, end, temp);
////    }
////
////}
////
////void mergeSort(vector<int>& v)
////{
////    vector<int> temp;
////    temp.resize(v.size());
////    mergeSort(v, 0, v.size() - 1, temp);
////}
////
////
////
////
////
////template <class T>
////void printVec(const vector<T>& v)
////{
////    for(int i = 0; i < v.size(); i++)
////    {
////        cout << v[i] << ' ';
////    }
////    cout << endl;
////}
////
//////template <class T>
//////void quickSort(vector<T>& v, int start, int end)
//////{
//////    if((end - start) <= 10)
//////    {
//////        insertSort(v);
//////    }
//////    int center = (start + end) / 2;
//////
//////    if(v[center] < v[start])
//////    {
//////        swap(v[center], v[start]);
//////    }
//////    if(v[end] < v[start])
//////    {
//////        swap(v[end], v[start]);
//////    }
//////    if(v[end] < v[center])
//////    {
//////        swap(v[end], v[center]);
//////    }
//////    T pivot = v[center];
//////    swap(v[center], v[end - 1]);
//////    int i = start;
//////    int j = end - 1;
//////    while(true)
//////    {
//////
//////    }
//////
//////
//////
//////
//////
//////}
////
////
////
////
////template <class T>
////class stack
////{
////    list<T> data;
////public:
////    void push(T newItem) {data.push_front(newItem);}
////    T pop() {return data.pop_front();}
////    T top() const {return *data.begin();}
////    bool isEmpty() const {return data.size() == 0;}
////    int size() const {return data.size();}
////    void clear() {data.clear();}
////};
////
////
////template <class T>
////class queues
////{
////    list<T> data;
////public:
////    void enqueue(T newItem) {data.push_back(newItem);}
////    T dequeue() {return data.pop_front();}
////    T top() const {return *data.begin();}
////    bool isEmpty() const {return data.size() == 0;}
////    int size() const {return data.size();}
////    void clear() {data.clear();}
////};
////
////
////
////
////
////
////class Base
////{
////public:
////    Base() {}
////    virtual void f()
////    {
////        cout << "BASE" << endl;
////    }
////
////};
////
////class Derived: public Base
////{
////
////public:
////    Derived(){}
////    virtual void f()
////    {
////        cout << "Derived" << endl;
////    }
////};
////
////
////class A
////{
////private:
////    int x;
////    int y;
////public:
////    A(): x(0), y(0)
////    {
////        std::cout << "Default constructor" << std::endl;
////    }
////    A(int x, int y): x(x), y(y)
////    {
////        std::cout << "Constructor with two values" << std::endl;
////    }
//// A(const A& other)
////    {
////     std::cout << "Copy Constructor" << std::endl;
////     x = other.x;
////     y = other.y;
////    }
////};
////
////
////
////A* func(A* obj)
////{
////    cout << "this is a function" << endl;
////    return obj;
////}
////
////
////class Sorting
////{
////public:
////    virtual void sort(vector<int>& v) = 0;
////    virtual string worst_case_runtime() = 0;
////};
////
////class InsertionSort:public Sorting
////{
////    string worst_case_runtime() override
////    {
////        string res = "worst case runtime is n^2";
////        return res;
////    }
////    void sort(vector<int>& v) override
////    {
////        int key, j;
////        int n = v.size();
////        for(int i = 1; i < n; i++)
////        {
////            key = v[i];
////            j = i - 1;
////            while(j > 0 && v[j] > key)
////            {
////                v[j+1] = v[j];
////                j--;
////            }
////            v[j + 1] = key;
////        }
////    }
////};
////
////
////
////class QuickSort:public Sorting
////{
////    string worst_case_runtime() override
////    {
////        string res = "worst case runtime is n^2";
////        return res;
////    }
////    void sort(vector<int>& v) override
////    {
////
////    }
////};
////
////class MergeSort:public Sorting
////{
////    string worst_case_runtime() override
////    {
////        string res = "worst case runtime is nlogn";
////        return res;
////    }
////    void sort(vector<int>& v) override
////    {
////
////    }
////};
////
////struct ListNode
////{
////    int val;
////    ListNode* next;
////    ListNode(int val): val(val), next(nullptr) {}
////};
////
////ListNode* reverse_linked_list(ListNode* head)
////{
////    ListNode* current = head;
////    ListNode* prev = nullptr;
////    ListNode* next = nullptr;
////
////
////
////    while(current != nullptr)
////    {
////        next = current->next;
////        current->next = prev;
////        prev = current;
////        current = next;
////    }
////    head = prev;
////    return prev;
////
////
////
////
////
//////    while(current != nullptr)
//////    {
//////        next = current->next;
//////        current->next = prev;
//////        prev = current;
//////        current = next;
//////    }
//////    head = prev;
//////    return prev;
//// // Reverse the linked list and return the new head after reversing
////}
////bool is_target_in_list(ListNode* head, int target)
////{
//// // check if the linked list contains the target
////    ListNode* current = head;
////    while(current != nullptr)
////    {
////        if(current->val == target)
////        {
////            return true;
////        }
////        current = current->next;
////    }
////    return false;
////
////
////}
////int find_max(ListNode* head)
////{
////    ListNode* current = head;
////    int max = head->val;
////    while(current != nullptr)
////    {
////        if(current->val > max)
////        {
////            max = current->val;
////        }
////        current = current->next;
////    }
////    return max;
////
////
////
////
////
//// // find the largest value in the node
////}
////
////
////
//
//
//
//
//
//class MinStack
//{
//private:
//    stack<int> s;
//    stack<int> min;
//
//public:
// /** initialize your data structure here. */
//    MinStack() {}
//    void push(int x)
//    {
//        if(min.empty() || x < min.top())
//        {
//            min.push(x);
//        }
//        s.push(x);
//    }
//    void pop()
//    {
//        if(s.empty()) {return;}
//        if(s.top() == min.top())
//        {
//            min.pop();
//
//        }
//        s.pop();
//    }
//
//    int top()
//    {
//        return s.top();
//
//    }
//    int getMin()
//    {
//
//        return min.top();
//
//    }
//};
//
//class StackUsingQueues
//{
//private:
//    queue<int> q1, q2;
//
//
//public:
//    void push(int x)
//    {
//        q2.push(x);
//        while(!q1.empty())
//        {
//            q2.push(q1.front());
//            q1.pop();
//        }
//        swap(q1, q2);
//    }
//
//
//    void pop()
//    {
//        if(!q1.empty())
//        {
//            q1.pop();
//        }
//    }
//
//    int top()
//    {
//        if(!q1.empty())
//        {
//            return q1.front();
//        }
//        return -1;
//    }
//
//    bool empty()
//    {
//        return q1.empty();
//    }
//
//
//};
//
//struct TreeNode
//{
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int val): val(val), left(nullptr), right(nullptr) {}
//};
//// Given two binary trees, write a function to check if they are the same or not.
//// Two binary trees are considered the same if they are structurally identical
//// and the nodes have the same value.
//bool isSameTree(TreeNode* p, TreeNode* q)
//{
// // TODO
//
//    if(p == nullptr || q == nullptr) return (p == q);
//    return (p->val == q->val && isSameTree(p->left, p->left) && isSameTree(p->right, p->right));
//}
//// Given a binary tree, check whether it is a mirror of itself
//// (ie, symmetric around its center).
//bool isSymmetricHelp(TreeNode* left, TreeNode* right)
//{
//    if((left == nullptr) || (right == nullptr))
//        return left == right;
//    if(left->val != right->val)
//        return false;
//    return isSymmetricHelp(left->left, right->right) &&
//           isSymmetricHelp(left->right, right->left);
//}
//
//
//bool isSymmetric(TreeNode* root)
//{
//    return root == nullptr || isSymmetricHelp(root->left, root->right);
// // TODO
//}
//// Given a binary tree, implement level order traversal
//void levelOrder(TreeNode* root)
//{
// // TODO
//    if(root == nullptr) {return;}
//    queue<TreeNode*> q;
//    q.push(root);
//    while(!q.empty())
//    {
//        TreeNode* current = q.front();
//        cout << current->val << ' ';
//        q.pop();
//        if(root->left != nullptr)
//            q.push(root->left);
//        if(root->right != nullptr)
//            q.push(root->right);
//    }
//
//
//
//
//
////    if(!root) {return;}
////    queue<TreeNode*> q;
////    q.push(root);
////
////    while(!q.empty())
////    {
////        TreeNode* current = q.front();
////        cout << current->val << ' ';
////        q.pop();
////        if(current->left != nullptr)
////            q.push(current->left);
////        if(current->right != nullptr)
////            q.push(current->right);
////    }
//
//
////    if (!root) return;
////
////    queue<TreeNode*> q;
////    q.push(root);
////
////    while(!q.empty())
////    {
////        TreeNode* current = q.front();
////        q.pop();
////
////        cout << current->val << " ";
////        if(current->left != nullptr)
////        {
////            q.push(current->left);
////        }
////        if(current->right != nullptr)
////        {
////            q.push(current->right);
////        }
////    }
//}
//
//void preOrder(TreeNode* root)
//{
// // TODO
//
//    if(root == nullptr) {return;}
//    cout << root->val << ' ';
//    preOrder(root->left);
//    preOrder(root->right);
//
//
////    if (!root) return;
////    cout << root->val << ' ';
////    preOrder(root->left);
////    preOrder(root->right);
//
//}
//
//
//void postOrder(TreeNode* root)
//{
// // TODO
//
//    if (!root) return;
//    postOrder(root->left);
//    postOrder(root->right);
//    cout << root->val << ' ';
//}
//
//
//void inOrder(TreeNode* root)
//{
// // TODO
//
//    if (!root) return;
//    postOrder(root->left);
//    cout << root->val << ' ';
//    postOrder(root->right);
//}
//
//void readRightchild(TreeNode* root)
//{
//    readRightchild(root->right);
//    cout << root->val << ' ';
//
//
//
//}
//
//
//class Thing
//{
//public:
//    void member();
//};
//
//
//
//class student
//{
//
//
//public:
//
//    int id;
//    double grade;
//    student(): id(0), grade(0) {}
//    student(int id, double grade): id(id), grade(grade) {}
//
//};
//
//
//
//
//
//
//
//void openInputFile(ifstream& inFile)
//{
//    string fileName;
//    cout << "please enter your file name: ";
//    cin >> fileName;
//    inFile.open(fileName);
//    while(!inFile)
//    {
//        cout << "can not open your file";
//        cout << "please enter your file name: ";
//        cin >> fileName;
//        inFile.clear();
//        inFile.open(fileName);
//    }
//
//
//
//
//}
//
//
//void sortById(vector<student>& studentVec)
//{
//    student temp;
//    for(int i = 1; i < studentVec.size(); i++)
//    {
//        temp = studentVec[i];
//        int j;
//        for(j = i; i > 0 && studentVec[j - 1].id > temp.id; j--)
//        {
//            studentVec[j] = studentVec[j - 1];
//        }
//        studentVec[j] = temp;
//    }
//}
//
//
//void sortByGrade(vector<student>& studentVec)
//{
//    student temp;
//    for(int i = 0; i < studentVec.size(); i++)
//    {
//        temp = studentVec[i];
//        int j;
//        for(j = i; j > 0 && studentVec[j - 1].grade > temp.grade; j--)
//        {
//            studentVec[j] = studentVec[j - 1];
//        }
//        studentVec[j] = temp;
//    }
//}
//
//
//
//class Vehicle
//{
//    double tollTotal;
//
//public:
//    Vehicle(): tollTotal(0) {}
//    virtual void incurToll() = 0;
//    void fee(double amount)
//    {
//        tollTotal += amount;
//    }
//    virtual double getTollTotal() const
//    {
//        return tollTotal;
//    }
//};
//
//class Car:public Vehicle
//{
//public:
//    void incurToll() override
//    {
//        fee(5.0);
//    }
//};
//
//
//class Truck:public Vehicle
//{
//
//public:
//    void incurToll() override
//    {
//        fee(25);
//    }
//
//};
//
//
//
//
//class TollBooth
//{
//    double total;
//
//public:
//    TollBooth(): total(0) {}
//    const double getTotal() const {return total;}
//
//    void processToll(Vehicle* vehicle)
//    {
//        vehicle->incurToll();
//        total += vehicle->getTollTotal();
//    };
//
//};
//
//
//
//void sortName(vector<string>& student)
//{
//    //sort student name in alphabetical order
//}
//
//
//
//
//class Coffee
//{
//    int size;
//    bool cream = false;
//    bool sugar = false;
//    double totalCost;
//
//public:
//    Coffee(): size(0), totalCost(0) {}
//    Coffee(int size): size(size), totalCost(0) {}
//
//    virtual void addMilk() = 0;
//    virtual void addSurgar() = 0;
//    void cost(double amount) {totalCost += amount;}
//    void setCream() {cream = true;}
//    void setSugar() {sugar = true;}
//    const int getSize() {return size;}
//    double getTotalCost() const {return totalCost;}
//};
//
//class HotCoffee: public Coffee
//{
//    double temperature = 195.5;
//
//public:
//    HotCoffee() {}
//    HotCoffee(int size, int temperature):
//    Coffee(size), temperature(temperature) {}
//    void addMilk() override
//    {
//        setCream();
//        Coffee::cost(0.25);
//    }
//    void addSurgar() override
//    {
//        setSugar();
//        Coffee::cost(0.15);
//    }
//    double cost()
//    {
//        //base cost
//        Coffee::cost(2.5);
//
//        if(temperature > 210)
//            Coffee::cost(0.25);
//        if(getSize() > 16)
//            Coffee::cost(1);
//
//        return getTotalCost();
//    }
//
//
//
//};
//
//class IcedCoffee: public Coffee
//{
//    int ice = 5;
//
//
//public:
//    IcedCoffee() {}
//    IcedCoffee(int size, int ice):Coffee(size), ice(ice) {}
//    void addMilk() override
//    {
//        setCream();
//        Coffee::cost(0.5);
//    }
//    void addSurgar() override
//    {
//        setSugar();
//        Coffee::cost(0.25);
//    }
//    double cost()
//    {
//        Coffee::cost(3);
//        if(ice > 5)
//            Coffee::cost(0.5);
//        if(getSize() > 32)
//            Coffee::cost(1);
//
//        return getTotalCost();
//    }
//
//
//
//};
//
//
//class order
//{
//
//    double TotalCost;
//
//
//public:
//    order() {}
//
//    void addCoffee(Coffee* coffee)
//    {
//        TotalCost += coffee->getTotalCost();
//    }
//    double cost() const {return TotalCost;}
//
//
//};
//
//
//struct LListNode
//{
//    int value;
//    LListNode *prev, *next;
//};
////
////struct BSTNode
////{
////    int value;
////    BSTNode *left, *right;
////};
////
////// Helper function to compare values in BST with LList
////bool compareBSTandList(BSTNode* root, LListNode* &listNode)
////{
////    if (root == nullptr) return true; // Base case
////
////    // Left
////    if (!compareBSTandList(root->left, listNode)) return false;
////
////    // Current
////    if (listNode == nullptr || root->value != listNode->value) return false;
////    listNode = listNode->next; // Move to the next list node
////
////    // Right
////    return compareBSTandList(root->right, listNode);
////}
////
////bool compare(LListNode* head, BSTNode* root)
////{
////    return compareBSTandList(root, head) && head == nullptr; // Check if list fully traversed
////}
//
//
//
//
//
//
////void insertSort(vector<int>& v)
////{
////    for(int i = 1; i < v.size(); i++)
////    {
////        int temp = v[i];
////        int j;
////        for(j = i; j > 0 && v[j-1] > temp; j--)
////        {
////            v[j] = v[j - 1];
////        }
////        v[j] = temp;
////    }
////}
//
//
////
////vector<double> getBusLineInfo(string busLine)
////{
////    vector<double> v = {14, 0, 5.2, 3.1, 7};
////    return v;
////}
////
////
////
//void fixList(LListNode* first)
//{
//
//    LListNode* curr = first;
//    LListNode* prev = first->prev;
//    int i = 1;
//    while(curr != nullptr && curr->next != nullptr)
//    {
//        if(i % 2)
//        {
//            curr->next = curr->prev;
//            curr->prev = prev;
//        }
//        curr = curr->next;
//        prev = curr;
//        i++;
//    }
//}
//
////
////LListNode* concatenation(LListNode* node, LListNode* Othernode)
////{
////
////
////}
////
//
//
//
//
//
//
//
//int main()
//{
//
//
//
//
//
//
//
//
//
//
//
//
////    vector<int> intVec;
////    intVec.push_back(5);
////    intVec.push_back(2);
////    intVec.push_back(4);
////    intVec.push_back(3);
////
////    for(int i: intVec)
////    {
////        cout << i << ' ';
////    }
////    cout << endl;
////    insertSort(intVec);
////
////    for(int i: intVec)
////    {
////        cout << i << ' ';
////    }
////
//
////    HotCoffee h1(32, 190);
////    h1.addSurgar();
////    HotCoffee h2(8, 215);
////    h2.addMilk();
////    IcedCoffee i1(39, 7);
////    i1.addMilk();
////    i1.addSurgar();
////
////    cout << h1.cost() << endl;
////    cout << h2.cost() << endl;
////    cout << i1.cost() << endl;
////
////
////    order newOrder;
////    newOrder.addCoffee(&h1);
////    newOrder.addCoffee(&h2);
////    newOrder.addCoffee(&i1);
////
////    cout << "Order total: " << newOrder.cost() << endl;
//
//
//
//
//
////    ifstream inFile;
////    ofstream outFile;
////    string temp;
////    vector<string> students;
////    inFile.open("student.txt");
////    while(getline(inFile, temp))
////    {
////        students.push_back(temp);
////    }
////    sortName(students);
////    for(string s: students)
////    {
////        cout << s << endl;
////    }
////
//
//
//
//
//
//
//
//
//
//
////    TollBooth tollBooth;
////
////    // Create some vehicles
////    Vehicle* car = new Car();
////    Vehicle* truck = new Truck();
////    tollBooth.processToll(car);
////    tollBooth.processToll(truck);
////    cout << tollBooth.getTotal() << endl;
//
//
//
//
//
//
//
////    student s1 = student(111, 99);
////    student s2 = student(101, 90);
////    student s3 = student(105, 10);
////    vector<student> v;
////    v.push_back(s1);
////    v.push_back(s2);
////    v.push_back(s3);
////
////
////    sortByGrade(v);
////
////    for(student s: v)
////    {
////        cout << s.grade << endl;
////    }
//
////    ifstream inFile;
////    ofstream outFile;
////    student temp;
////    vector<student> studentVec;
////
////    openInputFile(inFile);
////    while(inFile >> temp.id)
////    {
////        inFile.ignore(9999, ' ');
////        inFile >> temp.grade;
////        studentVec.push_back(temp);
////    }
////
////    sortById(studentVec);
////    for(student s: studentVec)
////    {
////        cout << s.id << endl;
////    }
////
//
//
//
//
//
//
////    Thing* ptr = new Thing();
////    ptr->member();
//
////    int *first = new int(0);
////    *first = 100;
////    cout << *first << endl;
////    delete first;
////
//
//
//
//
//
//
//
//
////    TreeNode* root = new TreeNode(1);
////    root->left = new TreeNode(2);
////    root->right = new TreeNode(3);
////    root->left->left = new TreeNode(4);
////    root->left->right = new TreeNode(5);
////
////
////    levelOrder(root);
////    cout << endl;
////    preOrder(root);
////    cout << endl;
////    postOrder(root);
////    cout << endl;
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////    MinStack minstk;
////
////    minstk.push(-2);
////    minstk.push(0);
////    minstk.push(-3);
//
//
//
////    ListNode* head = new ListNode(10);
////    head->next = new ListNode(20);
////    head->next->next = new ListNode(30);
////    head->next->next->next = new ListNode(40);
////    head->next->next->next->next = new ListNode(50);
////
////    ListNode* temp = head;
////    while(temp != nullptr)
////    {
////        cout << temp->val << endl;
////        temp = temp->next;
////    }
////
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////    A a = A(1,2);
////    A b = a;
////    func(&a);
//
//
//
//
////    Base obj1 = Derived();
////    Base obj2 = Derived();
////    Base obj3 = Base();
////    obj1.f();
////    obj2.f();
////    obj3.f();
//
//
//
//
//
//
////    A a_obj = {1, 2};
////    cout << "A: " << a_obj.member_b << " , " << a_obj.member_c << endl;
////    Date date = {12, 21, 22};
////    cout << date.month << ", " << date.day << ", " << date.year << endl;
////
////    ShoeType shoe {'H', 9.99};
////    ShoeType new_shoe = discount(shoe);
////
////    cout << new_shoe.style << ", " << new_shoe.price << endl;
////
////    StockRecord record;
////    record.arrival_date.year = 2006;
//    //the difference between dot operator. and scope resolution::
//    //whenever we have a object of a class, the member month may be accessed with the dot operator.
//    //When we give the definition of a member function, the scope resolution operator is used to tell the compiler that this function is the one declared in the class whose name is given before the scope resolution operator.
////    Automobile hyundai, jaguar;
//    //Question: why we do not just make everything public: and save difficulty in access.
//    // private allows to maintain safty and level of abstration, restrict unintended changes in private variable, preveting inadvertent corrpution of the class date
//    //the difference between firend function and a member function. both of them can access the any member of the class
//    //however, member function is accessed by object name + dot operator, firend function is accessed by function name
////    int x;
////    cin >> x;
////    cout << x << endl;
////    return 0;
//
////    Score game[10];
////    int i;
////    Money amount[5];
////    cout << "Enter 5 amounts of money:\n";
////    for (i = 0; i< 5; i++)
////    {
////        cin >> amount[i];
////    }
////
////    for(i = 0; i < 5; i++)
////    {
////        amount[i] = amount[i] + amount[i];
////    }
////
////    for(i = 0; i < 5; i++)
////    {
////        cout << amount[i] << '\t';
////    }
////
////    A b_obj = B(1, 2, 3);
////    b_obj.print();
//
////
////    vector<int> v = {3, 1, 5, 2};
////    mergeSort(v);
////    printVec(v);
//
//
//
//
//
//}
//
