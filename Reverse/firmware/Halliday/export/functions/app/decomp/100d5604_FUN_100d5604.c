/* FUN_100d5604 @ 0x100d5604 */

undefined4 FUN_100d5604(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_100d4588(param_1,0,param_3,param_4,param_1,param_2);
  uVar3 = (DAT_100d5658 - DAT_100d565c) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d5660 | uVar3,DAT_100d5668,DAT_100d5664);
    uVar2 = 0xffffffed;
  }
  else {
    FUN_100a5b78(DAT_100d566c | uVar3,DAT_100d5668,DAT_100d5670,*(byte *)(iVar1 + 0x43) >> 6,param_2
                );
    uVar2 = 0;
    *(byte *)(iVar1 + 0x43) = *(byte *)(iVar1 + 0x43) & 0x3f | (byte)((param_2 & 3) << 6);
  }
  return uVar2;
}

