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

enum camino_quest {
    NPC_AYSA = 59962,
    NPC_JI = 59960,
    NPC_JO = 59963,
    NPC_KORGA = 60042,
    NPC_WEI = 55943,
    GOB_MADORI1 = 21000691,
    GOB_MADORI2 = 21000327,
    GOB_PEI_WI1 = 21000692,
    GOB_PEI_WI2 = 21000328
};


enum eAysaCloudsinger
{
    SAY_AYSA_1 = 0,
    SAY_AYSA_2 = 1,
    SAY_AYSA_3 = 2,
    SAY_AYSA_4 = 3,
    SAY_JI_1 = 0,
    SAY_JI_2 = 1,
    SAY_KORGA_1 = 0,
    SAY_KORGA_2 = 1,
    SAY_WEI_1 = 0,
};

enum data_eventos_aysa {
    DATA_AYSA_TALK = 1,
    DATA_AYSA_OPEN = 2,
    DATA_RUN_ONE_1 = 3,
    DATA_RUN_ONE_2 = 4,
    DATA_RUN_ONE_3 = 5,
    DATA_RUN_ONE_4 = 6,
    DATA_RUN_TWO = 7,
    DATA_RUN_THEREE = 8,
    DATA_STOP_RUN_AYSA = 9,
    DATA_STOP_TALK_AYSA1 = 10,
    DATA_STOP_TALK_AYSA2 = 11,
    DATA_TALK_JI1 = 12,
    DATA_MOVE_JI = 13,
    DATA_TALK_JI2 = 14,
    DATA_MOVE_JO = 15,
    DATA_MOVE_ATACK = 16,
    DATA_RUN_FOR_1 = 17,
    DATA_RUN_FOR_2 = 18,
    DATA_RUN_FOR_3 = 19,
    DATA_RUN_FOR_4 = 20,
    DATA_RUN_FOR_5 = 21,
    DATA_RUN_FOR_6 = 22,
    DATA_TALK_KORGA1 = 23,
    DATA_TALK_WEI = 24,
    DATA_TALK_KORGA2 = 25,
    DATA_TALK_KOGA3 = 26
};


class zone_the_wandering_isle {
public:
    static zone_the_wandering_isle* instance();

  
    int statusQuest = 0; //1 = phase1 , 2 == phase2, 3 == phase3
    void phaseMisionVisible(Player* player, bool estado = true);
    void killObjectQuest(Player* player,int32 quetsId, int32 objetive);
    void phase(Player* player,int32 phase, bool status);
    static ObjectGuid::LowType activeGo(Player *player, int32 objeGuid) {
        GameObject* go = ChatHandler(player->GetSession()).GetObjectFromPlayerMapByDbGuid(objeGuid);
        go->SetLootState(GO_READY);
        go->UseDoorOrButton(10000, false, player);
        return true;
    }
    void startEvent(Player* player);

    bool status = false;
};

#define WIsmision zone_the_wandering_isle::instance()
#endif
