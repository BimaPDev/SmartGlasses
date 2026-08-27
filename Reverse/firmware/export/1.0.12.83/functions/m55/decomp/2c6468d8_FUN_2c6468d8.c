/* FUN_2c6468d8 @ 0x2c6468d8 */

undefined4 FUN_2c6468d8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 == 0) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    if (iVar3 == 0) {
      iVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar3 = getBasePriority();
      }
      if (iVar3 == 0) {
        software_interrupt(0);
        goto LAB_2c6468f0;
      }
    }
  }
  param_1 = *(int *)(DAT_2c64690c + 0x14);
  FUN_2c643a58(param_1);
LAB_2c6468f0:
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 4);
  }
  return uVar4;
}

