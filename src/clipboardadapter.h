#ifndef CLIPBOARDADAPTER_H
#define CLIPBOARDADAPTER_H

#include <QClipboard>
#include <QQmlEngine>

class ClipboardAdapter : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(ClipboardAdapter)
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)

public:
    explicit ClipboardAdapter(QObject *parent = nullptr);

    static QObject *singletonTypeProvider(QQmlEngine*, QJSEngine*) { return new ClipboardAdapter; }

    Q_INVOKABLE void clear();

signals:
    void textChanged();

private:
    QClipboard *m_clipboard;

private:
    QString text() const;
    void setText(const QString &text);
};

#endif // CLIPBOARDADAPTER_H
