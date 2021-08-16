#include <iostream>
#include <fstream>

std::ifstream is;
std::ofstream os;

int n;

int main() {
is.open("countin.txt");
os.open("countout.txt");

is >> n;

for(int i = 1; i <= n; ++i){
os << i << " " << std::endl;

}


is.close();
os.close();
return 0;
}

	
