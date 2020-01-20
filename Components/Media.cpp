#include "Media.h"

Media::Media(const File &f) {
    attributes = f.getFileAttributes();
    content = f.getFileContent();
    fileType = f.getFileType();
}