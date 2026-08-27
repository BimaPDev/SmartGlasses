/* FUN_2c002ef4 @ 0x2c002ef4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c002ef4(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c002f2c;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *DAT_2c002f2c = 0x2c002f02;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  _DAT_5000005c = _DAT_5000005c | 0x200;
  if (iVar3 == 0) {
    *DAT_2c002f2c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  return;
}

