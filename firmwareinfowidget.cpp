#include "firmwareinfowidget.h"
#include "ui_firmwareinfowidget.h"

FirmwareInfoWidget::FirmwareInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FirmwareInfoWidget)
{
    ui->setupUi(this);
}

FirmwareInfoWidget::~FirmwareInfoWidget()
{
    delete ui;
}

