/**
**   Aroy - Project
**
**   @file main.cpp
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
**   @brief  Main file for the Aroy project
**/

#include "../headers/mainwindow.hpp"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

/**
 * @brief qMain
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Aroy_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();
    return a.exec();
}
