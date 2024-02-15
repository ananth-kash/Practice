#include <vector>
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> result;
    static int count =1;
    if (count>x)
    return result;
    result.push_back(count);
    count++;
    vector<int>nextnos=printNos(x);
    result.insert(result.end(),nextnos.begin(),nextnos.end());
    

}