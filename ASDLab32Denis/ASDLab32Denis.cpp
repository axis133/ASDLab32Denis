#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
   string text = "there are many variations of passages of lorem ipsum available but the majority have suffered alteration in some form by injected humour or randomised words which do not look even slightly believable if you are going to use a passage of lorem ipsum you need to be sure there is not anything embarrassing hidden in the middle of text all the lorem ipsum generators on the internet tend to repeat predefined chunks as necessary.";
   map<char, vector<int>> positions;

   for (int i = 0; i < text.size(); ++i) {
       positions[text[i]].push_back(i);
   }

   cout << "First appearances:" << endl;
   for (auto &pair : positions) {
       cout << pair.first << ": " << pair.second[0] << endl;
   }

   cout << "Letters appearing at least twice:" << endl;
   for (auto &pair : positions) {
       if (pair.second.size() > 1) {
           cout << pair.first << endl;
       }
   }

   cout << "Letters appearing exactly once:" << endl;
   for (auto &pair : positions) {
       if (pair.second.size() == 1) {
           cout << pair.first << endl;
       }
   }

   return 0;
}