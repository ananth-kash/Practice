vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>result;
    static int count =x;
    if(count<1)
    return result;
    result.push_back(count);
    count--;
    vector<int>nextnos=printNos(x);
    result.insert(result.end(),nextnos.begin(),nextnos.end());

}