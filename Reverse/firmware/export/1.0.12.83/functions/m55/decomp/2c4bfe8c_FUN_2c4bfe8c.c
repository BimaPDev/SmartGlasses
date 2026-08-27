/* FUN_2c4bfe8c @ 0x2c4bfe8c */

void FUN_2c4bfe8c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4bfed0;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c4bfed0 = 0x2c4bfe9a;
    puVar2[1] = unaff_lr;
  }
  iVar3 = DAT_2c4bfed8;
  puVar2 = DAT_2c4bfed4;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  DAT_2c4bfed4[0x300] = DAT_2c4bfedc;
  *puVar2 = *(undefined4 *)(iVar3 + param_1 * 4);
  puVar2[0x300] = 1;
  if (iVar4 == 0) {
    *DAT_2c4bfed0 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}

