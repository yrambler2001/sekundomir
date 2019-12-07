#include "sekundomir.h"

Sekundomir::Sekundomir() :
    mRunning(false),
    mTotalTime(0),
    mTempTime(0)
{
}

void Sekundomir::start()
{
    mStartTime = QDateTime::currentDateTime();
    mRunning = true;
}

void Sekundomir::pause()
{
    mTotalTime += mTempTime;
    mRunning = false;
}

void Sekundomir::resume()
{
    mRunning = true;
}

void Sekundomir::reset()
{
    mTotalTime = 0;
    mRunning = false;
}

bool Sekundomir::isRunning()
{
    return mRunning;
}

void Sekundomir::setRunning(bool running)
{
    mRunning = running;
}

qint64 Sekundomir::getTime()
{
    mTempTime = mStartTime.msecsTo(QDateTime::currentDateTime());
    qint64 time = mTotalTime + mTempTime;
    return time;
}
