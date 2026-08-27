/* FUN_140a6bdc @ 0x140a6bdc */

undefined4 FUN_140a6bdc(int *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar2 = DAT_140a6cd0;
  pcVar4 = DAT_140a6ccc;
  iVar6 = *param_1;
  if (iVar6 == 1) {
    cVar1 = *DAT_140a6ccc;
    DAT_140a6cd0[2] = cVar1;
    *pcVar4 = cVar1 + '\x01';
    pcVar2[3] = '\x02';
    pcVar2[4] = -0x56;
    pcVar2[5] = 'U';
    pcVar2[1] = -0x78;
    pcVar4 = DAT_140a6cd4;
    bVar5 = 0;
    pcVar7 = pcVar2;
    do {
      pcVar3 = pcVar7 + 1;
      bVar5 = bVar5 + *pcVar7;
      pcVar7 = pcVar3;
    } while (pcVar3 != pcVar2 + 6);
    pcVar2[6] = ~bVar5;
    do {
      pcVar4 = pcVar4 + 1;
      FUN_1402c954(0,*pcVar4);
    } while (pcVar4 != pcVar2 + 6);
    iVar6 = *param_1;
    pcVar2 = DAT_140a6cd0;
  }
  pcVar4 = DAT_140a6ccc;
  if (iVar6 == 2) {
    DAT_140a6cd0 = pcVar2;
    pcVar2[3] = '\x02';
    pcVar2[1] = -0x78;
    pcVar2[5] = 'd';
    pcVar4 = DAT_140a6ccc;
    bVar5 = 0;
    pcVar2[4] = (char)param_1[2];
    cVar1 = *pcVar4;
    pcVar2[2] = cVar1;
    *pcVar4 = cVar1 + '\x01';
    pcVar4 = DAT_140a6cd4;
    pcVar7 = pcVar2;
    do {
      pcVar3 = pcVar7 + 1;
      bVar5 = bVar5 + *pcVar7;
      pcVar7 = pcVar3;
    } while (pcVar3 != pcVar2 + 6);
    pcVar2[6] = ~bVar5;
    do {
      pcVar4 = pcVar4 + 1;
      FUN_1402c954(0,*pcVar4);
    } while (pcVar4 != pcVar2 + 6);
    iVar6 = *param_1;
    pcVar4 = DAT_140a6ccc;
    pcVar2 = DAT_140a6cd0;
  }
  if (iVar6 == 3) {
    DAT_140a6ccc = pcVar4;
    DAT_140a6cd0 = pcVar2;
    *(int *)(pcVar2 + 5) = param_1[2];
    cVar1 = *pcVar4;
    pcVar7 = pcVar2 + -1;
    pcVar2[2] = cVar1;
    *pcVar4 = cVar1 + '\x01';
    pcVar2[3] = '\x04';
    pcVar2[4] = -0xe;
    bVar5 = 0;
    pcVar2[1] = -0x78;
    pcVar3 = DAT_140a6cd8;
    pcVar4 = pcVar7;
    do {
      pcVar4 = pcVar4 + 1;
      bVar5 = bVar5 + *pcVar4;
    } while (pcVar2 + 7 != pcVar4);
    pcVar2[8] = ~bVar5;
    do {
      pcVar7 = pcVar7 + 1;
      FUN_1402c954(0,*pcVar7);
    } while (pcVar7 != pcVar3);
    return 0;
  }
  DAT_140a6ccc = pcVar4;
  DAT_140a6cd0 = pcVar2;
  return 0;
}

