//#include<string>
//#include<vector>
//#include<unordered_map>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion);
//
//int main()
//{
//
//}
//
//string solution(vector<string> participant, vector<string> completion)
//{
//	string answer = "";
//	unordered_map<string, int> d; //�����̸���, ����� �����ϴ� �������� ����
//
//	for (auto& i : participant) //������ ������ �̸��� ���ʴ�� d�� �Է�
//	{
//		d[i]++; 
//	} 
//
//	for (auto& i : completion) //������ �����̸��� ������ ��������Ʈ���� ��������
//	{
//		d[i]--; //���⼭ i�� pair���̰� --�̸� string-- int -- �̴�
//	} 
//
//	for (auto& i : d) 
//	//��������Ʈ�� ���鼭 �������� ���Ѽ����� �������� 1�̱� ������ Ž���غ���
//	{
//		if (i.second > 0) //i.second(value)�� 0���� Ŭ��� �����������߱⿡
//		{
//			answer = i.first; //i.first(key)�� �����ϸ�� 
//			break;
//		}
//	}
//
//	return answer;
//}

// 3���� ������ �̷���� �ڵ� 
// ������ ũ�⿡ ����ϴ� �ð����⵵�̴�.(������ �����ʴ� �����̱⿡ ����)

