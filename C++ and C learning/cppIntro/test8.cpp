#include <iostream>
#include <bitset>
#include <cstdint>


// if (flags & option4) ... // if option4 is set, do something

/* flags |= option4; // turn option 4 on.
flags |= (option4 | option5); // turn options 4 and 5 on.*/

/*
flags &= ~option4; // turn option 4 off
flags &= ~(option4 | option5); // turn options 4 and 5 off
*/

/* 
flags ^= option4; // flip option4 from on to off, or vice versa
flags ^= (option4 | option5); // flip options 4 and 5
*/





int main() {
    constexpr std::uint8_t option_viewed{ 0x01 };
    constexpr std::uint8_t option_edited{ 0x02 };
    constexpr std::uint8_t option_favorited{ 0x04 };
    constexpr std::uint8_t option_shared{ 0x08 };
    constexpr std::uint8_t option_deleted{ 0x10 };


    std::uint8_t myArticleFlags{ option_favorited };


    myArticleFlags ^= option_viewed;


    if (myArticleFlags & option_edited) 


    myArticleFlags &= ~option_favorited;
        
    

    std::cout << std::bitset<8>{ myArticleFlags} << '\n';

    return 0;  
}