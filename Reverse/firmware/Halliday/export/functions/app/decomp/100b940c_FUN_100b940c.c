/* FUN_100b940c @ 0x100b940c */

undefined4 FUN_100b940c(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_100b9434[1];
  uVar2 = iVar1 + 1;
  if (uVar2 <= (uint)DAT_100b9434[2]) {
    iVar3 = *DAT_100b9434;
    DAT_100b9434[1] = uVar2;
    *param_1 = *(undefined1 *)(iVar3 + iVar1);
    return 1;
  }
  *param_1 = 0;
  return 0;
}

