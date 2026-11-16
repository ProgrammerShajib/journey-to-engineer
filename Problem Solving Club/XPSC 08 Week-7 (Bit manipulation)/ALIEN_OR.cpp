#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        std::vector<string> a(n);
        for (auto &i : a)
            cin >> i;

        string target(k, '0');

        string ans = "YES";
        for (int i = 0; i < k; i++)
        {
            target[i] = '1';
            bool found = 0;
            for (auto c : a)
            {
                if (c == target)
                {
                    found = 1;
                    break;
                }
            }
            if(found == 0){
                ans = "NO";
                break;
            }
            target[i] = '0';
        }
        cout << ans << endl;
      
    }
}


// রুমমেট আবশ্যক [For Boys (Student/Job holder)]_
// চলতি মাস থেকে first floor-এ (২য় তলায়) ২ সিটের একটি রুম খালি হবে।
// 1.  Per Seat 2315৳
// 2. Other cost per member 800-1000৳
// 3. প্রতিমাসে 4/5 দিনের বাজারে, (for lunch & dinner) খরচ হবে around 2200-2500৳
// Overall থাকা & খাওয়া (lunch & dinner) মিলে 5000-5500৳ খরচ হবে।
// Note:
// Other cost_ (Gas, current, wifi, water, chef)
// Location: Muradpur Circle, Sholokbahar 
// (Asian Housing Society-র পাশেই,  Main road থেকে বাসায় আসতে ১/২ minute হাটতে হয়)
// Contact_
// 📱 01640-750398
// 📱 01892-813420
