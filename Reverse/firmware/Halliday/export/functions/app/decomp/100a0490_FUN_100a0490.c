/* FUN_100a0490 @ 0x100a0490 */

int FUN_100a0490(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar4;
  undefined4 *puVar3;
  
  iVar1 = FUN_100a0310(param_1,2);
  if (iVar1 == 0) {
    return -0x58;
  }
  if (*(int *)(*(int *)(param_1 + 0x50) + 0xc) == 0) {
    return -0x58;
  }
  if (param_3 == 1) {
    if ((*(byte *)(param_1 + 1) & 3) == 2) {
      iVar1 = *(int *)(param_1 + 8);
    }
    else {
      iVar1 = *(int *)(param_1 + 4);
    }
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 0) {
        FUN_100a5b78((DAT_100a0598 - DAT_100a0594) * 0x20 & 0xff00U | 0xd40011,DAT_100a05a0,
                     DAT_100a05a4,param_3);
        return -1;
      }
      goto LAB_100a04c2;
    }
    iVar1 = *(int *)(param_1 + 0x14);
  }
  param_2 = param_2 + iVar1;
LAB_100a04c2:
  if ((*(byte *)(param_1 + 1) & 3) == 3) {
    while (*(uint *)(param_1 + 8) < param_2) {
      FUN_1011dbde(*(undefined4 *)(param_1 + 0x18),0x32);
      iVar1 = FUN_100a0310(param_1,2);
      if (iVar1 == 0) {
        return -0x58;
      }
    }
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(param_1,param_2,0);
  if (-1 < iVar1) {
    pbVar4 = (byte *)(param_1 + 0x24);
    puVar2 = (undefined4 *)(param_1 + 0x28);
    do {
      puVar3 = puVar2 + 1;
      if (((code *)*puVar2 != (code *)0x0) && ((int)((uint)*pbVar4 << 0x1d) < 0)) {
        (*(code *)*puVar2)(puVar2[-3],*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                           *(undefined4 *)(param_1 + 0x14),0,0,4);
      }
      pbVar4 = pbVar4 + 1;
      puVar2 = puVar3;
    } while ((undefined4 *)(param_1 + 0x30) != puVar3);
    return iVar1;
  }
  FUN_100a5b78((DAT_100a0598 - DAT_100a0594) * 0x20 & 0xff00U | 0xe30011,DAT_100a05a0,DAT_100a059c,
               iVar1);
  return iVar1;
}

