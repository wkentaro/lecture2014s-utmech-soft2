/* professor3.h */
class Professor : public LabMember {
    private:
        int room;
    public:
        Professor(char* _name) : LabMember(_name) {
            room = 0;
        }
        ~Professor() {
        }
        void SetName(char* _name) {
            sprintf(name, "Prof. %s", _name);
        }
        void SetRoom(int _room) {
            room = _room;
        }
        int GetRoom() {
            return room;
        }
};
