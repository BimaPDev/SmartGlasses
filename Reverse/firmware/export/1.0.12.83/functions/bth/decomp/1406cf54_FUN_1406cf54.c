/* FUN_1406cf54 @ 0x1406cf54 */

void FUN_1406cf54(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  puVar2 = DAT_1406d028;
  iVar3 = param_1 + 0x22;
  iVar5 = *(int *)(DAT_1406d024 + iVar3 * 4);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406d030,0x171,DAT_1406d02c);
  }
  if ((*(byte *)(param_2 + 0x12) & 0xf) == 0) {
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = getBasePriority();
    }
    if (iVar6 != 0x40) {
      iVar3 = 0x1406cfe4;
      *DAT_1406d028 = 0x1406cfe4;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_14073a6c(iVar5 + 0x30,param_2,iVar3,0x40);
    if (iVar6 == 0) {
      *DAT_1406d028 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
  }
  else {
    bVar4 = *(byte *)(param_2 + 0x11);
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = getBasePriority();
    }
    if (iVar6 != 0x40) {
      iVar3 = 0x1406cf8c;
      *DAT_1406d028 = 0x1406cf8c;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_14073a6c(iVar5 + 0x28,param_2,iVar3,0x40);
    if (iVar6 == 0) {
      *DAT_1406d028 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar6);
    }
    FUN_140587d4(param_2 + 8);
    if (1 < (bVar4 & 7) - 4) {
      FUN_1406904c(param_1,param_2);
    }
  }
  bVar4 = *(byte *)(param_2 + 0x12) & 0xbf;
  if (param_3 != 0) {
    bVar4 = bVar4 | 0x40;
  }
  *(byte *)(param_2 + 0x12) = bVar4;
  return;
}

