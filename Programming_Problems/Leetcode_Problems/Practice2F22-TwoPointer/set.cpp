#include<iostream>
#include<set>

using namespace std;
 
/*
 * In a set, all values are unique. 
 * 
 * Values => 1, 5, 10, 5, 15, 15
 * Set = [1, 5, 10, 15]
 */

int main(int argc, char *argv[])
{
    set<int> mySet;
    
    mySet.insert(12);
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(20);
    mySet.insert(12);

    int n = mySet.size();

    // for (auto item : mySet)
    // {
    //     cout << item << endl;
    // }

    int findVal = 5; 

    if (mySet.find(findVal) == mySet.end())
    {
        cout << findVal << " does not exist" << endl; 
    }
    else
    {
        cout << findVal << " does exist" << endl;
    }

    return 0;
}