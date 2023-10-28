/**
**   Aroy - Project
**
**   @file mainwindow.hpp
**   Created @date{28/10/2023 2023} by @author{Simon}
**   Copyright 2023 | Simon
**
**   Licensed under the GNU Lesser General Public License Version 3;
**   you may not use this file except in compliance with the License.
**   You may obtain a copy of the License at
**
**     https://www.gnu.org/licenses/agpl-3.0.html
**
**   The above copyright notice and this permission notice shall be included in
**   all copies or substantial portions of the Software.
**
**   @brief  Source file for the MainWindow class
**/

#include "../headers/mainwindow.hpp"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

