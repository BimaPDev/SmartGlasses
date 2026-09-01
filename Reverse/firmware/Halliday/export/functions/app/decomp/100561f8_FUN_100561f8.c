/* FUN_100561f8 @ 0x100561f8 */

uint FUN_100561f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_1005608c();
  uVar3 = DAT_10056290;
  iVar5 = *(int *)(iVar1 + 0x4c);
  if (*(int *)(iVar5 + 0x18) << 5 < 0) {
    if (param_1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x48);
      *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x1000;
      iVar1 = FUN_10061948();
      while (-1 < *(int *)(iVar4 + 0x10) << 0x13) {
        iVar2 = FUN_10061948();
        if (uVar3 < (uint)(iVar2 - iVar1) >> 5) {
          uVar3 = (DAT_10056280 - DAT_1005627c) * 0x20 & 0xff00;
          FUN_100a5b78(DAT_10056294 | uVar3,DAT_1005628c,DAT_10056298,uVar3,param_4);
          return 0xffffff8c;
        }
        FUN_101153fc(1,0);
      }
    }
    uVar3 = *(uint *)(iVar5 + 0x18) & 0x3ffffff;
  }
  else {
    uVar3 = (DAT_10056280 - DAT_1005627c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_10056284 | uVar3,DAT_1005628c,DAT_10056288,uVar3,param_4);
    uVar3 = 0xfffffff3;
  }
  return uVar3;
}

