//#include <vector>
//#include <string>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//vector<string> solution(vector<vector<string>> booked, vector<vector<string>> unbooked);
//
//
//
//int main()
//{
//	vector <vector<string>>booked = {"09:10","lee"} ;
//    vector <vector<string>>unbooked = { {"09:00","kim"} , {"09:05","bae"} };
//
//    solution(booked, unbooked);
//    
//}
//
//vector<string> solution(vector<vector<string>> booked, vector<vector<string>> unbooked) {
//    vector<pair<int, string>> book;
//    vector<pair<int, string>> unbook;
//
//    vector<string> answer;
//
//    for (int i = 0; i < booked.size(); i++) {
//        int time = atoi(booked[i][0].substr(0, 2).c_str());
//        // int time = 문자열을 정수타입으로 변경(booked[i][0].substr(0,2).c_str()) 까지
//        // atoi는 char*형 char 배열을 인자로 받는다 char배열을 받기위해선 널값까지 고려해야 하는데
//        // c_str()(스트링개게를 널종료문자배열로 받는 함수에 전달할때 사용) 을 사용해서 전환 시켜주자. 
//
//        int minute = atoi(booked[i][0].substr(3, 2).c_str());
//        book.push_back(make_pair(time * 100 + minute, booked[i][1]));
//        //book에푸시 ( 페어형(int  9 * 100 + 10 (시간모양을 갖추기위해) ,string booked[i][1] 이름 );
//    }
//    // 09:05 스트링이기때문에 시간과 분을 따로 인트형으로 받음 9 / 5  ":"을 빼주기 위해서  
//
//    for (int i = 0; i < unbooked.size(); i++) {
//        int time = atoi(unbooked[i][0].substr(0, 2).c_str());
//        int minute = atoi(unbooked[i][0].substr(3, 2).c_str());
//        unbook.push_back(make_pair(time * 100 + minute, unbooked[i][1]));
//    }
//
//    sort(book.begin(), book.end()); //정렬 (시간순으로)
//    sort(unbook.begin(), unbook.end()); //정렬
//
//    int time = (book.front().first <= unbook.front().first) ? book.front().first : unbook.front().first;
//    //book.처음의 시간이 unbook.처음의 시간보다 적으면? book.시간이고 아니면 언북시간을 타임에 대입.
//    int idx1 = 0, idx2 = 0;
//    //idx초기화
//
//    while (answer.size() != book.size() + unbook.size()) {
//        //(asnwer사이즈가 book사이즈 + unbook사이즈랑 같지 않을때까지 와일문 반복)
//
//        if (idx1 < book.size() && book[idx1].first <= time) {
//            //만약 idx1가 북사이즈보다 작고 북[idx1]시간이 time과 같거나 작다면/
//            answer.push_back(book[idx1].second);
//            idx1++;
//            time += 10; //업무를 처리하는데 10분이 걸리니까 푸시하고 10분업무봐주고있는 중..
//            if (time % 100 > 60) //만약 시간을 나누고 분만남았는데 분이 60분을넘어간다면
//                time = (time / 100 + 1) * 100 + time % 100 % 60;
//            //다시셋팅
//        }
//        else if (idx2 < unbook.size() && unbook[idx2].first <= time) {
//            //그게아니고 idx2가 언북사이즈보다 작고 언북[idx2].첫번째값이 타임보다 같거나 작으면
//            answer.push_back(unbook[idx2].second);
//            idx2++;
//            time += 10;
//            if (time % 100 > 60) time = ((time / 100 + 1)+ 1) * 100 + time % 100 % 60;
//        }
//        else {
//            // 그렇지않으면
//            if (idx1 < book.size() && idx2 < unbook.size())
//                //만약 idx1이 북사이즈보다 작고 idx2가 언북사이즈보다 작으면 
//                time = (book[idx1].first <= unbook[idx2].first) ? book[idx1].first : unbook[idx2].first;
//            else if (idx1 >= book.size())
//                time = unbook[idx2].first;
//            else if (idx2 >= unbook.size())
//                time = book[idx1].first;
//        }
//    }
//
//    for (auto& i : answer)
//    {
//        cout << i << endl;
//    }
//
//    return answer;
//}