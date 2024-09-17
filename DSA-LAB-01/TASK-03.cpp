//#include <iostream>
//using namespace std;
//template <class T>
//class mypair
//{
//    T a, b;
//public:
//    mypair(T first, T second)
//    {
//        a = first;
//        b = second;
//
//    }
//    T getmax();
//    T getmin();
//};
//template <class T>
//T mypair<T>::getmax()
//{
//    T retval;
//    retval = a > b ? a : b;
//    return retval;
//}
//template <class T>
//T mypair<T>::getmin()
//{
//    T retval;
//    retval = a < b ? a : b;
//    return retval;
//}
//int main()
//{
//    mypair <int> myobject1(100, 75);
//    cout << "Maximum:" << myobject1.getmax();
//    cout << endl;
//    mypair <int> myobject2(45, 67);
//    cout << "Minimun:" << myobject2.getmin();
//    return 0;
//}