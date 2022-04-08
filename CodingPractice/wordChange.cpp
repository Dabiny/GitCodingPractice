// #include <string>
// #include <vector>

// using namespace std;

// int answer = 0;

// void DFS(string begin, string target, vector<string> words, string next, int index)
// {
//     int count = 0;

//     if (index == 0)
//     {
//         vector<char> ch (begin.size() + 1, nullptr);
//         string s = begin;
//         strcpy(ch, s.c_str());
        
//         vector<chat> ch2 (begin.size() + 1, nullptr);
//         string ss = words[index];
//         strcpy(ch2m ss.c_str());

//         for (int i = 0; i < ch.size(); i++)
//         {
//             if (ch[i] == ch[i]) continue;

//             if (ch[i] != ch[i] && count == 0)
//             {
//                 count++;
//             }
//         }
//     }

//     DFS(begin, target, vector<string>words, words[index] + 1 , index + 1);
    
// }

// int solution(string begin, string target, vector<string> words) 
// {
//     DFS(begin, target, words, begin, 0);
//     return answer;
// }

// #include <vector>
// #include <string>

// using namespace std;

// int answer = 50;
// bool visited[50];

// bool check_diff(const string& a, const string& b)
// {
//     int dif_cnt = 0; 

//     for (int i = 0; i < a.size(); i++)
//     {
//         if (a[i] != b[i]) dif_cnt++;
//     }

//     if (dif_cnt == 1) return true;

//     return false;
// }

// void DFS (string begin, string target, vector<string>words, int step)
// {
//     if (answer <= step) 
//         return;
    
//     if (begin == target)
//         answer = min (answer, step);
//         return;

//     for (int i = 0; i < words.size(); i++)
//     {
//         if (check_diff(begin, words[i]) && !visited[i])
//             visited[i] = true;
//             DFS (words[i], target, words, step + 1);
//             visited[i] = false; // 재귀 리턴 후 백트래킹 조건 
//     }

//     return;
// }

// int solution(string begin, string target, vector<string>words)
// {
//     DFS (begin, target, words, 0);

//     if (answer == 50)
//         return 0;
    
//     return answer;
// }

