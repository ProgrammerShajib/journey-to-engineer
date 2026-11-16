#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll, marks;
};

bool cmp(Student l , Student R){

    // if(l.marks > R.marks){
    //     return true;
    // }else if (l.marks < R.marks){
    //     return false;
    // }else {
    //     if(l.roll < R.roll){
    //         return true;

    //     }else {
    //         return false;
    //     }
    // }

    return l.marks == R.marks ? l.roll < R.roll : l.marks > R.marks;
}
int main()
{

    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i].name >> a[i].marks >> a[i].roll;
    }

    Student mn;

    sort(a, a+n, cmp);

    for (int i = 0; i < n;i++){
        cout << a[i].name << " " << a[i].marks << " " << a[i].roll  << endl;
    }

}