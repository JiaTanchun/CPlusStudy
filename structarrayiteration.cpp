#include<iostream>
using namespace std;
struct Student {
    int name;
    int age;
    int score;
};

int main() {
    Student stuarray[3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        cout << stuarray[i].name << " " << stuarray[i].age << " " << stuarray[i].score << endl;
    }
};
