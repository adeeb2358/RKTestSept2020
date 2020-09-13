//
//  main.cpp
//  RKTestSept2020
//
//  Created by adeeb mohammed on 13/09/20.
//  Copyright © 2020 adeeb mohammed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

int a = 1000000000;

int solution(std::vector<int> &A) {
    std::unordered_map<int, int> pairMap;
    int size = (int)A.size();
  
    // storing each number frequency of each number
    for (int i = 0; i < size; i++) {
        pairMap[A[i]]++;
    }
    
    int pairCount = 0;
    for (auto it = pairMap.begin(); it != pairMap.end(); ++it) {
        int currCnt = it->second;
        pairCount += (currCnt * (currCnt -1 )) /2;
    }
    
    return pairCount;
}


int main(int argc, const char * argv[]) {
    std::vector<int> input = {3,5,6,3,3,5};
    std::cout << solution(input);
    std::cout << a;
    return 0;
}
