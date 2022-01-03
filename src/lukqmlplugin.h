#ifndef LUKQMLPLUGIN_H
#define LUKQMLPLUGIN_H

#include <QQmlExtensionPlugin>

class Q_DECL_EXPORT LukQmlPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "LukQmlPlugin")

public:
    explicit LukQmlPlugin(QObject *parent = nullptr);

    virtual void registerTypes(const char *uri) override;
};

#endif // LUKQMLPLUGIN_H
