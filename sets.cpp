#include <iostream>
#include <iterator>
#include <set>
#include <unordered_set> 
using namespace std;

int main()
{
    // Unordered Set
    unordered_set<int>us{5,3,1,3,5};
    
    us.insert(9);
    us.emplace(0);
    us.insert(11);

    for(auto elements: us)
    {
        cout << elements << " ";
    }
    cout << endl;    

    
    // Oredered Set
    set<int> myset{5,3,1,3,5};

    int x;
    cin >> x;

    myset.insert(x);

    for(auto elements: myset)
    {
        cout << elements << " ";    // {1,3,5,"cin"}
    }
    cout << endl;
    
    myset.erase(myset.begin());

    for(auto elements: myset)
    {
        cout << elements << " ";    // {3, 5, "cin"}
    }
    cout << endl;

    myset.emplace(9);

    for(auto elements: myset)
    {
        cout << elements << " ";    // {3,5,"cin", 9}
    }
    cout << endl;

    myset.erase(myset.begin(), myset.end());

    for(auto elements: myset)
    {
        cout << elements << " ";    // {3,5,"cin", 9}
    }       

    myset.insert(11);
    for(auto elements: myset)
    {
        cout << elements << " ";    // {3,5,"cin", 9}
    }     
    cout << endl;


    //Multiset 
    multiset<int> ms{4,4,4,4,4,1,1,2,2,3,3,3};

    for(auto elements: ms)
    {
        cout << elements << " ";
    }         
    cout << endl;

    cout << ms.size() << endl;

    cout << ms.count(4) << endl;
}
