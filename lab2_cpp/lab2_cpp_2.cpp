#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int main()
{
	// Ñïðàøèâàåì íîìåð è çàïèñûâàåì â ïåðåìåííóþ n)
	string n;
	cout << "Enter SNILS number ";
	cin >> n;
	// Ïðîâåðÿåì ïåðâûå 9 öèôð íà âàëèäíîñòü
	int count = 0;
	bool valid_9 = true;
	for (int i = 1;i <= 8;i++) {
		if (n[i] == n[i - 1]) { count++; }
		else { count = 0; };
		if (count > 2) { valid_9 = false; break; };
	}
	// Ïðè âàëèäíîñòè ïåðâûõ 9 öèôð ñ÷èòàåì ïî íèì êîíòðîëüíóþ ñóììó è ñðàâíèâàåì åå ñ äàííîé 
	if (valid_9) {
		string c;
		int sum = 0;
		for (int i = 8; i >= 0; i--) {
			int n_i = stoi(string(1, n[i]));
			sum += ((9 - i) * n_i);
		}
		cout << sum << " total sum\n";
		sum = sum % 101;
		if (sum >= 100 && sum <= 101) {
			c = "00";
		}
		else {
			c = to_string(sum);
		}
		if (c == n.substr(9, 10)) {
			cout << "SNILS is valid";
		}
		else {
			cout << "SNILS is invalid";
		}
	}
	else {
		cout << "SNILS is invalid";
	}
}
