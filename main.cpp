//  -------------------------------------------------
//  Project created by QtCreator 2011-04-30T21:17:32
// -----------------------------------------------------
// 
//   elboukhari Copyright (C) 2011  yahia nouah <yahiaui@gmail.com>
// 
//      This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
//      This is free software, and you are welcome to redistribute it
//      under certain conditions; type `show c' for details.
//  
//  The hypothetical commands `show w' and `show c' should show the appropriate
//  parts of the General Public License.  Of course, your program's commands
//  might be different; for a GUI interface, you would use an "about box".
//  
//    You should also get your employer (if you work as a programmer) or school,
//  if any, to sign a "copyright disclaimer" for the program, if necessary.
//  For more information on this, and how to apply and follow the GNU GPL, see
//  <http://www.gnu.org/licenses/>.
//  
//    The GNU General Public License does not permit incorporating your program
//  into proprietary programs.  If your program is a subroutine library, you
//  may consider it more useful to permit linking proprietary applications with
//  the library.  If this is what you want to do, use the GNU Lesser General
//  Public License instead of this License.  But first, please read
//  <http://www.gnu.org/philosophy/why-not-lgpl.html>.
// ----------------------------------------------------------

#include <QApplication>
#include "mainwindow.h"
#include <QSplashScreen>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("El boukhari");
    a.setOrganizationName("Abouzakaria");
    QPixmap pixmap(":/images/sahih.png");
    QSplashScreen splash(pixmap);


    splash.show();
     a.processEvents();
      QIcon icon;
     icon.addPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")), QIcon::Normal, QIcon::Off);
     a.setWindowIcon(icon);
    MainWindow w;
    w.show();
     splash.finish(&w);
     w.resize(750,585);
    return a.exec();
}
