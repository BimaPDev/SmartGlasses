/* FUN_2c5add9c @ 0x2c5add9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5add9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _LAB_2c5ade1c;
  iVar2 = FUN_2c48e424(param_3);
  iVar2 = FUN_2c6684cc(*(undefined4 *)(iVar2 + 0x10));
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    registry_lookup(0x4001);
    FUN_2c5e4068();
    if (*(char *)(param_1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5ade30,0x1df,DAT_2c5ade2c,_LAB_2c5ade38,DAT_2c5ade24,1);
    }
    iVar2 = *piVar1;
  }
  if (iVar2 != 1) {
    return;
  }
  if (*DAT_2c5ade20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5ade30,0x1ed,DAT_2c5ade2c,DAT_2c5ade28,DAT_2c5ade24);
  }
  *DAT_2c5ade34 = 0;
  return;
}

