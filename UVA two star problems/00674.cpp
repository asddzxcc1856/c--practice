#include <iostream>
using namespace std;

int main ()
{
	long long int dp[8000] = {};//�n������ 
	dp[0] = 1;
	int w[5] = {1,5,10,25,50}; //���� 
	for(int i = 0 ; i < 5 ; i++)
	{
		for (int j = w[i] ; j < 8000 ; j++)
		{
			dp[j] += dp[j - w[i]];//j �b�Ҽ{ i �ع������p�U���զX��k�� = 
								  //j �b�Ҽ{ i - 1 �ع������p�U���զX��k�� +
								  //j - w[i] �b�Ҽ{ i �ع������p�U���զX��k�� 
		}
	}
	int n;
	while(cin >> n)
	{
		cout << dp[n] << "\n";
	}
}
