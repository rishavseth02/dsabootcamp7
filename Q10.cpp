//Q10.  https://www.hackerrank.com/challenges/camelcase/problem
#include <bits/stdc++.h>
using namespace std;

int camelcase(string s) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
