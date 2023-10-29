#ifndef DEVICEDETAILDIALOG_H
#define DEVICEDETAILDIALOG_H

#include <QDialog>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class DeviceDetailDialog;
}

class DeviceDetailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeviceDetailDialog(QWidget *parent = nullptr);
    ~DeviceDetailDialog();

private:
    Ui::DeviceDetailDialog *ui;
};

#endif // DEVICEDETAILDIALOG_H
