#include <iostream>
#include <string>
using namespace std;
// https://cryptosalamander.tistory.com/11
int main() {
  string s;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  cin >> s;
  for(int i = 0; i < alphabet.length(); i++){
    cout << (int)s.find(alphabet[i]) << " ";
  }
}