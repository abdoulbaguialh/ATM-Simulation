#ifndef TEST_H
#define TEST_H


class test
{
    public:
        /** Default constructor */
        test(int val);
        /** Copy constructor
         *  \param other Object to copy from
         */
        test(const test& other);

        /** Access data
         * \return The current value of data
         */
        int Getdata() { return data; }
        /** Set data
         * \param val New value to set
         */
        void Setdata(int val) { data = val; }
        /** Access fooo
         * \return The current value of fooo
         */
        unsigned int Getfooo() { return fooo; }
        /** Set fooo
         * \param val New value to set
         */
        void Setfooo(unsigned int val) { fooo = val; }

    protected:

    private:
        int data; //!< Member variable "data"
        unsigned int fooo; //!< Member variable "fooo"
};

#endif // TEST_H
