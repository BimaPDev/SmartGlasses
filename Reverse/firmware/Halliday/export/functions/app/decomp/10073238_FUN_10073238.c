/* FUN_10073238 @ 0x10073238 */

undefined4 FUN_10073238(int param_1,char *param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  undefined1 local_31;
  undefined1 auStack_30 [5];
  byte local_2b;
  ushort local_2a;
  
  if (param_2 != (char *)0x0) {
    if (param_3 == 0) {
      if (param_4 != 0) {
        return 0xffffffea;
      }
    }
    else if (0x200 < (int)param_4) {
      return 0xffffffea;
    }
    iVar4 = FUN_1011ea10(param_2);
    if ((int)(iVar4 + 1U) < 0x71) {
      if ((int)param_4 < 1) {
        iVar4 = FUN_10072de4(param_1,param_2,auStack_30);
      }
      else {
        iVar5 = FUN_10072de4(param_1,param_2,auStack_30);
        puVar1 = DAT_100734a0;
        if ((0 < iVar5) && (param_4 == local_2a)) {
          iVar8 = 0;
          uVar10 = 0x80;
          uVar9 = param_4;
          do {
            if ((int)uVar9 <= (int)uVar10) {
              uVar10 = uVar9;
            }
            FUN_10072994(param_1,local_2b + 8 + iVar5 + iVar8,puVar1,uVar10);
            iVar11 = FUN_1011ea30(puVar1,param_3 + iVar8,uVar10);
            if (iVar11 != 0) goto LAB_10073282;
            uVar9 = uVar9 - uVar10;
            iVar8 = iVar8 + uVar10;
          } while (0 < (int)uVar9);
          if (uVar9 == 0) {
            return 0;
          }
        }
LAB_10073282:
        uVar9 = (iVar4 + 1U & 0xff) + param_4 + 0x17 & 0xfffffff0;
        if ((uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20)) <
            uVar9 + *(int *)(param_1 + 0x28)) {
          FUN_100731a8(param_1,0);
        }
        iVar4 = FUN_10072de4(param_1,param_2,auStack_30);
        puVar1 = DAT_100734a0;
        bVar12 = 0;
        iVar5 = *(int *)(param_1 + 0x28);
        *DAT_100734a0 = 0;
        *(undefined1 *)puVar1 = 0x49;
        *(undefined1 *)((int)puVar1 + 1) = 0xff;
        puVar1[1] = 0;
        cVar2 = FUN_1011ea10(param_2);
        uVar10 = (uint)(byte)(cVar2 + 1U);
        *(byte *)((int)puVar1 + 5) = cVar2 + 1U;
        for (pcVar7 = param_2; pcVar7 != param_2 + uVar10; pcVar7 = pcVar7 + 1) {
          bVar12 = bVar12 + *pcVar7;
        }
        *(byte *)((int)puVar1 + 3) = bVar12 ^ 0xa5;
        uVar6 = DAT_10073484;
        uVar13 = uVar10 + 8;
        iVar8 = param_4 + uVar13;
        *(short *)((int)puVar1 + 6) = (short)param_4;
        uVar6 = FUN_1007296c(uVar6,5,0);
        *(char *)((int)puVar1 + 2) = (char)uVar6;
        uVar6 = FUN_1007296c(param_2,uVar10,uVar6);
        *(char *)((int)puVar1 + 2) = (char)uVar6;
        uVar3 = FUN_1007296c(param_3,param_4,uVar6);
        *(undefined1 *)((int)puVar1 + 2) = uVar3;
        if (uVar13 < 0x81) {
          FUN_1013d03e(DAT_1007349c,param_2,uVar10,0x78);
          FUN_10072a48(param_1,iVar5,DAT_100734a0,uVar13);
          puVar1 = DAT_100734a0;
          iVar11 = 0;
          uVar10 = 0x80;
          do {
            if ((int)param_4 <= (int)uVar10) {
              uVar10 = param_4;
            }
            FUN_1013d03e(puVar1,param_3 + iVar11,uVar10,0x80);
            param_4 = param_4 - uVar10;
            FUN_10072a48(param_1,iVar5 + uVar13 + iVar11,puVar1,uVar10);
            iVar11 = iVar11 + uVar10;
          } while (0 < (int)param_4);
          if ((int)uVar9 < iVar8) {
            FUN_100a5b78(DAT_100734a4 | (DAT_1007348c - DAT_10073488) * 0x20 & 0xff00U,DAT_100734ac,
                         DAT_100734a8,uVar9,iVar8);
          }
        }
        else {
          FUN_100a5b78(DAT_10073490 | (DAT_1007348c - DAT_10073488) * 0x20 & 0xff00U,DAT_10073498,
                       DAT_10073494,uVar10);
        }
        FUN_1011f77e(*(undefined4 *)(param_1 + 0x30),
                     *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24),1);
        *(uint *)(param_1 + 0x28) = uVar9 + *(int *)(param_1 + 0x28);
      }
      if (0 < iVar4) {
        local_31 = 0x5a;
        FUN_10072a48(param_1,iVar4 + 1,&local_31);
        FUN_1011f77e(*(undefined4 *)(param_1 + 0x30),iVar4 - *(int *)(param_1 + 0x24),0);
      }
      return 0;
    }
  }
  return 0xffffffea;
}

