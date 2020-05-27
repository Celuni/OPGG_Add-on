﻿#ifndef OBSERVERFILEMANAGER_H
#define OBSERVERFILEMANAGER_H

#include <QObject>
#include <functional>
#include <QJSValue>

class ObserverFileManager : public QObject
{
    Q_OBJECT
public:
    explicit ObserverFileManager(QObject *parent = nullptr);
    static void runProcess(const QString &filePath, std::function<void(int)>exitCallback);
    Q_INVOKABLE static void runProcess(const QString &filePath, const QJSValue &exitCallback);
    Q_INVOKABLE static bool removeFile(const QString &filePath);
    Q_INVOKABLE static bool isObserverFile(const QString &filePath);

public slots:

private:
};

#endif // OBSERVERFILEMANAGER_H
