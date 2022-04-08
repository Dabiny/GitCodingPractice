// 문제 설명
// 주어진 항공권을 모두 이용하여 여행경로를 짜려고 합니다. 항상 "ICN" 공항에서 출발합니다.

// 항공권 정보가 담긴 2차원 배열 tickets가 매개변수로 주어질 때,
// 방문하는 공항 경로를 배열에 담아 return 하도록 solution 함수를 작성해주세요.

// 제한사항
// 모든 공항은 알파벳 대문자 3글자로 이루어집니다.
// 주어진 공항 수는 3개 이상 10,000개 이하입니다.
// tickets의 각 행 [a, b]는 a 공항에서 b 공항으로 가는 항공권이 있다는 의미입니다.
// 주어진 항공권은 모두 사용해야 합니다.
// 만일 가능한 경로가 2개 이상일 경우 알파벳 순서가 앞서는 경로를 return 합니다.
// 모든 도시를 방문할 수 없는 경우는 주어지지 않습니다.

// #include <string>
// #include <vector>
// #include <queue>
// #include <stack>
// using namespace std;

// // vector<string> solution(vector<vector<string>> tickets) 
// // {
// //     vector<bool> isVisited;
// //     vector<int> visitVec;
// //     vector<string> visitCountry;
// //     string vertex = "ICN"; //시작버텍스

// //     queue<string> q;
// //     q.push(vertex);

// //     int idx = 0;

// //     while (!q.empty())
// //     {
// //         string v = q.front(); //q.공항이름을 v에 저장
// //         q.pop();

// //         if (isVisited[idx]) //만약 이미 공항에 다녀갔다면 
// //             continue; //다시돌리기
        
// //         isVisited[idx] = true;
// //         idx++; //버텍스 숫자 하나 올려주기
        
// //         visitCountry.push_back(v); //방문한 공항이름 푸쉬백

// //         for (auto i : tickets[idx])
// //         {
// //             if (!isVisited[idx])
// //                 q.push(i);
// //         }
// //     }
    
// //     return visitCountry;
// // }

// // int main()
// // {
// //     vector<vector<string>> ticket {
// //         {"ICN","JFK"}, //0
// //         {"HND","IAD"}, //1
// //         {"JFK","HND"}  //2
// //     };

// //     solution(ticket);
// // }

// vector<string> answer;

// void DFS (vector<vector<string> tickets, string start, vector<bool> visit, vector<int> an, int count)
// {
//     answer.push_back(start); //지나온 경로 푸쉬

//     if (count == tickets.size()) //항공권을 모두 사용하였다면
//         return;

//     for (int i = 0; i < tickets.size(); i++)
//     {
//         if (start == tickets[i][0] && visit[i] == false) //스타트지점과 티켓의 스타트와 같고, 아직 항공권을 쓴게 아니라면
//         {
//             start = tickets[i][1]; //스타트를 목적지로 설정
//             visit[i] = true; //이 항공권은 썼음
            
//             DFS (tickets, start, visit, an, count + 1);
//         }
//     }
//     // 만약 쓴 항공권의 경로라면 popback
//     answer.pop_back(start);
// }

// vector<string> solution(vector<vector<string>> tickets) 
// {
    
//     vector<bool> visit (tickets.size(), false); //티겟을 썼는지 안썼는지
//     vectir<string> s;
//     sort (tickets.begin(), tickets.end()); //출발지를 정렬해논다

//     DFS (tickets, "ICN", visit, s, 0); //tickect, 출발지는 무적권 인천, 티켓을 썻는지 안썻는지, 0
// }