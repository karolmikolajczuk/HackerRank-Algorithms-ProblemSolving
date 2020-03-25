#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string str, string target, int moves) {
    int common = 0;
    for (int ind = 0; ind < min(str.length(), target.length()); ++ind) {
        if (str.at(ind) != target.at(ind)) break;
        else ++common;
    }

    // text1 + text2 - czesc wspolna = to co trzeba usunac + dodac > krokow to nie ma szans
    if ((int)(str.length() + target.length() - (2 * common)) > moves) return "No";

    // text1 + text2 - czesc wspolna = to co trzeba usunac + dodac 
    else if ((int)(str.length() + target.length() - (2 * common)) % 2 == (moves % 2)) return "Yes";

    else if ((int)(str.length() + target.length()) - moves <= 0) return "Yes";

    return "No";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
