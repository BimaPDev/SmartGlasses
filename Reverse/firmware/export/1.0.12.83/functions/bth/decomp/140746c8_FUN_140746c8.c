/* FUN_140746c8 @ 0x140746c8 */

undefined4 FUN_140746c8(uint param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_14074724;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_14074724 = 0x140746da;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (param_1 < 0xb) {
    if (*(int *)(DAT_14074728 + param_1 * 4) == 0) {
      *(undefined4 *)(DAT_14074728 + param_1 * 4) = param_2;
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
    if (iVar4 == 0) {
      *DAT_14074724 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar4);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_14074730,0x178,DAT_1407472c,param_1,0xb);
}

