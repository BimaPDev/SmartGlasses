/* FUN_2c4be700 @ 0x2c4be700 */

undefined4 FUN_2c4be700(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4be748;
  if (param_1 < 0x20) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      *DAT_2c4be748 = 0x2c4be712;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *DAT_2c4be74c = 1 << (param_1 & 0xff) | *DAT_2c4be74c;
    if (iVar3 == 0) {
      *DAT_2c4be748 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
    return 0;
  }
  return 1;
}

