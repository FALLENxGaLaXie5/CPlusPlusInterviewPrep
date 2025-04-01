#pragma once
#include <unordered_set>
#include <vector>

class KeysAndRooms
{
public:
    static bool canVisitAllRoomsBFS(std::vector<std::vector<int>>& rooms);
    static bool canVisitAllRoomsDFS(std::vector<std::vector<int>>& rooms);
    static void dfs(int node , std::vector <int> &visited , std::vector<std::vector<int>>& rooms);
};
