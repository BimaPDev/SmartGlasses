/* FUN_100c8a34 @ 0x100c8a34 */

int FUN_100c8a34(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar6;
  undefined4 *puVar5;
  
  piVar1 = DAT_100c8ab4;
  if (*DAT_100c8ab4 == param_2) {
    iVar2 = -0x78;
  }
  else {
    if ((*DAT_100c8ab4 == 0) && (iVar2 = FUN_10132e28(DAT_100c8ab8), -1 < iVar2 << 0x1b)) {
      uVar6 = FUN_10132e28(DAT_100c8ab8);
      if (-1 < (int)uVar6 << 0x1c) {
        return -0x7d;
      }
      *piVar1 = (int)((ulonglong)uVar6 >> 0x20);
      iVar2 = FUN_100c5d4c(0x2026,0x40);
      if (iVar2 == 0) {
        *piVar1 = 0;
        return -0x69;
      }
      puVar3 = (undefined4 *)FUN_100c1fe4(iVar2 + 8,0x40);
      puVar4 = param_1;
      do {
        puVar5 = puVar4 + 1;
        *puVar3 = *puVar4;
        puVar3 = puVar3 + 1;
        puVar4 = puVar5;
      } while (puVar5 != param_1 + 0x10);
      iVar2 = FUN_100c5e48(0x2026,iVar2,0,puVar5,param_4);
      if (iVar2 == 0) {
        return 0;
      }
      *piVar1 = 0;
      return iVar2;
    }
    iVar2 = -0x10;
  }
  return iVar2;
}

