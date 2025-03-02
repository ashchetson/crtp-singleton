
template <typename T>
class Singleton {
public:
    // Returns the single instance of the class
    static T& getInstance() {
        static T instance; // The instance is created only once
        return instance;
    }

protected:
    Singleton() = default; // Default constructor
    ~Singleton() = default; // Default destructor

    // Disable copy and assignment to ensure only one instance
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};
