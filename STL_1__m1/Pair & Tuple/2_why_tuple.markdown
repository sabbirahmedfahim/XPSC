In a **pair**, we can hold a **maximum of two values**. While it's possible to include more than two values in a pair, this can lead to unnecessary complexity. Instead, we can effortlessly use a tuple to address this issue.

### Remember Classes and Structures?
When creating **user-defined data types**, we can now utilize tuples for a more straightforward approach. Let's take a quick recap of how we defined our user-defined data type, also known as a **class**:

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int id;
    float marks;
};

int main() {
    int n; 
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].id >> arr[i].marks;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].id << " " << arr[i].marks << endl;
    }

    return 0;
}
```

### Why Tuple?
Using tuple, we can store more than two values at a same time like a class/struct (user define data type) efforlessly just writing-
```cpp
tuple <string, int, string, float> t; // name, roll, subject, marks
```

