#include <iostream>
#include <chrono>
#include <thread>

void wait(int seconds){
    std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
}

int main(){
    int s;

    std::cout << "how long? ";
    std::cin >> s;
    std::cout << "aight cya";

    if(s>10){
        s = 10*1000;
    }
    else if(s<0){
        s = 0;
    }
    else{
        s*=1000;
    }

    wait(s);
    return 0;
}
