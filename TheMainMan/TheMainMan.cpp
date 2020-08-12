#include <iostream>
#include <string>

class TheMainMan
{
public:
    TheMainMan()
    {
        std::cout << "Hi Sir! Hopefully they have internet up there in heaven so that you can see this.\n" << std::endl;
    };
    ~TheMainMan()
    {
        std::cout << "\nYou may be gone, but you will forever be in our hearts" << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const TheMainMan& mainMan);

private:
    const std::string theOg = "Sir Jo";
};

std::ostream& operator<<(std::ostream& os,  const TheMainMan& mainMan)
{
    os << mainMan.theOg;
    return os;
}

int main(int argc, char** argv)
{
    TheMainMan theTrueOG {};

    std::cout << "Maraming salamat sir sa lahat! It may have been dreadfully obvious but idol na idol talaga kita noon at hanggang ngayon.\n"
    << "I can still vividly remember those days after your lectures where I'd always go up to you and ask a question about the lesson\n"
    << "since I was too shy to raise my hand and interrupt you while you were talking. You always had answers to all of my questions\n"
    << ", I still remember thinking how baffled I was as to how you managed to keep all of that info and knowledge to heart.\n\n"

    << "I desperately wanted to be like you, a walking encyclopedia of knowledge that sent shivers down other people's spine.\n"
    << "Talking with you about programming was one of the main highlights of my university days and I'm heartbroken that I won't be \n"
    << "able to have a conversation with you anymore. It's because of you that I still try to hone my craft everyday, thank you so much.\n"
    << "Sayang hindi natuloy yung inuman natin haha, I still owe you a drink.\n"
    <<std::endl;

    std::cout << "You will always be the main man, our main man, " << theTrueOG << "." << std::endl;
}
