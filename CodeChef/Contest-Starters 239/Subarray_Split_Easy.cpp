#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // দ্রুত ইনপুট-আউটপুটের জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector<int> best_array;

        //------------------------------------------------------------------------
        // শর্ত ১ এক্সিকিউশন: বিটমাস্ক দিয়ে সাবঅ্যারে বা দেয়াল তৈরি করা
        //------------------------------------------------------------------------
        // Nটি উপাদানের মাঝে মোট N-1 টি জায়গা আছে যেখানে দেয়াল তোলা যায়।
        // তাই আমরা 0 থেকে (2^(N-1) - 1) পর্যন্ত লুপ চালাবো।
        int total_partitions = 1 << (N - 1); 
        for (int mask = 0; mask < total_partitions; mask++) {
            
            // এই মাস্কের ওপর ভিত্তি করে অ্যারেটিকে সাবঅ্যারেতে রূপান্তর করছি
            vector<vector<int>> current_subarrays;
            vector<int> current_bucket;
            current_bucket.push_back(A[0]);

            for (int i = 0; i < N - 1; i++) {
                // যদি i-তম বিট 1 হয়, তার মানে আমরা এখানে একটা দেয়াল (Partition) তুলবো
                if ((mask >> i) & 1) {
                    current_subarrays.push_back(current_bucket);
                    current_bucket.clear();
                }
                current_bucket.push_back(A[i + 1]);
            }
            current_subarrays.push_back(current_bucket); // শেষ বালতি বা টুকরোটি যোগ করা

            int M = current_subarrays.size(); // মোট টুকরোর সংখ্যা M

            //------------------------------------------------------------------------
            // শর্ত ২ ও ৩: 0 থেকে M-1 পর্যন্ত উপহারের মানগুলোর পারমিউটেশন তৈরি
            //------------------------------------------------------------------------
            vector<int> X_values(M);
            for (int i = 0; i < M; i++) X_values[i] = i;

            // সব ইউনিক বণ্টনের কম্বিনেশন লুপের মাধ্যমে চেক করা
            do {
                vector<int> temp_array;

                // প্রতিটি সাবঅ্যারের উপাদানগুলোর ওপর গাণিতিক রূপান্তর চালানো
                for (int i = 0; i < M; i++) {
                    int assigned_x = X_values[i]; // এই সাবঅ্যারের জন্য বরাদ্দকৃত মান
                    for (int val : current_subarrays[i]) {
                        // শর্ত ৪: (A_i + x) % K সূত্র প্রয়োগ
                        int new_val = (val + assigned_x) % K;
                        temp_array.push_back(new_val);
                    }
                }

                // শর্ত ৫: ডিকশনারি অনুযায়ী সবচেয়ে ছোট (Lexicographically Smallest) চেক
                if (best_array.empty() || temp_array < best_array) {
                    best_array = temp_array; // সেরা অ্যারেটি আপডেট করা
                }

            } while (next_permutation(X_values.begin(), X_values.end()));
        }

        // চূড়ান্ত সেরা রেজাল্ট প্রিন্ট করা
        for (int i = 0; i < N; i++) {
            cout << best_array[i] << (i == N - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}