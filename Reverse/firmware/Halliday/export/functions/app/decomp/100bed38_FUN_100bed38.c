/* FUN_100bed38 @ 0x100bed38 */

undefined4 FUN_100bed38(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *DAT_100bed44;
  if (iVar1 != 0) {
    uVar2 = FUN_10131956();
    uVar3 = thunk_FUN_10135318(iVar1);
    FUN_1013197e(uVar2);
    return uVar3;
  }
  return 0;
}

