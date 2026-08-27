/* FUN_2c4b7b04 @ 0x2c4b7b04 */

undefined4 FUN_2c4b7b04(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4b7b50;
  if (1 < param_1) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      *DAT_2c4b7b50 = 0x2c4b7b18;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(DAT_2c4b7b54 + 0x70) =
         (param_1 - 2) * 0x100000 & 0xf00000 | *(uint *)(DAT_2c4b7b54 + 0x70) & 0xff0fffff;
    if (iVar3 == 0) {
      *DAT_2c4b7b50 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
    return 0;
  }
  return 1;
}

