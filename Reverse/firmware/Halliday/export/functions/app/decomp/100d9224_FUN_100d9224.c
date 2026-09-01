/* FUN_100d9224 @ 0x100d9224 */

uint FUN_100d9224(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_24 [2];
  undefined1 local_22;
  undefined4 local_1c;
  
  FUN_1011ea48(auStack_24,0,0x14);
  iVar1 = FUN_1009e9f8(DAT_100d9294);
  if ((iVar1 == 0) && (iVar1 = FUN_1009e86c(DAT_100d9294), iVar1 == 0)) {
    FUN_100a5b78((DAT_100d929c - DAT_100d9298) * 0x20 & 0xff00U | 0x230011,DAT_100d92a4,DAT_100d92a0
                );
    uVar2 = 0xfffffffd;
  }
  else {
    local_22 = 3;
    local_1c = param_1;
    if (param_2 != 0) {
      FUN_101319d2(param_2);
    }
    if (param_3 != 0) {
      FUN_101319ee(param_3);
    }
    uVar2 = FUN_1009ece8(DAT_100d9294,auStack_24);
    uVar2 = (uVar2 ^ 1) & 0xff;
  }
  return uVar2;
}

