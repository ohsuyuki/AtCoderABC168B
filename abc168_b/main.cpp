//
//  main.cpp
//  abc168_b
//
//  Created by yuuki oosu on 2020/05/24.
//  Copyright © 2020 yuuki oosu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int K = 0;
    std::cin >> K;

    std::string S = "";
    std::cin >> S;

    std::string ret = "";
    if(S.length() <= K) {
        ret = S;
    } else {
        ret = S.substr(0, K) + "...";
    }

    std::cout << ret;

    return 0;
}
