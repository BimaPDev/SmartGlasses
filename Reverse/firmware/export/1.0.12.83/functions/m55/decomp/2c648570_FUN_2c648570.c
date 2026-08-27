/* FUN_2c648570 @ 0x2c648570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c648570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = _LAB_2c6485a0;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    param_3 = 0x2c64857e;
    *_LAB_2c6485a0 = 0x2c64857e;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c673d58(_LAB_2c6485a4,param_2,param_3,0x40);
  if (iVar3 == 0) {
    *_LAB_2c6485a0 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  return;
}

