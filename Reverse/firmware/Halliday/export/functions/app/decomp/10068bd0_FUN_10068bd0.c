/* FUN_10068bd0 @ 0x10068bd0 */

int FUN_10068bd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + *DAT_10068bec;
  if (uVar2 < 0x800) {
    iVar1 = DAT_10068bf0 + *DAT_10068bec;
    *DAT_10068bec = uVar2;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

