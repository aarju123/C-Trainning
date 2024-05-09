#include <iostream>
#include <string>
#include <vector>

template<typename K, typename V> //Keypair
class KeyValuePair
{
public:
    K key;
    V value;
};

template<typename K, typename V>
class Dictionary
{
    std::vector<KeyValuePair<K, V>> keyValuePairs;

public:
    void add(K key, V value)
    {
        KeyValuePair<K, V> pair;
        pair.key = key;
        pair.value = value;
        keyValuePairs.push_back(pair);
    }
    
    V operator[](K keyArg)
    {
        for (const auto& pair : keyValuePairs)
        {
            if (pair.key == keyArg)
            {
                return pair.value;
            }
        }
        
        return 0;
    
    }

};

int main()
{
    Dictionary<std::string, std::string> stringMap;
    stringMap.add("BLR", "Bengaluru");
    stringMap.add("CHN", "Chennai");
    std::string value = stringMap["BLR"];

    std::cout << value << std::endl;

    Dictionary<std::string, int>stringToIntMap;
    stringToIntMap.add("One", 1);
    stringToIntMap.add("Two", 2);
    int number = stringToIntMap["One"];
    std::cout << number << "\n"; 
    return 0;
}
