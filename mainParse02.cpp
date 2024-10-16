#include <iostream>
#include <sstream>
#include <vector>

std::vector<std::string> split(const std::string &input, char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(input);
    std::string item;
    while (std::getline(ss, item, delimiter)) {
        result.push_back(item);
    }
    return result;
}

std::vector<std::vector<std::string>> splitIntoWordGroups(const std::string &input) {
    // Split the input by commas to get groups
    std::vector<std::string> groups = split(input, ',');

    std::vector<std::vector<std::string>> wordGroups;

    // For each group, split it into words and store it in the vector of vectors
    for (const auto &group : groups) {
        wordGroups.push_back(split(group, ' '));
    }

    return wordGroups;
}

int main() {
    std::string sampleInput = "4 year old female hyena, born in spring, tan color, 70 pounds, from Friguia Park, Tunisia";
    std::string mySpecies = "";
    std::string arrayOfWords[5];

    std::vector<std::vector<std::string>> result = splitIntoWordGroups(sampleInput);

    // Output the groups and their words
    int j = 0;
    int k = 0;
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "Group " << (i + 1) << ": ";
        for (const auto &word : result[i]) {
            if (i==0) {
                // We are in the first group
                if (j == 4){
                    mySpecies = word;
                }
                arrayOfWords[j] = word;
                std::cout << "\n In the first group and word " << j << "is:" << word;
                j++;
            }
            else {
            std::cout << word << " ";
            }
            for (std::string aWord : arrayOfWords) {
            std::cout << "\n The array of words is: " << aWord;
            }
        }
        std::cout << std::endl;
    }

    //Outpur species
    std::cout << "\nMy Species is: " << mySpecies << std::endl;

    return 0;
}
