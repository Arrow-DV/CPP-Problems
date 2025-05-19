#include<string>
#include<map>
std::string heavyMetalUmlauts(std::string boringText)
{
    /*

    A = Ä = \u00c4     E = Ë = \u00cb     I = Ï = \u00cf
    O = Ö = \u00d6     U = Ü = \u00dc     Y = Ÿ = \u0178
    a = ä = \u00e4     e = ë = \u00eb     i = ï = \u00ef
    o = ö = \u00f6     u = ü = \u00fc     y = ÿ = \u00ff

    */
    std::map<std::string, std::string> Chars = {
        {"A", "\u00c4"},
        {"O", "\u00d6"},
        {"a", "\u00e4"},
        {"o", "\u00f6"},

        {"E", "\u00cb"},
        {"U", "\u00dc"},
        {"e", "\u00eb"},
        {"u", "\u00fc"},

        {"I", "\u00cf"},
        {"Y", "\u0178"},
        {"i", "\u00ef"},
        {"y", "\u00ff"},
    };

    std::string result = "";
    for(char ch : boringText){
        std::string key(1, ch); 
        if (Chars.find(key) != Chars.end()) {
            result += Chars[key];
        } else {
            result += key;
        }
    }
    return result;
}