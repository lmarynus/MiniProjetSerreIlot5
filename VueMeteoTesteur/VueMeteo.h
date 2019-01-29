/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.h
 * Author: snir2g2
 *
 * Created on 10 janvier 2019, 16:46
 */

#ifndef _VUEMETEO_H
#define _VUEMETEO_H

#include "ui_VueMeteo.h"
#include <iostream>
#include "../ClassesMetier/Observable.h"
#include "../ClassesMetier/BulletinMeteo.h"
using namespace std;

class VueMeteo : public QWidget, public Observateur {
    Q_OBJECT
public:
    VueMeteo();
    VueMeteo(BulletinMeteo *dernierBulletinMeteo);
    void mettreAJour();
    virtual ~VueMeteo();
private:
    Ui::VueMeteo widget;
    BulletinMeteo *dernierBulletinMeteo;
};

#endif /* _VUEMETEO_H */
