#ifndef __ZONE_THE_WANDERING_ISLE_H
#define __ZONE_THE_WANDERING_ISLE_H
#include "Player.h"

enum QuestIDMision
{
    QUEST_MISION_HIERRO = 29524,
    QUEST_MISION_LENA = 29418,
    QUEST_MISION_ESPIRITU = 29678,
    QUEST_MISION_SABIDURIA = 29790,
    QUEST_MISION_CAMINO_G = 29792
};
enum spellQuestFase
{
    UPDATE_ZONE_AREA = 93425
};

enum objetos_eventos {
    objeto1 = 59946,
    objeto2 = 59947
};


class zone_the_wandering_isle {
private:

public:
    static zone_the_wandering_isle* instance();

    void phaseMisionVisible(Player* player, bool estado = true);
};



#define WIsmision zone_the_wandering_isle::instance()
#endif
