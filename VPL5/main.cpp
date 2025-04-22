#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>

int main()
{
    // Variables
    std::string wordInFile, fileContent;
    std::vector<std::string> vector;
    std::set<std::string> set;
    std::stringstream fileBuffer;

    // File name input
    std::string fileName;
    std::cin >> fileName;

    // Open file
    std::ifstream file(fileName);

    // File's content into a string
    fileBuffer << file.rdbuf();
    fileContent = fileBuffer.str();

    // Replace non-alphanumeric chars with a space
    for (char &c : fileContent)
    {
        if (!std::isalnum(c))
        {
            c = ' ';
        }
    }

    // Get every word in the string and insert in a vector
    std::istringstream iss(fileContent);
    while (iss >> wordInFile)
    {
        vector.push_back(wordInFile);
    }

    // Convert all strings in vector to lowercase
    std::transform(vector.begin(), vector.end(), vector.begin(), [](std::string &str)
                   {
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
        return str; });

    // Sort strings in the vector
    std::sort(vector.begin(), vector.end());

    // Use a set to get unique strings from the vector
    for (std::string s : vector)
    {
        set.insert(s);
    }

    // Count how many times a given word in the set is in the vector
    for (std::string s : set)
    {
        std::cout << s << " " << std::count(vector.begin(), vector.end(), s) << std::endl;
    }
}