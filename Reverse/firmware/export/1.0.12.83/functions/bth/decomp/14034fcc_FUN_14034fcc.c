/* FUN_14034fcc @ 0x14034fcc */

void FUN_14034fcc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_1403505c;
  iVar2 = *DAT_1403505c;
  if (iVar2 == 0) {
    FUN_1402e55c();
    iVar2 = *piVar1;
  }
  *piVar1 = iVar2 + 1;
  iVar2 = DAT_14035060;
  if (param_1 == 1) {
    *(uint *)(DAT_14035060 + 0xc7c) = *(uint *)(DAT_14035060 + 0xc7c) & 0xffffffe7;
    *(uint *)(iVar2 + 0xc7c) = *(uint *)(iVar2 + 0xc7c) | 8;
  }
  else if (param_1 == 2) {
    *(uint *)(DAT_14035060 + 0xc7c) = *(uint *)(DAT_14035060 + 0xc7c) & 0xffffffe7;
    *(uint *)(iVar2 + 0xc7c) = *(uint *)(iVar2 + 0xc7c) | 0x10;
  }
  FUN_1402a6e8(4,0xd5e,DAT_14035070,DAT_1403506c,DAT_14035068,DAT_14035064,
               *(undefined4 *)(DAT_14035060 + 0xc7c));
  iVar2 = *piVar1;
  *piVar1 = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}

