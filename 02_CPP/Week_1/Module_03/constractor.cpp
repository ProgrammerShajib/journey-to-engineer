#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 int roll;

 int cls;

 double gpa;

 Student(int r, int c, double g) // কন্সট্রাক্টর যা রোল, ক্লাস এবং জিপিএ প্যারামিটার হিসেবে নিচ্ছে। এখানে প্যারামিটারের মধ্যে ভেরিয়েবল এর নাম ক্লাস ভেরিয়েবল এর থেকে আলাদা রাখা হয়েছে। 

 {

 roll = r; // অবজেক্টের ভেলু এসাইন করে দেওয়া হচ্ছে।

 cls = c;

 gpa = g;

 }

};

int main()

{

 Student rahim(29, 9, 5.00); // অবজেক্ট ক্রিয়েট করা হলো এবং কন্সট্রাক্টর কল করে ভেলু পাস করে দেওয়া হলো।

 Student karim(45, 10, 4.33); // দ্বিতীয় অবজেক্ট ক্রিয়েট করা হলো এবং কন্সট্রাক্টর কল করে ভেলু পাস করে দেওয়া হলো।

 cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl; // প্রথম অবজেক্ট প্রিন্ট করা হয়েছে। 

 cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl; // দ্বিতীয় অবজেক্ট প্রিন্ট করা হয়েছে।

 return 0; 

}
