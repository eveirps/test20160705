#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>
#include <string>
using namespace std;

template <typename T>
void uniqueSort(T& a) {
    vector<typename T::value_type> temp;
    temp.assign(a.cbegin(), a.cend());
    sort(temp.begin(), temp.end());
    auto end_unique = unique(temp.begin(), temp.end());
    a.assign(temp.begin(), end_unique);
    
}

template <typename T>
void printElements(const T& a) {
    for (auto e : a)
        cout << e << " ";
    cout << endl;
    cout << "test version2" << endl;
}
int main() {
    vector<int> v{ 0, 5, 10, 15, 6, 4, 3 };
    uniqueSort(v);
    printElements(v);
    list<double> l{ 5, 1.1, 2.2, 3.3 };
    uniqueSort(l);
    printElements(l);
    forward_list<string> f{ "yes", "this", "is", "it","no", "yes" };
    uniqueSort(f);
    printElements(f);

    return 0;
}