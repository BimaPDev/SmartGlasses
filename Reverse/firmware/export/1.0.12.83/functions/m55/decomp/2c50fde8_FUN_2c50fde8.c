/* FUN_2c50fde8 @ 0x2c50fde8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50fde8(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c50ff74;
  iVar8 = param_2 + 0x30;
  FUN_2c62e838(param_2,_LAB_2c50ff78,param_3,0);
  FUN_2c62e838(param_2,_LAB_2c50ff7c);
  FUN_2c62e838(param_2,_DAT_2c50ff80);
  iVar5 = FUN_2c62ca10(iVar8);
  while (iVar5 != 0) {
    FUN_2c62c998(iVar8,iVar5);
    FUN_2c62bea8(iVar5);
    iVar5 = FUN_2c62ca10(iVar8);
  }
  iVar8 = param_2 + 0x24;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  iVar5 = FUN_2c62ca10(iVar8);
  while (iVar5 != 0) {
    FUN_2c62c998(iVar8,iVar5);
    FUN_2c62bea8(iVar5);
    iVar5 = FUN_2c62ca10(iVar8);
  }
  bVar1 = *(byte *)(param_2 + 0x40c);
  if (bVar1 != 0) {
    iVar5 = 0;
    do {
      iVar8 = iVar5 * 4;
      iVar5 = (int)(char)((char)iVar5 + '\x01');
      *(undefined4 *)(param_2 + iVar8 + 0x30c) = 0;
    } while (iVar5 < (int)(uint)bVar1);
  }
  *(undefined1 *)(param_2 + 0x40c) = 0;
  *(undefined4 *)(param_2 + 0x410) = 0;
  *(undefined4 *)(param_2 + 0x414) = 0;
  while (iVar5 = FUN_2c50f11c(param_2 + 0x40,&uStack_28), uVar4 = _LAB_2c50ff94,
        uVar3 = _DAT_2c50ff90, uVar2 = _LAB_2c50ff84, iVar5 != 0) {
    FUN_2c50fd0c(*(undefined4 *)(param_2 + 0x140),uStack_28);
  }
  if (*(char *)(param_2 + 0x270) != '\0') {
    uVar6 = 0;
    uVar7 = 0;
    do {
      iVar5 = param_2 + uVar6 * 4;
      if (*(int *)(iVar5 + 0x1dc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c50ff88,0x4f2,uVar2,uVar4,uVar3);
      }
      FUN_2c62bea8();
      uVar7 = uVar7 + 1;
      uVar6 = uVar7 & 0xff;
      *(undefined4 *)(iVar5 + 0x1dc) = 0;
    } while (uVar6 < *(byte *)(param_2 + 0x270));
  }
  uVar6 = 0;
  *(undefined1 *)(param_2 + 0x270) = 0;
  *(undefined4 *)(param_2 + 0x26c) = 0;
  uVar4 = _LAB_2c50ff98;
  uVar3 = _LAB_2c50ff94;
  uVar2 = _LAB_2c50ff8c;
  if (*(char *)(param_2 + 0x1d8) != '\0') {
    uVar7 = 0;
    do {
      iVar5 = param_2 + uVar7 * 4;
      if (*(int *)(iVar5 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,_LAB_2c50ff88,0x4b4,uVar2,uVar3,uVar4);
      }
      FUN_2c62bea8();
      uVar6 = uVar6 + 1;
      uVar7 = uVar6 & 0xff;
      *(undefined4 *)(iVar5 + 0x148) = 0;
    } while (uVar7 < *(byte *)(param_2 + 0x1d8));
  }
  *(undefined1 *)(param_2 + 0x1d8) = 0;
  if (*_LAB_2c50ff74 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

