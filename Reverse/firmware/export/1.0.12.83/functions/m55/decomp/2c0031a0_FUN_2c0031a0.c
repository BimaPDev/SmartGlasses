/* FUN_2c0031a0 @ 0x2c0031a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0031a0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  FUN_2c002f6c();
  FUN_2c002ef4();
  *(undefined4 *)(DAT_2c0031b8 + 8) = 0x82;
  puVar2 = DAT_2c002f68;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *DAT_2c002f68 = 0x2c002f3e;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  _DAT_5000005c = _DAT_5000005c | 0x400;
  if (iVar3 == 0) {
    *DAT_2c002f68 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  return;
}

