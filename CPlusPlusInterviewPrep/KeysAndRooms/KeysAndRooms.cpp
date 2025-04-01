#include "KeysAndRooms.h"

#include <stack>
#include <unordered_set>

using std::vector;
using std::unordered_set;
using std::stack;

bool KeysAndRooms::canVisitAllRoomsBFS(vector<vector<int>>& rooms)
{
    unordered_set<int> keys(rooms[0].begin(), rooms[0].end());
    for (int i = 1; i < rooms.size(); i++)
    {
        if (!keys.count(i)) return false;

        keys.insert(rooms[i].begin(), rooms[i].end());
    }
    return true;
}

void KeysAndRooms::dfs(int node , vector <int> &visited , vector<vector<int>>& rooms){
    visited[node ]= 1 ; 
    for (int room : rooms[node]){
        if(visited[room] == 0){
            dfs(room , visited , rooms) ; 
        }
        
    }
}
bool KeysAndRooms::canVisitAllRoomsDFS(vector<vector<int>>& rooms) {
    vector <int> vs(rooms.size() , 0 ) ; 
    dfs(0 , vs , rooms) ; 
    for (int i : vs){
        if (i == 0) return false ; 

    }
    return true ;
}

