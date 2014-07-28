class LabMember {
    protected:
        char name[32];

    public:
        LabMember(const char* _name) {
            strcpy(name, _name);
        }
        ~LabMember() {
        }
        void SetName(char* _name) {
            sprintf(name, "Mr. %s", _name);
        }
        char* GetName() {
            return name;
        }
};
