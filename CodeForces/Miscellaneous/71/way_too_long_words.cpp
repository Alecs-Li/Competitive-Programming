#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  string s;
  for(int a=0; a<n; a++){
    cin >> s;
    if(s.length() > 10){
      cout << s[0] << s.length()-2 << s[s.length()-1] << "\n";
    } else {
      cout << s << "\n";
    }
  }
  
}
