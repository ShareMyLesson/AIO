#include <iostream>
#include <fstream>

std::ifstream is;
std::ofstream os;

int main(int argc, const char * argv[]) {
    is.open("ladyin.txt");
    os.open("ladyout.txt");
    
    int n, t, ans;
    int min = 0x7fffffff;
    int max = 0;
    int sum = 0;
    is >> n;
    
    for(int i = 0; i != n; ++i) {
        is >> t;
        min = std::min(min, t);
        max = std::max(max, t);
        ans = max - min + 1;
    }
    
    os << ans << std::endl;
    
    is.close();
    os.close();
    return 0;
}