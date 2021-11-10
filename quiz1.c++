#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
    string text;
    while (cin >> text) {
        text.erase(0,1);

        string delimiter = ",";
        vector<int> num{};

        size_t pos;
        while ((pos = text.find(delimiter)) != string::npos) {
            num.push_back(stoi(text.substr(0, pos)));
            text.erase(0, pos + delimiter.length());
        }
        num.push_back(stoi(text.substr(0, text.find("]"))));
        
        int ans;
        for (int i = 0; i < num.size(); i++) {  
            int time = 0;
            for (int j = 0; j < num.size(); j++) {
                if (num[i] == num[j])time++;
            }
            if (time >= num.size() / 2)ans = num[i];
        }
        cout << ans << endl;

    }
}
