#include<iostream>
bool isSeparator(char c, char* separators) {
char endOfString = '\0';
char* sepPtr = separators;
bool ret = false;
while(*sepPtr != endOfString) {
if (c == *sepPtr) {
ret = true;
break;
}
sepPtr++;
}
return ret;
}
int charArrayLength(char* a) {
int ret = 0;
char endOfString = '\0';
while(*a != endOfString) {
ret++;
a++;
}
return ret;
}

int main(int argc, char** argv) {
using namespace std;
int ret = 0;
char endOfString = '\0';
char theSentence[] = "Actually, couldn't you come with me?";
char separators[] = " \t,.;:?!";
char* strPtr = theSentence;
char* strEnd;
// find the beginning of the second word
bool isSecondWord = false;
while(*strPtr != endOfString) {
while(isSeparator(*strPtr, separators)) {
// while deals with case with consecutive separators
strPtr++;
isSecondWord = true;
}
if (isSecondWord) {
// end of consecutive separators, means second word starts at strPtr
break;
} else {
// character was not a separator, continue
strPtr++;
}
}
// find the end of the second word
strEnd = strPtr;
while(*strEnd != endOfString) {
if (isSeparator(*strEnd, separators)) {
// first separator found after second word, mark the end
*strEnd = endOfString;
break;
}
strEnd++;
}
// print the second word and its length
cout << strPtr << "(" << charArrayLength(strPtr) << ")" << endl;
return ret;
}