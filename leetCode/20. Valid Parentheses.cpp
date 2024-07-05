//
// Created by Ray on 7/8/2022.
//

/*
bool isValid(string s) {
    stack<char> openingBrackets;
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[')
            openingBrackets.push(s.at(i));
        else {
            if (openingBrackets.empty()) {
                return false;
            }
            if (( s.at(i) == ')' && (char) ( s.at(i) - 1 ) != openingBrackets.top())) {
                return false;
            } else if (( s.at(i) == '}' || s.at(i) == ']' ) && ((char) ( s.at(i) - 2 ) != openingBrackets.top())) {
                return false;
            }
            openingBrackets.pop();
        }
    }
    if (openingBrackets.empty())
        return true;
    return false;
}
*/