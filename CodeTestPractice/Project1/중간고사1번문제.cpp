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
//        // int time = ���ڿ��� ����Ÿ������ ����(booked[i][0].substr(0,2).c_str()) ����
//        // atoi�� char*�� char �迭�� ���ڷ� �޴´� char�迭�� �ޱ����ؼ� �ΰ����� ����ؾ� �ϴµ�
//        // c_str()(��Ʈ�����Ը� �����Ṯ�ڹ迭�� �޴� �Լ��� �����Ҷ� ���) �� ����ؼ� ��ȯ ��������. 
//
//        int minute = atoi(booked[i][0].substr(3, 2).c_str());
//        book.push_back(make_pair(time * 100 + minute, booked[i][1]));
//        //book��Ǫ�� ( �����(int  9 * 100 + 10 (�ð������ ���߱�����) ,string booked[i][1] �̸� );
//    }
//    // 09:05 ��Ʈ���̱⶧���� �ð��� ���� ���� ��Ʈ������ ���� 9 / 5  ":"�� ���ֱ� ���ؼ�  
//
//    for (int i = 0; i < unbooked.size(); i++) {
//        int time = atoi(unbooked[i][0].substr(0, 2).c_str());
//        int minute = atoi(unbooked[i][0].substr(3, 2).c_str());
//        unbook.push_back(make_pair(time * 100 + minute, unbooked[i][1]));
//    }
//
//    sort(book.begin(), book.end()); //���� (�ð�������)
//    sort(unbook.begin(), unbook.end()); //����
//
//    int time = (book.front().first <= unbook.front().first) ? book.front().first : unbook.front().first;
//    //book.ó���� �ð��� unbook.ó���� �ð����� ������? book.�ð��̰� �ƴϸ� ��Ͻð��� Ÿ�ӿ� ����.
//    int idx1 = 0, idx2 = 0;
//    //idx�ʱ�ȭ
//
//    while (answer.size() != book.size() + unbook.size()) {
//        //(asnwer����� book������ + unbook������� ���� ���������� ���Ϲ� �ݺ�)
//
//        if (idx1 < book.size() && book[idx1].first <= time) {
//            //���� idx1�� �ϻ������ �۰� ��[idx1]�ð��� time�� ���ų� �۴ٸ�/
//            answer.push_back(book[idx1].second);
//            idx1++;
//            time += 10; //������ ó���ϴµ� 10���� �ɸ��ϱ� Ǫ���ϰ� 10�о������ְ��ִ� ��..
//            if (time % 100 > 60) //���� �ð��� ������ �и����Ҵµ� ���� 60�����Ѿ�ٸ�
//                time = (time / 100 + 1) * 100 + time % 100 % 60;
//            //�ٽü���
//        }
//        else if (idx2 < unbook.size() && unbook[idx2].first <= time) {
//            //�װԾƴϰ� idx2�� ��ϻ������ �۰� ���[idx2].ù��°���� Ÿ�Ӻ��� ���ų� ������
//            answer.push_back(unbook[idx2].second);
//            idx2++;
//            time += 10;
//            if (time % 100 > 60) time = ((time / 100 + 1)+ 1) * 100 + time % 100 % 60;
//        }
//        else {
//            // �׷���������
//            if (idx1 < book.size() && idx2 < unbook.size())
//                //���� idx1�� �ϻ������ �۰� idx2�� ��ϻ������ ������ 
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