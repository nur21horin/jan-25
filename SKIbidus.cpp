#include <iostream>
#include <string>
using namespace std;

// Function to convert singular noun to plural form
string singular_to_plural(const string& singular_noun) {
    return singular_noun.substr(0, singular_noun.size() - 2) + 'i';
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string singular_noun;
        cin >> singular_noun;
        string plural_noun = singular_to_plural(singular_noun);
        cout << plural_noun << endl;
    }
    
    return 0;
}
