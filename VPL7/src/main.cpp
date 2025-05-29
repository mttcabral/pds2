#include <iostream>
#include <string>
#include <sstream>
#include <list>

class Identifier
{
private:
    int _id;
    static int _incrementalId;
    static int _numberOfObjects;

public:
    Identifier()
    {
        this->_id = ++_incrementalId;
        _numberOfObjects++;
    }

    Identifier(int id)
    {
        this->_id = id;
        _numberOfObjects++;
    }

    ~Identifier()
    {
        _numberOfObjects--;
    }

    const int &getId() const
    {
        return this->_id;
    }

    const int &getNumberOfObjects() const
    {
        return this->_numberOfObjects;
    }

    const Identifier *addressOfObject() const
    {
        return this;
    }
};

int Identifier::_incrementalId = 0;
int Identifier::_numberOfObjects = 0;

int main()
{
    std::list<Identifier *> listOfPointersToIdentifiers;
    bool endProgram = false;

    while (!endProgram)
    {

        std::string input;
        getline(std::cin, input);

        std::istringstream iss(input);
        std::string wordInInputLine;
        getline(iss, wordInInputLine, ' ');

        if (wordInInputLine == "A")
        {
            Identifier *i = new Identifier();
            listOfPointersToIdentifiers.push_back(i);

            std::list<Identifier *>::iterator it;
            for (it = listOfPointersToIdentifiers.begin(); it != listOfPointersToIdentifiers.end(); it++)
            {
                if ((*it)->getId() == i->getId())
                {
                    std::cout << (*it)->getId() << " " << (*it)->addressOfObject() << std::endl;
                }
            }
        }
        else if (wordInInputLine == "C")
        {
            int idInput = 0;
            getline(iss, wordInInputLine, ' ');
            idInput = std::stoi(wordInInputLine);

            if (idInput < 0)
            {
                Identifier *i = new Identifier(idInput);

                listOfPointersToIdentifiers.push_front(i);

                std::list<Identifier *>::iterator it;
                for (it = listOfPointersToIdentifiers.begin(); it != listOfPointersToIdentifiers.end(); it++)
                {
                    if ((*it)->getId() == i->getId())
                    {
                        std::cout << (*it)->getId() << " " << (*it)->addressOfObject() << std::endl;
                    }
                }
            }
            else
            {
                std::cout << "ERRO" << std::endl;
            }
        }
        else if (wordInInputLine == "R")
        {
            if (!listOfPointersToIdentifiers.empty())
            {
                std::cout << (*listOfPointersToIdentifiers.begin())->getId() << " " << (*listOfPointersToIdentifiers.begin())->addressOfObject() << std::endl;
                delete (*listOfPointersToIdentifiers.begin());
                listOfPointersToIdentifiers.remove((*listOfPointersToIdentifiers.begin()));
            }
            else
            {
                std::cout << "ERRO" << std::endl;
            }
        }
        else if (wordInInputLine == "N")
        {
            std::cout << (*listOfPointersToIdentifiers.begin())->getNumberOfObjects() << std::endl;
        }
        else if (wordInInputLine == "P")
        {
            int nItemInTheList = 0;
            getline(iss, wordInInputLine, ' ');
            nItemInTheList = std::stoi(wordInInputLine);

            if (nItemInTheList > 0 && nItemInTheList <= listOfPointersToIdentifiers.size())
            {
                nItemInTheList--;
                std::list<Identifier *>::iterator it = listOfPointersToIdentifiers.begin();
                std::advance(it, nItemInTheList);

                std::cout << (*it)->getId() << " " << (*it)->addressOfObject() << std::endl;
            }
            else
            {
                std::cout << "ERRO" << std::endl;
            }
        }
        else if (wordInInputLine == "L")
        {
            std::list<Identifier *>::iterator it;
            for (it = listOfPointersToIdentifiers.begin(); it != listOfPointersToIdentifiers.end(); it++)
            {
                std::cout << (*it)->getId() << " " << (*it)->addressOfObject() << std::endl;
            }
        }
        else if (wordInInputLine == "E")
        {
            endProgram = true;
        }
    }

    return 0;
}