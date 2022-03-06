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
//    int a = 0; //여벌 빌린애들
//
//    //정렬
//    sort(reserve.begin(), reserve.end());
//    sort(lost.begin(), lost.end());
//
//    //탐색 후 삭제
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
//    int c = n - (int)lost.size(); //잃어버리지않은 나머지
//
//    for (auto& i : lost)
//    {
//        for (auto& j : reserve)
//        {
//            if (i - j == -1 || i - j == 1)
//            {
//                a++; //i들이 j에게 빌림
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
	- 그리디 문제 답안
		방법 1, 방법2
*/

//int solution(int n, vector<int> lost, vector<int> reserve)
//{
//	int answer = 0;
//	vector<int> uniform(n + 2, 1); 
//	//모두 1개씩 일단 가지고있음(도둑맞기전)
//	// +2는 [0]앞과 마지막 뒤에 1을 허수아비로 세워놓는 전략임
//
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		uniform[reserve[i]] ++;
//		//유니폼 벡터 []값에 reserve[i]의 원소를 넣으면
//		// 만약 reserve[0]의 값이 3이면
//		// ex ) uniform[3]++; -> 3번째원소에 ++해주는 ..  
//
//	} //여벌이 있어서 1개더 추가
//
//	for (int i = 0; i < lost.size(); i++)
//	{
//		uniform[lost[i]]--;
//	} //도둑맞아서 유니폼을 잃어버림 0개
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
//		//여벌가져온애들을 탐색하면서
//	{
//		if (l.find(x) == l.end())
//			//잃어버린애들중에 여벌가져온애들도 포함이되있나 없으면
//		{
//			res.insert(x);
//			//여벌빌려줄 수 있으니까 res에 삽입
//		}
//		else //여벌애도 잃어버렸으면
//		{
//			inter.insert(x); //인터에 삽입
//		}
//	}
//
//	for (auto& x : inter)  //인터수를 돌면서
//	{
//		//잃어버린애들을 지우기 어짜피 여벌애들은 지옷 지가 입어야하니까 
//		l.erase(x);
//	}
//
//	for (auto& x : res) // 여벌 갖고 있은애들을 돌면서
//	{
//		if (l.find(x - 1) != l.end())
//			//잃어버린애들 번호가 x-1(앞자리)가 잃어버린애들 끝자리가 아니면
//			//l.fint(res(x) - 1) != l.end()
//		{
//			l.erase(x - 1);  //빌려줄수 있으니까 그 번호를 지워버림 잃어버린목록에
//		}
//		else if (l.find(x + 1) != l.end())
//		{
//			l.erase(x + 1);
//		}
//	}
//	
//	return n - l.size(); // 전체 학생수에서 남은 로스트 애들을 빼면 체육시간에 나갈수 있는 애들수가 나옴
//}