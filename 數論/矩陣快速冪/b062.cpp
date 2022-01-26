#include <iostream>
#include <cstring>
using namespace std;

struct mat{
	long long int a[32][32];
	
	mat()
	{
		memset(a,0,sizeof(a));
	}
	
	mat operator * (const mat &b)const{
		mat ret;
		for(int i = 0 ; i < 32 ; i++)
		{
			for (int j = 0 ; j < 32 ; j++)
			{
				for (int k = 0 ; k < 32 ; k++)
				{
					ret.a[i][j] = (ret.a[i][j] + a[i][k] * b.a[k][j]);
				}
			}
		}
		return ret;
	}
};


int main()
{
	int n;
	while(cin >> n)
	{
		string str;
		mat ma;//�T�w�� A �x�} 
		for(int i = 0 ; i < n ; i++)
		{
			cin >> str;
			for (int j = 0 ; j < str.length() ; j++)
			{
				ma.a[i][j] = str[j] - '0';	
			}
		}
		int x,y,m;
		cin >> x >> y >> m;
		mat mt;//f�x�} 
		mt.a[x - 1][0] = 1;//�� x-1�C �� 0 �� 
		int ans = 0;
		for(int i = 0 ; i < m ; i++)
		{
			mt = ma * mt;//f+1 = A * f�x�}   // [xxx][x-1] * [x-1][0] => [y-1][xxx] * [xxx][0]
			ans += mt.a[y - 1][0];//�� y-1�C �� 0 �� 
		}
		cout << ans << "\n"; 
	}
}
