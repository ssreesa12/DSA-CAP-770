#include <iostream>
#include <string>
using namespace std;

int linearSearchRecursive( string str, char target, int index = 0) {
   
    if (index >= str.length())
        return -1;
    
   
    if (str[index] == target)
        return index;
    
    
    return linearSearchRecursive(str, target, index + 1);
}

int main() {
    string mainString = "example string for searching";
    char searchItem = 'e';
    
    int result = linearSearchRecursive(mainString, searchItem);
    if (result != -1)
        cout << "Item '" << searchItem << "' found at index " << result << "." << endl;
    else
        cout << "Item '" << searchItem << "' not found in the string." << endl;
    
    return 0;
}
