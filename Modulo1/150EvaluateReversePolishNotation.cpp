class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
    int first, second, token, result;
    string sign;
    char signc;
    stack<int> expre;

    for(int i=0; i<tokens.size(); i++)
    {
        if(tokens[i]!="+" &&tokens[i]!="-" && tokens[i]!="*" &&tokens[i]!="/"){
            stringstream sst;
            sst << tokens[i];
            sst >> token;
            expre.push(token);
        }
        else{
            sign=tokens[i];
            second=expre.top();
            expre.pop();
            first=expre.top();
            expre.pop();
            stringstream ssc;
            ssc << sign;
            ssc >> signc;
            switch(signc){

            case '+':   result=first + second;
                        break;
            case '-':   result=first - second;
                        break;
            case '*':   result=first * second;
                        break;
            case '/':   result=first / second;
                        break;
            }

            expre.push(result);
        }
    }
    return expre.top();

    }
};
