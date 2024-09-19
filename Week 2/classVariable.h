// Class Variables - Header
// classVariable.h

class Horse
{
    unsigned age;             // <-- this is an instance variable
    unsigned id;              // <-- this is an instance variable
    static unsigned noHorses;
public:
     // <-- this is a class variable
    static unsigned deleted;
    Horse(unsigned a);
    ~Horse();

    static unsigned howMany();

    void display() const;
};

