#include "Media.h"

Media::Media(const File &f) {
    attributes = f.getFileAttributes();
    content = f.getFileContent();
}

bool Media::isCycle(const Component *element) {
    return false;
}
