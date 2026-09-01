/* FUN_100b2514 @ 0x100b2514 */

undefined4 FUN_100b2514(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  
  if ((*(byte *)(param_1 + 99) & 3) == 1) {
    iVar1 = FUN_1012d608(*(undefined4 *)(param_1 + 0x6c));
    if (iVar1 < 1) {
      FUN_100a5b78((DAT_100b25fc - DAT_100b25f8) * 0x20 & 0xff00U | 0x2300031,DAT_100b2600);
      *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 2;
    }
    if (**(int **)(param_1 + 0x70) == 0) {
      FUN_100a5b78(DAT_100b2604 | (DAT_100b25fc - DAT_100b25f8) * 0x20 & 0xff00U,DAT_100b2608);
      *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 2;
    }
    if ((int)((uint)*(byte *)(param_1 + 99) << 0x1e) < 0) {
      pcVar4 = *(code **)(*(int *)(param_1 + 8) + 100);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(0x16,0,0,*(undefined4 *)(*(int *)(param_1 + 8) + 0x68));
      }
    }
  }
  else {
    uVar5 = 0;
    iVar1 = param_1 + 0x78;
    while( true ) {
      uVar2 = FUN_1012d608(*(undefined4 *)(param_1 + 0x6c));
      if ((*(uint *)(param_1 + 100) <= uVar2) && (-1 < (int)((uint)*(byte *)(param_1 + 99) << 0x1d))
         ) {
        FUN_1011dbde(iVar1,0x14);
        uVar5 = *(byte *)(param_1 + 99) & 8;
        if ((*(byte *)(param_1 + 99) & 8) != 0) {
          return 0;
        }
      }
      iVar3 = FUN_10130472(param_1);
      if ((iVar3 != 0) || (iVar3 = FUN_100b21e0(param_1,0), iVar3 != 0)) break;
      uVar5 = uVar5 + 1;
      FUN_101140ac(iVar1);
      if (9 < (int)uVar5) {
        return 0;
      }
      if (*(char *)(param_1 + 0x62) == '\x03') {
        return 0;
      }
    }
    FUN_101140ac(iVar1);
  }
  return 0;
}

