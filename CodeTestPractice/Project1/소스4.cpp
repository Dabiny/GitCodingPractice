//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//vector<string> solution(vector<vector<string>> booked, vector<vector<string>> unbooked)
//{
//    unordered_map <string, string> book; //�����ѻ��
//    unordered_map <string, string> unbook; //������ѻ��
//
//    vector<string> answer;
//
//    int count = 0; //��ü �����
//
//    for (int i = 0; i < booked.size(); i++)
//    {
//        for (int j = 0; j < booked[i].size(); j++)
//        {
//            string name = booked[i][j];
//            book[booked[i]] = name;
//            count++;
//        }
//    } //�����ѻ�� ����
//
//    for (int i = 0; i < unbooked.size(); i++)
//    {
//        for (int j = 0; j < unbooked[i].size(); j++)
//        {
//            string name = unbooked[i][j];
//            unbook[unbooked[i]] = name;
//            count++;
//        }
//    }//����x ��� ����
//
//    //2���� ���͸� �ʿ� ��� �����ؾ����� �𸣰ھ�� ..�� 
//
//    for (int i = 0; i < count; i++)
//    {
//
//        for (const auto& i : book)
//        {
//            for (const auto& j : unbook)
//            {
//                if (i.first < j.first) //book�����unbook����� Ű��(�ð���Ʈ��)�� ������
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