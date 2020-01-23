#include "Media.h"


Media::Media(const File &f) {
    attributes = f.getFileAttributes();
    content = f.getFileContent();
}

bool Media::isCycle(Component *element) {
    return false;
}
