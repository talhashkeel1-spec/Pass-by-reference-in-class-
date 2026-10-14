#include <iostream>
#include <string>
using namespace std;

    class student{
    public:
        string name;
        int rollnumber;
        student (string name,int rollnumber){
            this->name=name;
            this->rollnumber=rollnumber;
        }
        void changing(student &s){
            s.rollnumber=34;
            s.name="Ahmed";
        }


    };
int main()
{
    student s1("Talha",52);
    cout<<s1.name<<" "<<s1.rollnumber<<endl;
    s1.changing (s1);
   cout<<s1.name<<" "<<s1.rollnumber;
    return 0;
}