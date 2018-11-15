#if !defined(SKELETON_H)
#define SKELETON_H

#include <string>
#include <vector>
#include <ostream>

namespace Application {

/**
 * @brief Base Base class
 * 
 */
class Base {
public:
    // Public Interface

    // Version Struct
    typedef struct Version_s {
        int major;
        int minor;
        int patch;
        int compile;
    } Version_t, *Version_p;

    // Constructor && Destructor
    Base(){};
    virtual ~Base(){};

    // Methods
    virtual int main(std::vector<std::string>& params) = 0;

protected:
    // Private Interface
    // Methods
    virtual int               main() = 0;
    virtual int               size() = 0;
    virtual const std::string name() = 0;
    virtual void              help() = 0;
    virtual std::string       name() const = 0;
    virtual void              name(const std::string& name) = 0;
    virtual Version_t         version() const = 0;
    virtual void              version(const Version_t& version) = 0;

    // Data Members
    std::string              app_name;
    std::vector<std::string> app_description;
    Version_t                version_number;
};

/**
 * @brief Eric: Add brief
 * 
 * @param out the output stream 
 * @param obj the object being written to the output stream
 * @return std::ostream& 
 */
inline std::ostream& operator<<(std::ostream& out, const Base::Version_t& obj)
{
    return out << obj.major << "." << obj.minor << "." << obj.patch << "." << obj.compile;
}

}  // namespace Application

#endif  // Skeleton_H