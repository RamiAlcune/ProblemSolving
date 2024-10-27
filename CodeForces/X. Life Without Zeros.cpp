    #include<bits/stdc++.h>
    using namespace std;
    int removeZeros(int num) {
    	string temp = to_string(num);
    	string res = "";
    	for (int i = 0; i < temp.length(); i++) {
    		if (temp[i] != '0') {
    			res += temp[i];
    		}
    	}
    	return stoi(res);
    }
     
    int main() {
    	int a, b;
    	cin >> a >> b;
    	int res = removeZeros(a) + removeZeros(b);
    	if (res == removeZeros(a + b)) cout << "YES" << endl;
    	else cout << "NO" << endl;
     
     
    }