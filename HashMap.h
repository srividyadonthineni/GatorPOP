//
// Created by Srividya Donthineni on 8/1/24.
//

#ifndef GATORPOP_HASHMAP_H
#define GATORPOP_HASHMAP_H
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


class HashMap {
public:
    std::unordered_map<std::string, std::string> RetrieveSongsFromYear(const std::vector<std::pair<int, std::string>> &song_data, int year);
    void DisplayBottom50Songs(std::unordered_map<std::string, std::string> &song_map);
    void SortAndDisplaySongs(const std::vector<std::pair<int, std::string>> &song_data);
};


#endif //GATORPOP_HASHMAP_H
