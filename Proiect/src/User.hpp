#ifndef USER_HPP
#define USER_HPP

//namespace BookingAPP {

class User{
    private:
        int id;
        char* nume;
    public:
        User();
        User(int,char*);

        User(const User&);
        User(User&&);
        
        ~User();

    public:
        void setID(int);
        void setNume(char*);

        int getID();
        char* getNume();
};

//} // namespace BookingAPP

#endif // USER__APP