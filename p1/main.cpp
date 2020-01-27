/*
Good morning! Here's your coding interview problem for today.
This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
Bonus: Can you do this in one pass?
*/

// importa bibliotecas padroes
#include <bits/stdc++.h>
// define std
using namespace std;
// leitura rapida de arquivos
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

// _ necessario para leitura rapida dos arquvos
int main(){ _
	int n; cin >>  n;
	while( n > 0)
	{
		int k; cin >> k;
		unordered_map<int, bool> map;
		bool found = false;
		for(int i = 0; i < n; i++)
		{
			int a; cin >>  a;
			if(map.find(a) == map.end())
				map.insert(make_pair<int,bool>(k-a, false));			
			else 
				found = true;
		}
		if(found)
			cout << "True" << endl;
		else
			cout << "False" << endl;		
		cin >>  n;
	}
  return 0;
}
