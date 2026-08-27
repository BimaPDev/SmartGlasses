/* FUN_140349a0 @ 0x140349a0 */

void FUN_140349a0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_14034a38;
  iVar2 = *DAT_14034a38;
  if (iVar2 == 0) {
    FUN_1402e55c();
    iVar2 = *piVar1;
  }
  *piVar1 = iVar2 + 1;
  switch(param_1) {
  case 0:
    *(uint *)(DAT_14034a3c + 0xc08) = *(uint *)(DAT_14034a3c + 0xc08) | 0x10;
    break;
  case 1:
    *(uint *)(DAT_14034a3c + 0xc08) = *(uint *)(DAT_14034a3c + 0xc08) | 0x100;
    break;
  case 2:
    *(uint *)(DAT_14034a3c + 0xc08) = *(uint *)(DAT_14034a3c + 0xc08) | 0x200;
    break;
  case 3:
    *(uint *)(DAT_14034a3c + 0xc08) = *(uint *)(DAT_14034a3c + 0xc08) | 0x400;
  }
  FUN_1402a6e8(4,0xc55,DAT_14034a4c,DAT_14034a48,DAT_14034a44,DAT_14034a40,
               *(undefined4 *)(DAT_14034a3c + 0xc08));
  iVar2 = *piVar1;
  *piVar1 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_1402e5f8();
    return;
  }
  return;
}

