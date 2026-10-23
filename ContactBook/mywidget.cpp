#include "mywidget.h"
#include "ui_mywidget.h"
#include <QFileDialog>
#include <QTextStream>
#include <QTableWidgetItem>
#include <QFile>
#include <QDebug>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::MyWidget)
{

    ui->setupUi(this);
    ui->contactBook->setColumnCount(4);
    QStringList colTotal;
    colTotal << "學號" << "班級" << "姓名" << "電話";
    ui->contactBook->setHorizontalHeaderLabels(colTotal);


}

MyWidget::~MyWidget()
{
    delete ui;
}
void  MyWidget::on_insertButton_clicked(){
    QTableWidgetItem *col1, *col2, *col3, *col4;
    col1 = new QTableWidgetItem(ui->lineEdit_1->text());
    col2 = new QTableWidgetItem(ui->lineEdit_2->text());
    col3 = new QTableWidgetItem(ui->lineEdit_3->text());
    col4 = new QTableWidgetItem(ui->lineEdit_4->text());
    int row = ui->contactBook->rowCount();
    qDebug() << row;
    ui->contactBook->insertRow(ui->contactBook->rowCount()); //新增一列(在第幾列)
    ui->contactBook->setItem(row, 0, col1);
    ui->contactBook->setItem(row, 1, col2);
    ui->contactBook->setItem(row, 2, col3);
    ui->contactBook->setItem(row, 3, col4);
}
void CbWrite(QString fileName, QString str){
    QFile outFile(fileName); //定義對應檔案名稱fileName的檔案物件(outFile)
    if(!outFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug() << "Open File failed!";
        return;
    }
    QTextStream out(&outFile); // 格式化串流類別(data--->out-->outFile-->disk)
    out << str;
    outFile.flush();
    outFile.close();
}

void MyWidget::on_exportButton_clicked(){
    QString fileName;
    QString saveStr;
    fileName = QFileDialog::getSaveFileName(this, "匯出通訊錄", ".", "csv(*.csv);;text(*.txt)");

    for(int i = 0; i < ui->contactBook->rowCount();i++){
        for(int j = 0; j < ui->contactBook->columnCount();j++ ){
            saveStr += ui->contactBook->item(i,j)->text()+",";
        }
        saveStr += "\n";
    }
    CbWrite(fileName, saveStr);
}


void MyWidget::on_importButton_clicked(){
    QString fileName = QFileDialog::getOpenFileName(this, "匯入通訊錄", ".", "csv(*.csv);;text(*.txt)");
    if(fileName.isEmpty()) return;              // 使用者按取消

    QFile inFile(fileName);
    if(!inFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Open File failed!";
        return;
    }
    QTextStream in(&inFile);                    // disk-->inFile-->in-->data
    while(!in.atEnd()){
        QString line = in.readLine();           // 讀一行
        if(line.trimmed().isEmpty()) continue;  // 跳過空行

        QStringList fields = line.split(",");   // "A,B,C,D," → [A][B][C][D][""]
        int row = ui->contactBook->rowCount();
        ui->contactBook->insertRow(row);
        for(int j = 0; j < 4; j++){             // 只取前 4 欄
            QString text = (j < fields.size()) ? fields[j] : "";
            ui->contactBook->setItem(row, j, new QTableWidgetItem(text));
        }
    }
    inFile.close();
}