#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s1 = " programming ";
    string s2 = " gaming ";

    set<char> st;

    for (char ch : s1)
        st.insert(ch);

    cout << " common charectors:";
    for (char ch : s2)
    {
        if (st.count(ch))
        {
            cout << ch << " ";
            st.erase(ch);
        }
    }
    return 0;
}