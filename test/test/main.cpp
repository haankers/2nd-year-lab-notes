//
//  main.cpp
//  test
//
//  Created by Harrison Ankers on 13/03/2018.
//  Copyright © 2018 Harrison Ankers. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int x=1;
    cout<<x<<endl;
    {
        int x=5;
        cout<<x<<endl;
    }
    cout<<x<<endl;
}
