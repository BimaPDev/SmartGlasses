/* FUN_2c4bbfe4 @ 0x2c4bbfe4 */

void FUN_2c4bbfe4(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4bc028;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c4bc028 = 0x2c4bbff2;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar3 = (uint)*DAT_2c4bc02c & ~(1 << (param_1 & 0xff));
  *DAT_2c4bc02c = (byte)uVar3;
  if (uVar3 == 0) {
    FUN_2c4be750(2);
  }
  if (iVar4 == 0) {
    *DAT_2c4bc028 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}

