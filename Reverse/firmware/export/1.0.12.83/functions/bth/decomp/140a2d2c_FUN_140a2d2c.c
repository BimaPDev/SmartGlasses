/* FUN_140a2d2c @ 0x140a2d2c */

void FUN_140a2d2c(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = DAT_140a2d9c;
  piVar1 = DAT_140a2d90;
  iVar4 = *DAT_140a2d90;
  if (iVar4 == 0) {
    if (DAT_140a2d98 <= DAT_140a2d94) {
                    /* WARNING: Subroutine does not return */
      FUN_140a2ce8();
    }
    iVar5 = DAT_140a2d98 - DAT_140a2d94;
    iVar4 = DAT_140a2d94 - 0x200;
    *DAT_140a2d9c = 0;
    *piVar1 = iVar5;
    uVar3 = FUN_140e5658(iVar4,0,iVar5);
    FUN_1402a6e8(4,0x1d,DAT_140a2da8,DAT_140a2da4,DAT_140a2da0,uVar3,iVar5);
    iVar4 = *piVar1;
  }
  FUN_1402a6e8(4,0x1f,DAT_140a2da8,DAT_140a2da4,DAT_140a2db0,DAT_140a2dac,iVar4,iVar4 - *piVar2);
  return;
}

