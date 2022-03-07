//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//vector<string> solution(vector<vector<string>> booked, vector<vector<string>> unbooked)
//{
//    unordered_map <string, string> book; //예약한사람
//    unordered_map <string, string> unbook; //예약안한사람
//
//    vector<string> answer;
//
//    int count = 0; //전체 예약수
//
//    for (int i = 0; i < booked.size(); i++)
//    {
//        for (int j = 0; j < booked[i].size(); j++)
//        {
//            string name = booked[i][j];
//            book[booked[i]] = name;
//            count++;
//        }
//    } //예약한사람 대입
//
//    for (int i = 0; i < unbooked.size(); i++)
//    {
//        for (int j = 0; j < unbooked[i].size(); j++)
//        {
//            string name = unbooked[i][j];
//            unbook[unbooked[i]] = name;
//            count++;
//        }
//    }//예약x 사람 대입
//
//    //2차원 백터를 맵에 어떻게 대입해야할지 모르겠어요 ..ㅜ 
//
//    for (int i = 0; i < count; i++)
//    {
//
//        for (const auto& i : book)
//        {
//            for (const auto& j : unbook)
//            {
//                if (i.first < j.first) //book사람과unbook사람중 키값(시간스트링)이 작으면
//                {
//                    answer.push_back(i.second);
//                }
//                else if (i.first == j.first)
//                {
//                    answer.push_back(i.second);
//                }
//                else
//                {
//                    answer.push_back(j.second);
//                }
//            }
//        }
//
//    }
//    return answer;
//}