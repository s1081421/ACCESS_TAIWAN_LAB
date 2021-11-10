#include<iostream>
#include<vector>
#include<string>
using namespace std;

class XOR {

public:
    int FindXOR(vector<int>& nums) {
        int ans = nums[0];
        for (size_t i = 1; i < nums.size(); ++i)
            ans ^= nums[i];
        return ans;
    }
};
int main() {
    string text;
    while (cin >> text) {
        text.erase(0, 1);

        string delimiter = ",";
        vector<int> num{};

        size_t pos;
        while ((pos = text.find(delimiter)) != string::npos) {
            num.push_back(stoi(text.substr(0, pos)));
            text.erase(0, pos + delimiter.length());
        }
        num.push_back(stoi(text.substr(0, text.find("]"))));

        XOR t;
        cout<<t.FindXOR(num)<<endl;
        
    }


}
