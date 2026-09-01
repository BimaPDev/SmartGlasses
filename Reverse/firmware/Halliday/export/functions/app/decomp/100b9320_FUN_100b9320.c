/* FUN_100b9320 @ 0x100b9320 */

void FUN_100b9320(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_100b9334[3];
  iVar1 = *DAT_100b9334;
  DAT_100b9334[3] = iVar2 + 1;
  *(undefined1 *)(iVar1 + iVar2) = param_1;
  return;
}

