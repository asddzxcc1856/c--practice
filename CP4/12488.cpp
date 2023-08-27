#include <iostream> // cin cout
#include <vector> // vector<int> v
#include <cmath>  // abs(int n)
using namespace std; // std::cin std::cout

int main ()
{
	int n; // n ���v���� 
	while(cin >> n)
	{
		vector<int> v1(n),v2(n); // �ŧi n �j�p���}�C 
		// input
		for(int i = 0 ; i < n ; i++)
		{
			cin >> v1[i];
		}
		for(int i = 0 ; i < n ; i++)
		{
			cin >> v2[i];
		}
		// 1.���Ĥ@�Ӱ}�C��������(�_�I��m)�b�ĤG�Ӱ}�C����m(���I��m) => �s�b�Ĥ@�Ӱ}�C(�Τ���Ĥ@�Ӱ}�C�A�ҥH�i�H�л\�����) 
		// 2.bubble sort 
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < n ; j++)
			{
				if(v1[i] == v2[j]) // ����������m 
				{
					v1[i] = j;
					break; // �u�|�X�{�@�� 
				}
			}
		}
		int cnt = 0; //�p�⵪�שһݭn���D�� �W�V���� = bubble sort ���(���I��m������)�����ƧǪ��洫���� 
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < n - i - 1 ; j++)
			{
				if(v1[j] > v1[j + 1])
				{
					int tmp = v1[j + 1];
					v1[j + 1] = v1[j];
					v1[j] = tmp;
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}
