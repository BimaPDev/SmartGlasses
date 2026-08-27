/* FUN_2c485688 @ 0x2c485688 */

undefined4 FUN_2c485688(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c4856b8;
  if (*DAT_2c4856b8 == 0) {
    iVar2 = FUN_2c6441e0(LAB_2c4856c0);
    *piVar1 = iVar2;
    iVar2 = *DAT_2c4856bc;
    piVar1 = DAT_2c4856bc;
  }
  else {
    iVar2 = *DAT_2c4856bc;
    piVar1 = DAT_2c4856bc;
  }
  if (iVar2 != 0) {
    DAT_2c4856bc = piVar1;
    return 0;
  }
  DAT_2c4856bc = piVar1;
  iVar2 = FUN_2c6441e0(DAT_2c4856c4);
  *piVar1 = iVar2;
  return 0;
}

