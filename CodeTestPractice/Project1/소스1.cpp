#include <string>
#include <vector>
#include<algorithm>
#include <set>
#include <unordered_set>
//
using namespace std;
//
//int solution(int n, vector<int> lost, vector<int> reserve)
//{
//    int a = 0; //���� �����ֵ�
//
//    //����
//    sort(reserve.begin(), reserve.end());
//    sort(lost.begin(), lost.end());
//
//    //Ž�� �� ����
//    for (vector<int>::iterator i = lost.begin(); i != lost.end(); i++)
//    {
//        for (vector<int>::iterator j = reserve.begin(); j != reserve.end(); j++)
//        {
//            if (i == j)
//            {
//                reserve.erase(j);
//                lost.erase(i);
//
//                reserve.resize(reserve.size() - 1);
//                lost.resize(reserve.size() - 1);
//                break;
//            }
//            else
//            {
//                continue;
//            }
//        }
//
//    }
//
//    int c = n - (int)lost.size(); //�Ҿ���������� ������
//
//    for (auto& i : lost)
//    {
//        for (auto& j : reserve)
//        {
//            if (i - j == -1 || i - j == 1)
//            {
//                a++; //i���� j���� ����
//                reserve[j++];
//                break;
//            }
//
//            else if (i - j == 0)
//            {
//                reserve[j++];
//            }
//
//        }
//    }
//
//    return a + c;
//
//}

/*
	- �׸��� ���� ���
		��� 1, ���2
*/

//int solution(int n, vector<int> lost, vector<int> reserve)
//{
//	int answer = 0;
//	vector<int> uniform(n + 2, 1); 
//	//��� 1���� �ϴ� ����������(���ϸ±���)
//	// +2�� [0]�հ� ������ �ڿ� 1�� ����ƺ�� �������� ������
//
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		uniform[reserve[i]] ++;
//		//������ ���� []���� reserve[i]�� ���Ҹ� ������
//		// ���� reserve[0]�� ���� 3�̸�
//		// ex ) uniform[3]++; -> 3��°���ҿ� ++���ִ� ..  
//
//	} //������ �־ 1���� �߰�
//
//	for (int i = 0; i < lost.size(); i++)
//	{
//		uniform[lost[i]]--;
//	} //���ϸ¾Ƽ� �������� �Ҿ���� 0��
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (uniform[i - 1] == 0 && uniform[i] == 2)
//		{
//			uniform[i - 1] = uniform[i] = 1;
//		}
//		else if (uniform[i + 1] == 0 && uniform[i] == 2)
//		{
//			uniform[i + 1] = uniform[i] = 1;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (uniform[i] > 0)
//		{
//			answer++;
//		}
//	}
//
//	return answer;
//}

//int solution(int n, vector<int> lost, vector<int> reserve)
//{
//	unordered_set<int> l(lost.begin(), lost.end());
//	set<int> res;
//
//	unordered_set<int> inter;
//
//	for (auto& x : reserve)
//		//���������¾ֵ��� Ž���ϸ鼭
//	{
//		if (l.find(x) == l.end())
//			//�Ҿ�����ֵ��߿� ���������¾ֵ鵵 �����̵��ֳ� ������
//		{
//			res.insert(x);
//			//���������� �� �����ϱ� res�� ����
//		}
//		else //�����ֵ� �Ҿ��������
//		{
//			inter.insert(x); //���Ϳ� ����
//		}
//	}
//
//	for (auto& x : inter)  //���ͼ��� ���鼭
//	{
//		//�Ҿ�����ֵ��� ����� ��¥�� �����ֵ��� ���� ���� �Ծ���ϴϱ� 
//		l.erase(x);
//	}
//
//	for (auto& x : res) // ���� ���� �����ֵ��� ���鼭
//	{
//		if (l.find(x - 1) != l.end())
//			//�Ҿ�����ֵ� ��ȣ�� x-1(���ڸ�)�� �Ҿ�����ֵ� ���ڸ��� �ƴϸ�
//			//l.fint(res(x) - 1) != l.end()
//		{
//			l.erase(x - 1);  //�����ټ� �����ϱ� �� ��ȣ�� �������� �Ҿ������Ͽ�
//		}
//		else if (l.find(x + 1) != l.end())
//		{
//			l.erase(x + 1);
//		}
//	}
//	
//	return n - l.size(); // ��ü �л������� ���� �ν�Ʈ �ֵ��� ���� ü���ð��� ������ �ִ� �ֵ���� ����
//}