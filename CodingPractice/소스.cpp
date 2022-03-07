//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int>progresses, vector<int> speeds);
//
//int main()
//{
//	vector<int>progress{ 93, 30, 55 };
//	vector<int>speed{ 1, 30, 5 };
//
//	solution(progress, speed);
//
//	
//}
//
//vector<int> solution(vector<int>progresses, vector<int> speeds)
//{
//	vector<int> answer;
//	queue<int> p; 
//
//	vector<int> dayarry;
//	int day = 1;
//
//	
//
//
//	for (const auto& n : progresses)
//	{
//		p.push(progresses[n]);
//	}
//
//	while (!p.back())
//	{
//		if (p.front() != 100)
//		{
//			p.front() += speeds.front();
//			day++;
//			
//		}
//		if (p.front() == 100)
//		{
//			dayarry.push_back(day);
//			p.pop();
//
//			day = 1;
//		}
//	}
//
//	for (int i = 0; i < dayarry.size(); i++)
//	{
//		int a = 1; // 갯수를 저장할 변수
//
//		while (dayarry[i] <= dayarry[i + a])
//		{
//			if (dayarry[i] < dayarry[i + 1])
//			{
//				answer.push_back(1);
//				break;
//			}
//
//			++a;
//			answer.push_back(a);
//
//		}
//
//		
//	}
//
//	return answer;
//}