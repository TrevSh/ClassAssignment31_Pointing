#include <iostream>
#include <string>

int main()
{
    int* pAPointer;     //declare pointer. As a int pointer, it can only point to (or store) an int variable.
    int* pScore = 0;    //declare and initialize pointer. Variables with the 'p' prefix usually indicate a pointer.0 has no value, this the pointer is pointing to nothing.

    //Assiging a pointer to NULL also means nothing. NULL is defined in multiple libraries (including iostream) as nothing.

    int score = 1000;
    pScore = &score;    //assign pointer pScore address of variable score. The '&' returns the address of the variable.
    std::cout << "Assigning &score to pScore\n";
    std::cout << "&score is: "<<&score<<"\n";       //address of score variable
    std::cout << "pScore is: "<<pScore<<"\n";       //address stored in pointer
    std::cout << "score is: "<<score<<"\n";
    std::cout << "*pScore is: "<<*pScore<<"\n\n";   //value pointed to by pointer or 'The object to which pScore points'.

    std::cout << "Adding 500 to score\n";
    score += 500;
    std::cout << "score is: " << score << "\n";
    std::cout << "*pScore is: " << *pScore << "\n\n";

    std::cout << "Adding 500 to *pScore\n";
    *pScore += 500;
    std::cout << "score is: " << score << "\n";
    std::cout << "*pScore is: " << *pScore << "\n\n";

    std::cout << "Assigning &newScore to pScore\n";
    int newScore = 500;
    pScore = &newScore;                             //Reassigning pScore from score to newScore. Saying '*pScore = newScore' would change the value of what *pScore points to.
    std::cout << "&newScore is: " << &newScore << "\n";
    std::cout << "pScore is: " << pScore << "\n";
    std::cout << "newScore is: " << newScore << "\n";
    std::cout << "*pScore is: " << *pScore << "\n\n";

    std::cout << "Assigning &str to pStr\n";
    std::string str = "score";
    std::string* pStr = &str;       //pointer to string object
    std::cout << "str is: " << str << "\n";
    std::cout << "*pStr is: " << *pStr << "\n";     //Sends the object the pointer is pointing to through cout.
    std::cout << "(*pStr).size() is: " << (*pStr).size() << "\n";       //Using the member function of the variable pStr points to..
    std::cout << "pStr->size() is: " << pStr->size() << "\n";           //..this is a more readable way using an arrow operator.

    system("pause");
}