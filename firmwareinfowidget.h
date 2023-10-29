#ifndef FIRMWAREINFOWIDGET_H
#define FIRMWAREINFOWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class FirmwareInfoWidget; }
QT_END_NAMESPACE

class FirmwareInfoWidget : public QWidget
{
    Q_OBJECT

public:
    FirmwareInfoWidget(QWidget *parent = nullptr);
    ~FirmwareInfoWidget();

private:
    Ui::FirmwareInfoWidget *ui;
};
#endif // FIRMWAREINFOWIDGET_H
