#ifndef MAFFLE_HEXA_H
#define MAFFLE_HEXA_H

#include <iostream>
#include <map>
#include <cctype>
#include <vector>
#include <string>

#ifndef MAFFLE_HEXA_NAMESPACE
#define MAFFLE_HEXA_NAMESPACE maffle
#endif

namespace MAFFLE_HEXA_NAMESPACE
{
    class Hexadecimal
    {
    public:
        static std::string to_binary(std::string hexa)
        {
            hexa = remove_spaces(hexa);
            hexa = to_lower(hexa);
            return convert(hexa);
        }

    private:
        static std::map<char, std::string> hexa_bin;
        static std::map<char, std::string> create_map()
        {
            std::map<char, std::string> tmp;
            tmp['0'] = "0000";
            tmp['1'] = "0001";
            tmp['2'] = "0010";
            tmp['3'] = "0011";
            tmp['4'] = "0100";
            tmp['5'] = "0101";
            tmp['6'] = "0110";
            tmp['7'] = "0111";
            tmp['8'] = "1000";
            tmp['9'] = "1001";
            tmp['a'] = "1010";
            tmp['b'] = "1011";
            tmp['c'] = "1100";
            tmp['d'] = "1101";
            tmp['e'] = "1110";
            tmp['f'] = "1111";
            return tmp;
        }
        static std::string remove_spaces(std::string str)
        {
            std::string tmp;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] != ' ')
                    tmp.push_back(str[i]);
            }
            return tmp;
        }
        static std::string to_lower(std::string str)
        {
            for (int i = 0; i < str.size(); i++)
                str[i] = tolower(str[i]);
            return str;
        }
        static std::string convert(std::string hexa)
        {
            std::string tmp;
            for (int i = 0; i < hexa.size(); i++)
                tmp += hexa_bin[hexa[i]];
            return tmp;
        }
    };
    std::map<char, std::string> Hexadecimal::hexa_bin = Hexadecimal::create_map();
}

#endif
