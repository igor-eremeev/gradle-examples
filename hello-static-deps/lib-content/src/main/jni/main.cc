#include <string>

namespace base { int getValue(); }

namespace content {
    std::string getAnswer() {
        return std::string("The answer is ") + std::to_string(base::getValue());
    }
}
