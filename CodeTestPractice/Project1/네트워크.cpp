////#include <string>
////#include <vector>
////#include <iostream>
////#include <queue>
////
////using namespace std;
////
//int solution(int n, vector<vector<int>> computers)
//{
//	vector<bool> visited(n, false);
//	int check = 0; //��Ʈ��ũ ����
//
//	for (int i = 0; i < n; i++)
//	{
//		if (visited[i])
//			continue;
//
//		queue<int> q; //ť����
//		q.push(i); //ť�� i�� ����ֱ�
//
//		while (!q.empty())
//		{
//			int v = q.front();
//			q.pop();
//
//			if (visited[v])
//				continue;
//
//			visited[v] = true;
//
//			for (int j = 0; j < n; j++)
//			{
//				if (v != j && computers[v][j] == 1 && !visited[j])
//				{
//					q.push(j);
//				}
//			}
//		}
//
//		check++;
//	}
//
//	return check;
//}
//
//int main()
//{
//	cout << solution(3, { {1,1,0},{1,1,0},{0,0,1} }) << endl;
//	cout << solution(3, { {1,1,0},{1,1,1},{0,1,1} }) << endl;
//}

		//��Ʈ��ũ�� ��ǻ�� ��ȣ ���� ������ ��ȯ�� �� �ֵ��� ����� ���¸� �ǹ��մϴ�.
		//���� ���, ��ǻ�� A�� ��ǻ�� B�� ���������� ����Ǿ��ְ�, 
		//��ǻ�� B�� ��ǻ�� C�� ���������� ����Ǿ� ���� �� ��ǻ�� A�� ��ǻ�� C�� ���������� ����Ǿ� ������ ��ȯ�� �� �ֽ��ϴ�.
		//���� ��ǻ�� A, B, C�� ��� ���� ��Ʈ��ũ �� �ִٰ� �� �� �ֽ��ϴ�.

		//��ǻ���� ���� n, ���ῡ ���� ������ ��� 2���� �迭 computers�� �Ű������� �־��� ��, 
		//��Ʈ��ũ�� ������ return �ϵ��� solution �Լ��� �ۼ��Ͻÿ�.