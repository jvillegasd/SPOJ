#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int> &one, const pair<int, int> two){
    if(one.first > two.first) return false;
    else if(one.first == two.first && one.second < two.second) return false;
    else return true;
}

int main(){
    int t, n, x, y;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        vector<pair<int, int>> points;
        while(n--){
            scanf("%d %d", &x, &y);
            points.push_back(make_pair(x, y));
        }
        sort(points.begin(), points.end(), cmp);
        for(int i = 0; i < points.size(); i++) printf("%d %d\n", points[i].first, points[i].second);
    }
    return 0;
}