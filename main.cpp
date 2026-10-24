#include <iostream>
#include <string>
class samochod {
    private:
        std::string make;
        std::string model;
        int rokProdukcji;
    public:
        samochod(std::string make = "Toyota(chyba)", std::string model = "Corrola(prawdobodobnie)", int rokProdukcji = 1999)
        {
            this->make = make;
            this->model = model;
            this->rokProdukcji = rokProdukcji;
        }
		~samochod() {
			std::cout<<"Deskruktor wywolany dla "<<make<<" "<<model<<std::endl;
		}
};
int main() {
    samochod Mine;
    samochod His("Toyota(napewno)", "Corrola(bez dwoch zdan)", 2022);
    return 0;
}
