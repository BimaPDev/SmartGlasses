/* FUN_140bdb20 @ 0x140bdb20 */

void FUN_140bdb20(undefined4 param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_40 [4];
  uint local_3c [2];
  int local_34;
  
  iVar1 = -(param_4 * 4 + 7U & 0x7f8);
  puVar3 = auStack_40 + iVar1;
  local_34 = *DAT_140bdc38;
  uVar8 = (uint)param_5;
  FUN_140e5278(auStack_40 + iVar1,param_1);
  iVar2 = DAT_140bdc3c;
  iVar7 = 0;
  iVar6 = param_3;
  do {
    iVar4 = 0;
    do {
      puVar3[iVar4 * 4] = puVar3[iVar4 * 4] ^ *(byte *)(iVar6 + iVar4 * 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    iVar7 = iVar7 + 1;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar7 != 4);
  if (uVar8 != 0) {
    iVar6 = 0x10;
    uVar9 = 0;
    local_3c[0] = uVar8 - 1;
    puVar3 = auStack_40 + iVar1;
    do {
      do {
        iVar7 = 0;
        do {
          puVar3[iVar7 * 4] = *(undefined1 *)(iVar2 + (uint)(byte)puVar3[iVar7 * 4]);
          iVar7 = iVar7 + 1;
        } while (iVar7 != 4);
        puVar3 = puVar3 + 1;
      } while ((undefined1 *)((int)local_3c + iVar1) != puVar3);
      FUN_140bd978(auStack_40 + iVar1);
      if (uVar9 != local_3c[0]) {
        FUN_140bda74(auStack_40 + iVar1);
      }
      iVar4 = 0;
      iVar7 = param_3 + iVar6;
      puVar3 = auStack_40 + iVar1;
      do {
        iVar5 = 0;
        do {
          puVar3[iVar5 * 4] = puVar3[iVar5 * 4] ^ *(byte *)(iVar7 + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 4);
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar4 != 4);
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + 0x10;
      puVar3 = auStack_40 + iVar1;
    } while (uVar8 != uVar9);
  }
  FUN_140e5278(param_2,auStack_40 + iVar1,param_4 * 4);
  if (*DAT_140bdc38 != local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

