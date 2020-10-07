#include <iostream>
char charK;
int intK;
int ikiUs[8]={1,2,4,8,16,32,64,128};
int ext[8];
int *bin(int inchar);
bool cont();
int main()
{
    int *val;
    std::cout<<"Welcome to Ascii-Binary Converter\n";
    do{
    std::cout<<"Please enter the value you want to convert: "; std::cin>>charK;
    intK=charK;
    //ASCII equivalent
    std::cout<<"ASCII equivalent: "<<intK<<std::endl;
    //Binary Equivalent
    val=bin(intK); //Accepting and printing returned pointer
    std::cout<<"Binary equivalent: ";
    for (size_t i = 0; i < 8; i++)
    std::cout<<val[i];
    std::cout<<"\n";
    } while (cont());//Checking continuity
    return 0;
}
int *bin(int inchar)
{
    //Calculating binary equivalent
    for (int i = 7; i >-1; i--)
    {
        int temp;
        temp=(inchar%ikiUs[i]);
        if (temp!=inchar)
        {
            ext[7-i]=1;
        }
        else if (temp=inchar)
        {
            ext[7-i]=0;
        }
        inchar=temp;
    }
    //Returning the array
    return ext;
}
bool cont()
{
    //Asking user if they want to continue
    char go;
    std::cout<<"Do you want to continue? (Y/N)";
    std::cin>>go;
    if (go=='y')
    {
        return true;
    }
    return false;
}