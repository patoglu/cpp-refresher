#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
void debug_ascii(const std::wstring& s)
{
    std::cout << "Beginning." << std::endl;
    for(int i = 0 ; i < s.size() ; ++i)
    {
        std::cout << s[i] << " ";
    }
    std::cout << "End." << std::endl;
}

int StringToWString(std::wstring &ws, const std::string &s)
{
    std::wstring wsTmp(s.begin(), s.end());

    ws = wsTmp;

    return 0;
}

int main()
{
    //TEST1
    /*
    std::unordered_map<std::wstring, int> m_map;
    
    std::wstring w_string;
    StringToWString(w_string,"mihihim");
    m_map.insert(make_pair(w_string,1));
    
    if ( m_map.find(w_string) == m_map.end() ) {
        std::cout << "Doesnt exist";
    }
    else {
        std::cout << " exist";
    }*/
    std::unordered_map<std::wstring, int> m_map;
    //TEST2
    std::wifstream file;
    file.open("en.txt");
    std::wstring myline;
    if (file.is_open())
    {
        while (file)
        {
            std::getline (file, myline);
            myline.erase(std::remove(myline.begin(), myline.end(), '\n'), myline.end());
            std::wcout << myline << '\n';
            debug_ascii(myline);

            
            m_map.insert(make_pair(myline,1));
        }
    }
    else {
        std::cout << "Couldn't open file\n";
        exit(EXIT_FAILURE);
    }

    std::wstring w_string;
    StringToWString(w_string,"mihihim");
    std::cout << m_map.count(w_string) << std::endl;
    StringToWString(w_string,"baksen");
    std::cout << m_map.count(w_string) << std::endl;
    StringToWString(w_string,"choked");
    std::wcout << w_string << std::endl;
    if ( m_map.find(w_string) == m_map.end() ) {
        std::cout << "Doesnt exist";
    }
    else {
        std::cout << " exist";
    }
    for(auto it = m_map.begin();
        it != m_map.end(); ++it)
    {
        
        //std::wcout << it->first << " " << it->second << "\n";
        //debug_ascii(it->first);
    }
    
    return 0;
}


