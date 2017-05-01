#ifndef CANRAWSENDER_H
#define CANRAWSENDER_H

#include <QScopedPointer>
#include <QWidget>

class QCanBusFrame;
class CanRawSenderPrivate;

class CanRawSender : public QWidget {
    Q_OBJECT
    Q_DECLARE_PRIVATE(CanRawSender)

public:
    explicit CanRawSender(QWidget* parent = 0);
    ~CanRawSender();

signals:
    void sendFrame(const QCanBusFrame& frame, const QVariant& context);

public slots:
    void start();
    void stop();

private:
    QScopedPointer<CanRawSenderPrivate> d_ptr;
};

#endif // CANRAWSENDER_H
