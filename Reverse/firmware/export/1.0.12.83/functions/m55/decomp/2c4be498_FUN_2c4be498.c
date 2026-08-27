/* FUN_2c4be498 @ 0x2c4be498 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4be498(undefined4 param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  puVar2 = _LAB_2c4be4e8;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4be4f4);
  }
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *_LAB_2c4be4e8 = 0x2c4be4a8;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*_LAB_2c4be4ec == param_2) {
    uVar3 = 0;
    *_LAB_2c4be4ec = 0xc;
  }
  else if (*_LAB_2c4be4ec == 0xd) {
    uVar3 = 2;
  }
  else {
    uVar3 = 3;
  }
  *(undefined1 *)(_LAB_2c4be4f0 + param_2) = 0;
  if (iVar4 == 0) {
    *_LAB_2c4be4e8 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return uVar3;
}

