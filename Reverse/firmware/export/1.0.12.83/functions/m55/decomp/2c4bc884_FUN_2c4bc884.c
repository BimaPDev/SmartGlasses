/* FUN_2c4bc884 @ 0x2c4bc884 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bc884(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = _LAB_2c4bc8c8;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *_LAB_2c4bc8c8 = 0x2c4bc892;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  iVar3 = _LAB_2c4bc8cc + param_1 * 0x70;
  if (*(char *)(iVar3 + 0xc) == '\x01') {
    *(undefined1 *)(iVar3 + 0xc) = 2;
    FUN_2c4bc22c();
  }
  if (iVar4 == 0) {
    *_LAB_2c4bc8c8 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}

