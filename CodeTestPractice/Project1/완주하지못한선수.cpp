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
//	unordered_map<string, int> d; //선수이름과, 명수를 저장하는 언오더드맵 선언
//
//	for (auto& i : participant) //참여한 선수의 이름을 차례대로 d에 입력
//	{
//		d[i]++; 
//	} 
//
//	for (auto& i : completion) //완주한 선수이름을 참여한 선수리스트에서 지워나감
//	{
//		d[i]--; //여기서 i는 pair형이고 --이면 string-- int -- 이다
//	} 
//
//	for (auto& i : d) 
//	//선수리스트를 돌면서 완주하지 못한선수는 벨류값이 1이기 때문에 탐색해본다
//	{
//		if (i.second > 0) //i.second(value)가 0보다 클경우 완주하지못했기에
//		{
//			answer = i.first; //i.first(key)를 대입하면됨 
//			break;
//		}
//	}
//
//	return answer;
//}

// 3개의 루프로 이루어진 코드 
// 문제의 크기에 비례하는 시간복잡도이다.(정렬을 하지않는 구조이기에 가능)

