#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// string solution(vector<string> participant, vector<string> completion) 
// {
//     unordered_map<string, int> um;
//     string answer = "";

//     for (auto& i : participant)
//     {
//         um[i]++;
//     }

//     for (auto& i : completion)
//     {
//         um[i]--;
//     }

//     for (auto& i : um)
//     {
//         if (i.second > 0)
//         {
//             answer = i.first;
//             break;
//         }
//     }

//     return answer;
// }

bool solution(vector<string> phone_book) 
{
    unordered_map<string, int> um;

    for (auto& i : phone_book)
    {
        um[i]++;
    } //um에 집어넣기 

    //2. um에 집어넣은 키값들을 서로 비교하면서 접두사가 있는지 찾기

    for (int i = 0; i < phone_book.size(); i++)
    {
        for (int j = 0; j < phone_book[i].size() - 1; j++) //폰북[i]의 사이즈 (스트링사이즈를 알아본다. 접두사 이니까 -1 해주어서 전체를 둘러보지않게)
        {
            string a = phone_book[i].substr(0,j+1);

            if (um[a]) //접두사 a가 키값이라면
                return false;
        }
    }

    return true;
}