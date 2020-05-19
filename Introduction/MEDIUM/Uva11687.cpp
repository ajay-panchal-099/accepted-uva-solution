#include <iostream>

using namespace std;

int main()
{
    string s;
    while(cin >> s && s != "END") {
        if(s == "0") cout << "2" << endl;
        else if(s == "1") cout << "1" << endl;
        else {
            int len = s.size();
            s = to_string(len);
            int cnt = 2;
            while(len != 1) {
                len = s.size();
                s = to_string(len);
                cnt++;
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
