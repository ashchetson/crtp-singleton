
class UsageExample : public Singleton<UsageExample> {
    // Allow Singleton to create an instance of UsageExample
    friend class Singleton<UsageExample>;
private:
    UsageExample() = default; // Private constructor
public:
    void sayHello() const;
};
