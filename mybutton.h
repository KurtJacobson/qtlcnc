#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QStringList>
#include "layoutobject.h"
#include "state.h"

class MyState;

class MyButton: public MyLayoutObject
{
public:
    MyButton(QStringList & sl, LayoutData *ld, int init_state);
    void drawLayoutObject(QPainter& p, QPoint &loffset);
    void selectLayoutObject();
    void setLayoutObjectStatus();
    void getLayoutObjectStatus();
    void setLayoutObjectPropertiy();
    void getLayoutObjectPropertiy();
    bool isCursorOver(QPoint &pos);
    bool setState(int state);
    MyState* getActiveState(LayoutData* ld, QString state_name);
    int getStateIndex();
    QString get_active_state_command();
    QString get_update_command();
    QString get_update_group_command();
    QString get_peek_mask(); // A pattern to process
    void removeQuotes( QString & str);
    QString get_value();
    void set_value(QString val);
    QString get_change_state_script();

private:

    QStringList elements;   // this list contains the states button can have.
    int current_state;      // if the more than one state possible this index keep it.
    LayoutData * ld_local;  // save the pointer to the data while initializing;

};

#endif // MYBUTTON_H
