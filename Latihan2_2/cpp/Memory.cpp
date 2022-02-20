#include "Hardware.cpp"

class Memory: public Hardware
{
    // atribut private
    private:
        string freq;
        string mSize;
        string sCuda;
        
    public:
        // constructor kosong
        Memory() {
        }
        // constructor
        Memory(string freq, string mSize, string sCuda) {
            this->freq = freq;
            this->mSize = mSize;
            this->sCuda = sCuda;
        }

        // set memory freq
        void set_freq(string freq) {
            this->freq = freq;
        }
        // get memory freq
        string get_freq() {
            return this->freq;
        }

        // set memory mSize
        void set_mSize(string mSize) {
            this->mSize = mSize;
        }
        // get memory mSize
        string get_mSize() {
            return this->mSize;
        }
        
        // set memory SupportCuda
        void set_sCuda(string sCuda) {
            this->sCuda = sCuda;
        }
        // get memory supportCuda
        string get_sCuda() {
            return this->sCuda;
        }

        // destructor
        ~Memory() {
        }
};