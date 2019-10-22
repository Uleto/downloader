#ifndef ULETO_DOWNLOADER_H
#define ULETO_DOWNLOADER_H

#include "uletodownloader_global.h"

#include <QtNetwork>

namespace Uleto
{

class ULETO_DOWNLOADERSHARED_EXPORT Downloader : public QObject
{
    Q_OBJECT
public:
    Downloader();
};

}

#endif // ULETO_DOWNLOADER_H
