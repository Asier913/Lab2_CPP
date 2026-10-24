#include <iostream>
#include <string>
class tablica{
    private:
        int* tab;
    public:
        tablica(int wielkosc = 10)
        {
            tab = new int[wielkosc];
            for (int i = 0;i < wielkosc;i++)
            {
            	tab[i] = 0;
			}
        }
        ~tablica() {
        	delete[] tab;
        	std::cout<<"Tablica zostala pokonana"<<std::endl;
 		}
};
int main() {
	tablica Mine;
    tablica His(5);
    return 0;
}
