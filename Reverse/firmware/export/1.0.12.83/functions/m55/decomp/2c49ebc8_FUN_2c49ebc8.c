/* FUN_2c49ebc8 @ 0x2c49ebc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49ebc8(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  int iStack_14;
  
  iStack_14 = *_LAB_2c49ec40;
  uVar2 = FUN_2c4a0424();
  piVar1 = _LAB_2c49ec44;
  if ((uVar2 & param_2 >> 8) == 0) goto LAB_2c49ebee;
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*_LAB_2c49ec44 == 0) {
      iVar3 = FUN_2c64418c(_LAB_2c49ec48,1,0);
      *piVar1 = iVar3;
      if (iVar3 == 0) goto LAB_2c49ebe6;
    }
    FUN_2c6448f0();
    FUN_2c6448b4(*piVar1,0x78);
  }
LAB_2c49ebe6:
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 0x12) = 0;
LAB_2c49ebee:
  uStack_18 = (undefined1)(param_2 >> 8);
  uStack_16 = 0;
  uStack_17 = 1;
  FUN_2c49e1b0(&uStack_18);
  if (*_LAB_2c49ec40 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

