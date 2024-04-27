#include<iostream>
#include<string>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

void printstudent1(student s) {
    s.age=23;
    cout << s.name << "subfunction" << s.age << " " << s.score << endl;
}
void printstudent2(student *p) {
    p->age=23;
    cout << p->name << " address" << p->age << " " << p->score << endl;
}

int main() {
    student s;
    s.name="xiaofeng";
    s.age=25;
    s.score=100;
    
    printstudent1(s);
    cout<<s.age<<"main function"<<endl;
    cin.get();
    return 0;
}