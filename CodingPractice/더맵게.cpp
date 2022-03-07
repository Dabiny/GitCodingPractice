// #include <vector>
// #include <iostream>
// #include <queue>

// using namespace std;

// int solution(vector<int> scoville, int K) 
// {
//     priority_queue<int,vector<int>,greater<int>> pq(scoville.begin(), scoville.end());
//     //정의 오름차순 우선순위 
//     int count = 0;

//     while (pq.size() > 1 && pq.top() < K)
//     {
//         if ( pq.top() < K )
//         {   
//             int num1 = pq.top();
//             pq.pop();

//             int num2 = pq.top();
//             pq.pop();

//             pq.push(num1 + ( num2 * 2));
//             count++; 
//         }
//     }

//     if (pq.top() < K)
//         return -1;

//     return count;
// }

// int main()
// {
//     vector<int> sco {1,2,3,9,10,12};
//     int k = 7;

//     cout << solution(sco, k) << endl;
// }

