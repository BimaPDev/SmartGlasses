/* FUN_2c50b774 @ 0x2c50b774 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c50b774(undefined4 *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 uStack_25;
  int iStack_24;
  
  iVar4 = 0;
  iStack_24 = *_LAB_2c50b87c;
  *param_1 = _DAT_2c50b878;
  do {
    uVar1 = (undefined1)iVar4;
    uStack_25 = uVar1;
    piVar2 = (int *)FUN_2c50b6e8(param_1 + 0x53,&uStack_25);
    if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    iVar4 = iVar4 + 1;
    uStack_25 = uVar1;
    puVar3 = (undefined4 *)FUN_2c50b6e8(param_1 + 0x53,&uStack_25);
    *puVar3 = 0;
  } while (iVar4 != 4);
  FUN_2c50ed7c(param_1 + 0x5a);
  FUN_2c50ed7c(param_1 + 0x81);
  FUN_2c50ed7c(param_1 + 0xa8);
  FUN_2c50ed7c(param_1 + 0xcf);
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_2c50ec40(param_1 + 0xcf);
  FUN_2c50ec40(param_1 + 0xa8);
  FUN_2c50ec40(param_1 + 0x81);
  FUN_2c50ec40(param_1 + 0x5a);
  if (param_1[0x55] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,param_1[0x55]);
  }
  FUN_2c674268(param_1[0x53],0,param_1[0x54] << 2);
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  if ((undefined4 *)param_1[0x53] != param_1 + 0x59) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  if (param_1[0x50] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5068ac(param_1);
  if (*_LAB_2c50b87c == iStack_24) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

