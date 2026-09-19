#include <iostream>
#include <chrono>
#include <thread>

wait(int seconds){
    std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
}

int main(){
    int s;

    std::cout << "how long?";
    std::cin >> s;
    std::cout << "aight cya";

    s = (s>10) ? 10 : (s<0) ? 0 : s;

    wait(s);
    exit(0);
    
    return 0;
}
