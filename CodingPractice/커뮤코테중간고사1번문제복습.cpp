//#include <vector>
//#include <string>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//vector<string> solution(vector<vector<string>> booked, vector<vector<string>> unbooked);
//
//int main()
//{
//    vector <vector<string>>booked = { "09:10","lee" };
//    vector <vector<string>>unbooked = { {"09:00","kim"} , {"09:05","bae"} };
//
//    solution(booked, unbooked);
//}
//
//vector<string> solution(vector<vector<string>> booked, vector<vector<string>> unbooked)
//{
//    vector <pair<int, string>> book; //예약한사람
//    vector <pair<int, string>> unbook; //예약안한사람
//    vector <string> answer;
//
//    for (int i = 0; i < booked.size(); i++)
//    {
//        int hour = atoi(booked[i][0].substr(0, 2).c_str());
//        int min = atoi(booked[i][0].substr(3, 2).c_str());
//
//        int time = hour * 100 + min;
//        book.push_back(make_pair(time, booked[i][1]));
//    }
//
//    for (int i = 0; i < unbooked.size(); i++)
//    {
//        int hour = atoi(unbooked[i][0].substr(0, 2).c_str());
//        int min = atoi(unbooked[i][0].substr(3, 2).c_str());
//
//        int time = hour * 100 + min;
//        unbook.push_back(make_pair(time, unbooked[i][1]));
//    }
//
//    sort(book.begin(), book.end());
//    sort(unbook.begin(), unbook.end());
//
//    int time = (book.front().first <= unbook.front().first) ? book.front().first : unbook.front().first;
//    
//    int idx1 = 0;
//    int idx2 = 0;
//
//    while (answer.size() != book.size() + unbook.size())
//    {
//        if (idx1 < book.size() && book[idx1].first <= time)
//        {
//            answer.push_back(book[idx1].second);
//            idx1++;
//            time += 10;
//
//            if (time % 100 > 60)
//                time = (time / 100 + 1) * 100 + time % 100 % 60;
//        }
//        else if (idx2 < unbook.size() && unbook[idx2].first <= time)
//        {
//            answer.push_back(unbook[idx2].second);
//            idx2++;
//            
//            time += 10;
//
//            if (time % 100 > 60)
//                time = (time / 100 + 1) * 100 + time % 100 % 60;
//        }
//        else
//        {
//            if (idx1 < book.size() && idx2 < unbook.size())
//            {
//                time = (book[idx1].first <= unbook[idx2].first) ? book[idx1].first : unbook[idx2].first;
//            }
//            else if (idx1 >= book.size())
//            {
//                time = unbook[idx2].first;
//            }
//            else if (idx2 >= unbook.size())
//            {
//                time = book[idx1].first;
//            }
//        }
//    }
//}