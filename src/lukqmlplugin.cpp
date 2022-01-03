#include "lukqmlplugin.h"

#include "clipboardadapter.h"

#include <QtQml>

constexpr int versionMajor = 1;
constexpr int versionMinor = 0;

#define registerType(name) qmlRegisterType(QUrl(QStringLiteral("qrc:/qml/components/" name ".qml")), uri, versionMajor, versionMinor, name)



LukQmlPlugin::LukQmlPlugin(QObject *parent) : QQmlExtensionPlugin(parent)
{
}



void LukQmlPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("LukQml"));

    qmlRegisterSingletonType(QUrl(QStringLiteral("qrc:/qml/themes/Theme.qml")), uri, versionMajor, versionMinor, "Theme");
    qmlRegisterSingletonType<ClipboardAdapter>(uri, versionMajor, versionMinor, "ClipboardAdapter", &ClipboardAdapter::singletonTypeProvider);

    registerType("BackRectangle");
    registerType("Button");
    registerType("CheckBox");
    registerType("ComboBox");
    registerType("MenuItem");
    registerType("Switch");
    registerType("TextField");
}
