/* FUN_10139058 @ 0x10139058 */

void FUN_10139058(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_100eb16c + 4);
  iVar3 = 0;
  while( true ) {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      FUN_100a5b78(DAT_100eb17c | (DAT_100eb174 - DAT_100eb170) * 0x20 & 0xff00U,DAT_100eb180,
                   DAT_100eb178,param_1);
      return;
    }
    if (*(int *)(iVar2 + 0x20) == param_1) break;
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

