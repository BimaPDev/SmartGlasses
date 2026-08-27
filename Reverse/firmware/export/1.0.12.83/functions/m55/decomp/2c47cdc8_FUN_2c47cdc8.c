/* FUN_2c47cdc8 @ 0x2c47cdc8 */

void FUN_2c47cdc8(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_2c485688();
  uVar2 = FUN_2c4856c8(DAT_2c47ce14,DAT_2c47ce10,DAT_2c47ce0c);
  piVar1 = DAT_2c47ce1c;
  *DAT_2c47ce18 = uVar2;
  uVar2 = FUN_2c4856c8(DAT_2c47ce14,DAT_2c47ce10,DAT_2c47ce0c);
  iVar3 = *piVar1;
  *DAT_2c47ce20 = uVar2;
  if (iVar3 == 0) {
    iVar3 = FUN_2c64419c(DAT_2c47ce2c);
    *piVar1 = iVar3;
  }
  piVar1 = DAT_2c47ce24;
  if (*DAT_2c47ce24 != 0) {
    return;
  }
  iVar3 = FUN_2c64419c(DAT_2c47ce28);
  *piVar1 = iVar3;
  return;
}

