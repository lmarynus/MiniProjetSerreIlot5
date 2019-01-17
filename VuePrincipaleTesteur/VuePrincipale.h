/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g2
 *
 * Created on 17 janvier 2019, 13:54
 */

#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"
#include  "../VueMeteoTesteur/VueMeteo.h"
#include "../VueSerreTesteur/VueSerre.h"

class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
    virtual ~VuePrincipale();
    VueMeteo* getLaVueMeteo();
    void mettreAJour();
private:
    Ui::VuePrincipale widget;
    VueMeteo* laVueMeteo;
    VueSerre* laVueSerre[3];
    
};

#endif /* _VUEPRINCIPALE_H */
