#include "File.h"

void File::setOpenStatus() {
    opened = true;
}

File::File(std::string& s) : opened(false) {
}
