/* FUN_2c4bb6b8 @ 0x2c4bb6b8 */

undefined4 FUN_2c4bb6b8(uint param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar3 = DAT_2c4bb720;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bb728,param_1);
  }
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_2c4bb720 = 0x2c4bb6ca;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *(char *)(DAT_2c4bb724 + param_1);
  *(undefined1 *)(DAT_2c4bb724 + param_1) = 0xff;
  if (iVar5 == 0) {
    *DAT_2c4bb720 = 0xffffffff;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0);
    }
  }
  else {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar5);
    }
  }
  if (cVar1 == -1) {
    return 0;
  }
  FUN_2c4bee24(cVar1);
  uVar4 = FUN_2c4bf200(cVar1);
  FUN_2c4beffc(cVar1);
  return uVar4;
}

