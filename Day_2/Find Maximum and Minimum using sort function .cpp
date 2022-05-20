/* Approch 1
Using sort function
Time Complexity: O(nlogn)
----------------------------------
*/
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
     sort(a,a+n);
     long long max=a[n-1];
     long long min=a[0];
     
    return make_pair(min,max);
  
}