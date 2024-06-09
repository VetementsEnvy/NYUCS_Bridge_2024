#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <list>

//
//using namespace::std;
//class Discount
//{
//    
//public:
//    Discount(){}
//    virtual double calculateFinalDiscount(double originalPrice) = 0;
//
//    
//    
//};
//
//class SingleValueDiscount: public Discount
//{
//    double discount;
//public:
//    SingleValueDiscount(double discount):
//    discount(discount) {}
//    double calculateFinalDiscount(double originalPrice) override
//    {
//        return discount;
//    }
//};
//
//
//class SinglePercentDiscount: public Discount
//{
//    double discountPercent;
//public:
//    SinglePercentDiscount(double discountPercent):
//    discountPercent(discountPercent) {}
//    double calculateFinalDiscount(double originalPrice) override
//    {
//        return originalPrice * discountPercent;
//    }
//    
//    
//    
//    
//};
//
//class MultiDiscount: public Discount
//{
//    double discount;
//    double discountPercent;
//public:
//    MultiDiscount(double discountPercent, double discount)
//    :discountPercent(discountPercent), discount(discount) {}
//    
//    double calculateFinalDiscount(double originalPrice) override
//    {
//        return discount + (originalPrice-discount) * discountPercent;
//    }
//    
//};
//
//
//class Order
//{
//    double cost;
//public:
//    Order(): cost(0){}
//    
//    void addItem(int originalPrice, Discount* discount)
//    {
//        if(discount == nullptr)
//        {
//            cost += originalPrice;
//        } else
//        {
//            double disVal = discount->calculateFinalDiscount(originalPrice);
//            cost += originalPrice - disVal;
//        }
//    }
//    double totalCost() const
//    {
//        return cost;
//    }
//
//};
//
//
//int main()
//{
//    Order firstOrder;
//    SingleValueDiscount svd10(10);
//    SinglePercentDiscount spd5(0.5);
//    MultiDiscount md(0.102, 5.5);
//    firstOrder.addItem(20, &svd10);
//    firstOrder.addItem(100, &spd5);
//    firstOrder.addItem(20, &md);
//    firstOrder.addItem(20, nullptr);
//    cout << firstOrder.totalCost() << endl;
//    
//}
//
//
//












//class Exams
//{
//
//
//
//public:
//    virtual int getResults() = 0;
//
//};
//
//class WrittenExam:public Exams
//{
//public:
//    WrittenExam(){}
//    int getResults() override
//    {
//        return 1;
//    }
//};
//
//
//
//
//
//class PracticalExam:public Exams
//{
//
//public:
//    PracticalExam(){}
//    int getResults() override
//    {
//        return 1;
//    }
//
//};
//
//








//using namespace std;
//
//
//struct Student
//{
//    int id;
//    string name;
//};
//
//void insertSortbyId(vector<Student>& v)
//{
//    for(int i = 1; i < v.size(); i++)
//    {
//        Student temp = v[i];
//        int j = 0;
//        for(j = i; j > 0 && v[j - 1].id > temp.id; j--)
//        {
//            v[j] = v[j - 1];
//        }
//        v[j] = temp;
//    }
//}
//
//
//
//
//int main()
//{
//    ifstream inFile;
//    ofstream outFile;
//    Student temp;
//    vector<Student> studentVec;
//    inFile.open("student.txt");
//    while(inFile >> temp.id)
//    {
//        inFile.ignore(9999, ' ');
//        inFile >> temp.name;
//        studentVec.push_back(temp);
//    }
//
//    for(Student s: studentVec)
//    {
//        cout << "id: " << s.id << ": " << s.name << endl;
//    }
//
//    insertSortbyId(studentVec);
//    cout << endl;
//    for(Student s: studentVec)
//    {
//        cout << "id: " << s.id << ": " << s.name << endl;
//    }
//
//}
//













//using namespace std;
//
//class Person
//{
//public:
//    string name;
//    double amountPaid;
//    double amountOwed;
//    Person() : amountPaid(0.0), amountOwed(0.0){};
//    Person(string name, double amountPaid) :
//    name(name), amountPaid(amountPaid), amountOwed(0.0) {};
//    const double getAmountPaid() const {return amountPaid;};
//    void setAmountPaid(const double& amountPaid);
//    const double getAmountOwed() const {return amountOwed;};
//    void setAmountOwed(const double& amountOwned);
//    void calculateAmountOwed(const double averageAmount);
//    friend ostream& operator<<(ostream& out, const Person& P);
//};
//
//void Person::setAmountPaid(const double& amountPaid)
//{
//    this->amountPaid = amountPaid;
//}
//
//void Person::setAmountOwed(const double& amountOwned)
//{
//    this->amountOwed = amountOwned;
//}
//
//void Person::calculateAmountOwed(const double averageAmount)
//{
//    amountOwed = amountPaid - averageAmount;
//}
//
//
//
//ostream& operator<<(ostream& out, const Person& P)
//{
//    out << P.name << " paid" << " $" << P.amountPaid
//        << " and owned:$ " << P.amountOwed << endl;
//    return out;
//}
//
//
//
//
//
//template <class T>
//class node
//{
//public:
//    node(T val)
//    {
//        this->prev=this->next=nullptr;
//        this->val = val;
//    }
//    T val;
//    node<T>* prev;
//    node<T>* next;
//};
//
//template <class T>
//class list
//{
//public:
//    node<T>* head;
//    node<T>* tail;
//    int size;
//    list(node<T>* input): head(input), tail(input), size(1) {};
//    ~list()
//    {
//        while(head != nullptr)
//        {
//            node<T>* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//    void addend(node<T>* end)
//    {
//        this->tail->next = end;
//        end->prev = this->tail;
//        this->tail = end;
//        this->size++;
//    }
//    void addbeginning(node<T>* beginning)
//    {
//        this->head->prev = beginning;
//        beginning->next = this->head;
//        this->head = beginning;
//        this->size++;
//    }
//    void removeend()
//    {
//        if(this->size == 0)
//        {
//            cout << "Cannot remove from empty list" << endl;
//            return;
//        }
//        node<T>* oldtail = this->tail;
//        this->tail = this->tail->prev;
//        if(this->tail != nullptr)
//        {
//            this->tail->next = nullptr;
//        }
//        delete oldtail;
//        this->size--;
//    }
//    void removebeginning()
//    {
//        if(this->size == 0)
//        {
//            cout << "Cannot remove from empty list" << endl;
//            return;
//        }
//        node<T>* oldhead = this->head;
//        this->head = this->head->next;
//        if(this->head != nullptr)
//        {
//            this->head->prev = nullptr;
//        }
//        delete oldhead;
//        this->size--;
//    }
//    double calculateAverageAmount()
//    {
//        double averageAmount = 0.0;
//        if(size == 0) {return averageAmount;}
//        node<T>* start = this->head;
//        while(start != nullptr)
//        {
//            averageAmount += start->val.getAmountPaid();
//            start = start->next;
//        }
//        averageAmount = averageAmount/size;
//        return averageAmount;
//    }
//    void updateAmountOwned(double averageAmount)
//    {
//        node<T>* start = this->head;
//        while(start != nullptr)
//        {
//            start->val.calculateAmountOwed(averageAmount);
//            start = start->next;
//        }
//    }
//    void determinePaymentAmounts(ofstream& outFile)
//    {
//        vector<T*> owes, owed;
//        double averageAmount = calculateAverageAmount();
//        for(node<T>* curr = head; curr  != nullptr; curr = curr->next)
//        {
//            curr->val.calculateAmountOwed(averageAmount);
//            if(curr->val.getAmountOwed() < 0)
//            {
//                owes.push_back(&curr->val);
//
//            } else
//            {
//                if(curr->val.getAmountOwed() == 0)
//                {
//                    outFile << curr->val.name
//                            << ", you don't need to pay anything" << endl;
//
//                } else
//                {
//                    owed.push_back(&curr->val);
//                }
//            }
//        }
//        for(T*& payer: owes)
//        {
//            double amountToPay = -payer->getAmountOwed();
//            while(amountToPay > 0.01)
//            {
//                for(T*& receiver: owed)
//                {
//                    if (amountToPay < 0.01) {break;}
//
//                    if(receiver->getAmountOwed() > 0)
//                    {
//                        double payment = min(amountToPay, receiver->getAmountOwed());
//                        payer->setAmountPaid(payer->getAmountPaid() + payment);
//                        payer->setAmountOwed(payer->getAmountOwed() + payment);
//                        receiver->setAmountPaid(receiver->getAmountPaid() - payment);
//                        receiver->setAmountOwed(receiver->getAmountOwed() - payment);
//                        amountToPay -= payment;
//
//                        outFile << payer->name << ",  you give "
//                                << receiver->name << " $" << payment << endl;
//                    }
//                }
//            }
//        }
//
//        outFile << "In the end, you should all have spent around $"
//                << averageAmount << endl;
//    }
//    void determinePaymentAmounts(ostream& outFile)
//    {
//        vector<T*> owes, owed;
//        double averageAmount = calculateAverageAmount();
//        for(node<T>* curr = head; curr  != nullptr; curr = curr->next)
//        {
//            curr->val.calculateAmountOwed(averageAmount);
//            if(curr->val.getAmountOwed() < 0)
//            {
//                owes.push_back(&curr->val);
//
//            } else
//            {
//                if(curr->val.getAmountOwed() == 0)
//                {
//                    outFile << curr->val.name
//                            << ", you don't need to pay anything" << endl;
//
//                } else
//                {
//                    owed.push_back(&curr->val);
//                }
//            }
//        }
//        for(T*& payer: owes)
//        {
//            double amountToPay = -payer->getAmountOwed();
//            while(amountToPay > 0.01)
//            {
//                for(T*& receiver: owed)
//                {
//                    if (amountToPay < 0.01) {break;}
//
//                    if(receiver->getAmountOwed() > 0)
//                    {
//                        double payment = min(amountToPay, receiver->getAmountOwed());
//                        payer->setAmountPaid(payer->getAmountPaid() + payment);
//                        payer->setAmountOwed(payer->getAmountOwed() + payment);
//                        receiver->setAmountPaid(receiver->getAmountPaid() - payment);
//                        receiver->setAmountOwed(receiver->getAmountOwed() - payment);
//                        amountToPay -= payment;
//
//                        outFile << payer->name << ",  you give "
//                                << receiver->name << " $" << payment << endl;
//                    }
//                }
//            }
//        }
//
//        outFile << "In the end, you should all have spent around $"
//                << averageAmount << endl;
//    }
//
//
//    void print()
//    {
//        if(this->size ==0)
//        {
//            cout << "list is empty" << endl;
//            return;
//        }
//        node<T>* on = this->head;
//        while(on != nullptr)
//        {
//            cout << on->val;
//            on = on->next;
//        }
//        cout << endl;
//    }
//};
//
//
//string openInputFile(ifstream& inFile)
//{
//    string filename;
//    cout << "what is your filename?";
//    cin >> filename;
//    inFile.open(filename);
//    while(!inFile)
//    {
//        cout << "Can not open the file" << endl;
//        cout << "what is your filename?";
//        cin >> filename;
//        inFile.clear();
//        inFile.open(filename);
//    }
//    return filename;
//}
//
//
//
//int main()
//{
//    ifstream inputFile;
//    ofstream outputFile;
//    string filename = openInputFile(inputFile);
//    vector<Person> pArr;
//    Person temp;
//    while(inputFile >> temp.amountPaid)
//    {
//        inputFile.ignore(9999, ' ');
//        getline(inputFile, temp.name);
//        pArr.push_back(temp);
//    }
//    node<Person>* start = new node(pArr[0]);
//    list<Person>* personlist = new list<Person> (start);
//    for(int i = 1; i < pArr.size(); i++)
//    {
//        node<Person>* temp = new node(pArr[i]);
//        personlist->addend(temp);
//    }
//
//
//    personlist->updateAmountOwned(personlist->calculateAverageAmount());
//    outputFile.open("Out.txt");
//    outputFile << "Enter the file: " << filename << endl;
//    personlist->determinePaymentAmounts(outputFile);
//    personlist->determinePaymentAmounts(cout);
//
//
//    inputFile.close();
//    outputFile.close();
//}
//
//
//
