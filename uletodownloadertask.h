#ifndef ULETO_DOWNLOADERTASK_H
#define ULETO_DOWNLOADERTASK_H

#include "uletodownloader_global.h"

#include <QRunnable>

namespace Uleto
{

class ULETO_DOWNLOADERSHARED_EXPORT DownloaderTask : public QRunnable
{
public:
    DownloaderTask();
    virtual ~DownloaderTask();
private:
};

}

#endif // ULETO_DOWNLOADERTASK_H
