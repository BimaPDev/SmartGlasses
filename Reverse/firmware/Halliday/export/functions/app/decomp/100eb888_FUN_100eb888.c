/* FUN_100eb888 @ 0x100eb888 */

void FUN_100eb888(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_100a5b78(DAT_100eb8c4 | (DAT_100eb8c0 - DAT_100eb8bc) * 0x20 & 0xff00U,DAT_100eb8d0,
                 DAT_100eb8c8,DAT_100eb8cc,0x89a,param_2);
    return;
  }
  iVar1 = *(int *)(DAT_100eb16c + 4);
  iVar3 = 0;
  while( true ) {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      FUN_100a5b78(DAT_100eb17c | (DAT_100eb174 - DAT_100eb170) * 0x20 & 0xff00U,DAT_100eb180,
                   DAT_100eb178,*(int *)(param_1 + 4));
      return;
    }
    if (*(int *)(iVar2 + 0x20) == *(int *)(param_1 + 4)) break;
    iVar1 = *(int *)(iVar2 + 0x3c);
    iVar3 = iVar2;
  }
  if (1 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) - 1;
    return;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_100eb16c + 4) = *(undefined4 *)(iVar2 + 0x3c);
  }
  else {
    *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
  }
  FUN_10138fd0(1);
  return;
}

