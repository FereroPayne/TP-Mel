#include <iostream>
#ifndef admin_encrypt_h
#define admin_encrypt_h
#include <string>

class Encrypt {
public:
    static std::string encryptString(const std::string& input);
    static std::string decryptString(const std::string& input);
    //fonction virtuelle pure
     virtual ~encode() = default;
     virtual std::string encode(const std::string& input)
        {
            return encodeString(input);
        }

         
        virtual std::string decode(const std::string& input)
        {
            return decodeString(input);
        }
}
#endif;
   