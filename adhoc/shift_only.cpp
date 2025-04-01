#include<bits/stdc++.h>

int main(){
    int n, num,cont=0;

    std::vector<int> nums;

    scanf("%d", &n);

    for(size_t i=0; i < n;i++){
        scanf("%d", &num);
        nums.push_back(num);
    }
    bool odd=0;

    do{
        for(size_t i=0; i < nums.size(); i++){
            if(nums.at(i) % 2 == 0){
                nums.at(i) /= 2;
            }else{
                odd = 1;
                break;
            }
        }
        if(!odd) cont++;
    }while(!odd);

    printf("%d", cont);
}
