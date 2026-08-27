/* FUN_2c5ab3a4 @ 0x2c5ab3a4 */

void FUN_2c5ab3a4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c5abf68();
  iVar3 = *DAT_2c5ad23c;
  uVar1 = FUN_2c48e3b8(param_2);
  iVar2 = FUN_2c48e424(uVar1,DAT_2c5ad240);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5ad24c,0x24f,DAT_2c5ad248,DAT_2c5ad244);
  }
  if (*DAT_2c5ad23c == iVar3) {
    FUN_2c48dea0(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

