#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int binary_search(int b[],int L,int R,int val) // (�n�j�M���}�C,����,�k��,�n�j�M����)
{
	if(L<=R)
	{
		int mid = (L + R) / 2; // ����X��������m 
		if(b[mid] == val) // �p�G (�۵�) �N�^�Ǧ�m 
			return mid; 
		else if (b[mid] > val) // �p�G (������m���� > �n�䪺��) �N�� �n�䪺�Ȧb�����Ȫ�����  
			return binary_search(b,L,mid - 1,val); //���ݭnmid => ��(��,��-1)
		else if (b[mid] < val) // �p�G (������m���� < �n�䪺��) �N�� �n�䪺�Ȧb�����Ȫ��k��  
			return binary_search(b,mid + 1,R,val); //���ݭnmid => ��(��+1,�k)
	}
}

int main ()
{
	int c[10] = {1,5,89,71,54,65,75,13,29,46}; //�ŧi�@�ӥ��ƧǪ��}�C 
	cout << "���ޭ�          0  1  2  3  4  5  6  7  8  9\n";
	cout << "�Ƨǫe�}�C c : ";
	for(int i = 0 ; i < 10 ; i++)
		cout << setw(2) << c[i] << " ";
	cout << "\n"; 
	
	sort(c,c+10); // �Ƨ�:�p��j 
	
	cout << "�Ƨǫ�}�C c : ";
	for(int i = 0 ; i < 10 ; i++)
		cout << setw(2) << c[i] << " ";
	cout << "\n"; 
	
	
	int loc = binary_search(c,0,9,71); // ��X 71 �b�Ƨǫ�}�C������m 

	cout << "71 �b�Ƨǫ� c �}�C��" << loc + 1 << "��m" << "\n"; // �^�Ǭ��}�C index �ҥH�n + 1 �~�O��m 

    return 0;
}

