    #include<bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int n;
    	cin >> n;
    	unique_ptr<int[]> arr = make_unique<int[]>(n);
    	for (int i = 0; i < n; i++) {
    		cin >> arr[i];
    	}
     
    	for (int i = 0, b = n - 1; i < round(n / 2); i++) {
    		if (arr[i] != arr[b]) {
    			cout << "NO" << endl;
    			return 0;
    		}
    		else b--;
    	}
    	cout << "YES" << endl;
    	return 0;
    }