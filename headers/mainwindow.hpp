/**
**   Aroy - Project
**
**   @file mainwindow.hpp
**
**   Created
**   @date 28/10/2023
**
**    by
**    @author Simon
**
**
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
**   @brief  Header file for the MainWindow class
**/

#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    //! Macro for class information
    Q_OBJECT

public:
    /**
     * @brief MainWindow
     * @param parent
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * @brief ~MainWindow
     */
    ~MainWindow();

private:
    //! @brief ui
    Ui::MainWindow *ui;
};
