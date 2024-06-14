#include <iostream>

void hunt_for_vowels(char message[], unsigned int size){
    

  unsigned int vowel_count{};//Initialized to zero
  
  //Don't modify anything above this line
  //Your code should go below this line

    for(size_t i{}; i<size ;++i)
    {
        if(message[i] == 'e' || message[i] == 'a' || message[i] == 'u' || message[i] == 'o' || message[i] == 'i')
        {
            vowel_count++;
        }
    }
  
  
  //Your code should go above this line
  //Don't modify anything below this line
  
  
  std::cout << "The string : " << message << " has " << vowel_count << " vowels";
    
}


int main()
{
    char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d','\0'};
    hunt_for_vowels(message,std::size(message));
    return 0;

}