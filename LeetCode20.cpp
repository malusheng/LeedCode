/*************************************************************************
	> File Name: LeetCode20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时42分46秒
 ************************************************************************/
bool isValid(char * s){
    int len = strlen(s);
    char *stack = (char *)malloc(sizeof(char) * len);
    int top = -1, flag = 1;
    while (s[0]) {
        switch (s[0]) {
            case '(': 
            case '{':
            case '[': stack[++top] = s[0]; break;
            case ')': flag = (top != -1 && stack[top--] == '('); break;
            case '}': flag = (top != -1 && stack[top--] == '{'); break;
            case ']': flag = (top != -1 && stack[top--] == '['); break;
        }
        if (!flag) break;
        s++;
    }
    return (flag && top == -1);
}


/*
bool isValid(char * s){
    if(*s == 0) return true;
    int len = strlen(s);
    if(len & 1) return false;
    char stack[len];
    int top = -1;
    for(int i=0; i<len; ++i){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            stack[++top] = s[i];
        else if(top == -1) return false;
        else if(s[i] == stack[top]+1 || s[i] == stack[top]+2)
            stack[top--] = 0;
        else return false;
    }
    return top == -1;
}
*/
