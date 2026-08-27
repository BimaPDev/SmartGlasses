/* FUN_14029378 @ 0x14029378 */

void FUN_14029378(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1402939c;
  iVar1 = DAT_14029398;
  *(uint *)(DAT_14029398 + 0x28) = *(uint *)(DAT_14029398 + 0x28) & 0xffffff7f;
  *(undefined4 *)(iVar1 + 0x2c) = 1;
  *(undefined4 *)(iVar2 + 0x184) = 0x4000;
  return;
}

