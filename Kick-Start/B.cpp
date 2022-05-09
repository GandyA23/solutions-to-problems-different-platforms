#include <iostream>
#include <string>
#include <regex>

using namespace std;

string GetRuler(const string& kingdom) {
    // TODO: implement this method to determine the ruler name, given the kingdom.
    string last = "";
    last += kingdom[kingdom.size()-1];

    if (last == "y" || last == "Y") return "nobody";
    if (regex_match(last, regex("[AEIOUaeiou]+"))) return "Alice";
    return "Bob";
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
