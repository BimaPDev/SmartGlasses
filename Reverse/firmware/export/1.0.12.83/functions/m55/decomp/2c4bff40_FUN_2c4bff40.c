/* FUN_2c4bff40 @ 0x2c4bff40 */

void FUN_2c4bff40(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4bff88;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c4bff88 = 0x2c4bff4e;
    puVar2[1] = unaff_lr;
  }
  iVar3 = DAT_2c4bff8c;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(undefined4 *)(DAT_2c4bff8c + 0xc00) = DAT_2c4bff90;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc00) = 1;
  if (iVar4 == 0) {
    *DAT_2c4bff88 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  *DAT_2c4bff94 = 0;
  return;
}

