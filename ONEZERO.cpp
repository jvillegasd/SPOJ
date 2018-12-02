#include <bits/stdc++.h>

using namespace std;

int mod(string bin, int n){
    int reminder = 0;
    for(int i = 0; i < bin.length(); i++){
        reminder = reminder * 10 + (bin[i] - '0');
        reminder%= n;
    }
    return reminder;
}

void BFS(int n){
    queue<string> q;
    set<int> visited;
    string bin = "1";
    q.push(bin);
    while(!q.empty()){
        bin = q.front();
        q.pop();
        int reminder = mod(bin, n);
        if(reminder == 0){
            cout << bin << endl;
            break;
        } else if(visited.find(reminder) == visited.end()){
            visited.insert(reminder);
            q.push(bin + "0");
            q.push(bin + "1");
        }
    }
}

int main(){
    int k, n;
    scanf("%d", &k);
    while(k--){
        scanf("%d", &n);
        BFS(n);
    }
    return 0;
}