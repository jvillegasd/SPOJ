#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int number;
    vector<int> array;
    while(scanf("%d", &number) && number != 42) array.push_back(number);
    for(int i = 0; i < array.size(); i++) printf("%d\n", array[i]);
}