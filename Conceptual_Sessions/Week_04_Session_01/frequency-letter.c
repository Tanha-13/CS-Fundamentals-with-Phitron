#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    char s[n+5];
    scanf("%s",s);

    int frequency[26] = {0};
    for(int i=0;i<n;i++){
        int val = s[i] - 'a';
        frequency[val]++;
    }

    for(int i=0;i<26;i++){
        if(frequency[i] > 0){
            printf("%c : %d\n",i+'a',frequency[i]);
        }
    }
    return 0;
}