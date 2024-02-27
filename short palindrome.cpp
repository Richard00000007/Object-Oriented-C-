#include<iostream>>
using namespace std;

string shortestPalindrome(string s) {
        
    unsigned long long p = 31, h = 0, rh = 0, d = 1, maxLen = 0;
    int N = s.length();
    
    for (int i = 0; i < N; i++) {
        h = (h * p) + (s[i] - 'a' + 1);
        rh += (s[i] - 'a' + 1) * d; 
        
        cout << "hash : " << h << "|rHash : " << rh << "\n";
        
        d *= p;
        
        if (h == rh) {
            maxLen = i + 1;
        }
    }
    
    return string(rbegin(s), rbegin(s) + s.size() - maxLen) + s;
    
}

int main() 
{
    string s = "abcd";
    string ans = shortestPalindrome(s);
    cout << ans << "\n";
    
    cout << "----------" << "\n";
    s = "baaabaa";
    ans = shortestPalindrome(s);
    cout << ans << "\n";
}
