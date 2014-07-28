class Professor {
    private:
        char name[32];
        int room;
    public:
        Professor(const char* _name);
        ~Professor();
        void SetRoom(int _room);
        int GetRoom();
        char* GetName();
};
