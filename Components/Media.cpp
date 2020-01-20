//
// Created by krzubuntu on 20.01.2020.
//

#include "Media.h"

Media::Media(File &f) {
    attributes = f.getFileAttributes();
    content = f.getFileContent();
    fileType = f.getFileType();
}