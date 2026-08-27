/* FUN_2c4bfee0 @ 0x2c4bfee0 */

longlong FUN_2c4bfee0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  FUN_2c4bfe8c();
  puVar2 = DAT_2c4bff30;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_2c4bff30 = 0x2c4bfef4;
    puVar2[1] = unaff_lr;
  }
  iVar3 = DAT_2c4bff34;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(undefined4 *)(DAT_2c4bff34 + 0xc00) = DAT_2c4bff38;
  *(undefined4 *)(iVar3 + 0xc) = 1;
  *(undefined4 *)(iVar3 + 8) = 3;
  *(undefined4 *)(iVar3 + 0xc00) = 1;
  if (iVar5 == 0) {
    *DAT_2c4bff30 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  uVar4 = *(uint *)(DAT_2c4bff34 + 0xc00);
  *DAT_2c4bff3c = 1;
  return (ulonglong)uVar4 << 0x20;
}

