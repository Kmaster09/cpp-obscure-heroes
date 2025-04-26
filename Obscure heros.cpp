#include <iostream>
#include <vector>
#include <string>

class Superhero {
public:
    Superhero(std::string name, std::string power, std::string Weakness, std::string Year, std::string Universe )
        : name(name), power(power), weakness(Weakness), Year(Year), Universe(Universe) {}

    void display() const {
        std::cout << "Name: " << name << "\n"
                  << "Power: " << power << "\n"
                  << "Weakness " << weakness << "\n"
                  << "Year: " << Year << "\n"
                  << "Universe " << Universe << "\n";
    }

private:
    std::string name;
    std::string power;
    std::string weakness;
    std::string Year;
    std::string Universe;
};

class SuperheroDatabase {
public:
    void addSuperhero(const Superhero& superhero) {
        superheroes.push_back(superhero);
    }

    void displaySuperheroes() const {
        for (const auto& superhero : superheroes) {
            superhero.display();
            std::cout << "----------------------\n";
        }
    }

private:
    std::vector<Superhero> superheroes;
};

int main() {
    SuperheroDatabase db;

    db.addSuperhero(Superhero("Matter Eater lad ", "Eating anything that is matter", "Eating any substance at super speed", "1962", "DC" ));
    db.addSuperhero(Superhero("FlatMan", "Being flat", "Water and lack of air", "1984", "Marvel" ));
    db.addSuperhero(Superhero("Kid Eternity", "Summon any good historical or mythological figure or animal by saying the word Eternity" , " If Keeper is absent Kid Eternity powers can malfunction in various ways" , "1942", "DC"));

    std::cout << "Obscure Superhero Database:\n";
    db.displaySuperheroes();

    return 0;
}
