/* FUN_1004b420 @ 0x1004b420 */

char FUN_1004b420(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  pcVar1 = DAT_1004b4f4;
  cVar8 = *DAT_1004b4f4;
  iVar5 = *DAT_1004b4d0;
  if (cVar8 != '\0') goto LAB_1004b44c;
LAB_1004b43c:
  cVar8 = '\0';
LAB_1004b43e:
  do {
    if (*DAT_1004b4d0 == iVar5) {
      return cVar8;
    }
    FUN_1013cdc0();
LAB_1004b44c:
    pbVar2 = DAT_1004b4f8;
    iVar4 = DAT_1004b4d4;
    (**(code **)(DAT_1004b4d4 + 0x10))();
    iVar3 = DAT_1004b4fc;
    uVar6 = (uint)*pbVar2;
    uVar7 = (DAT_1004b4d8 - DAT_1004b4dc) * 0x20 & 0xff00;
    FUN_100a5b78(uVar7 | 0x650034,DAT_1004b4e0,DAT_1004b4e4,uVar6,*pcVar1,param_1,
                 *(undefined4 *)(DAT_1004b4fc + uVar6 * 4));
    uVar6 = (uint)*pbVar2;
    if (8 < uVar6) goto LAB_1004b43c;
    if (*DAT_1004b4e8 == '\0') {
      if (*(int *)(iVar3 + uVar6 * 4) == param_1) {
        *DAT_1004b4e8 = '\x01';
        goto LAB_1004b43e;
      }
      (**(code **)(DAT_1004b4ec + 0xc))(0x12);
    }
    iVar4 = (**(code **)(iVar4 + 0x18))();
    if (iVar4 != 0) goto LAB_1004b43c;
    FUN_100a5b78(uVar7 | 0x7c0031,DAT_1004b4e0,DAT_1004b4f0);
  } while( true );
}

