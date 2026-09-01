/* FUN_100e4e64 @ 0x100e4e64 */

undefined4 FUN_100e4e64(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_100e4bd8();
  if (iVar1 == 0) {
    uVar4 = (DAT_100e4ea0 - DAT_100e4e9c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100e4ea4 | uVar4,DAT_100e4ea8,DAT_100e4e9c,uVar4,param_1,param_2,param_3);
    return 0xfffffffb;
  }
  *(undefined1 *)(iVar1 + 0xb2) = *(undefined1 *)(iVar1 + 0xb3);
  iVar2 = FUN_1013871c(iVar1,0,0,0x50);
  if (iVar2 != 0) {
    uVar4 = (param_2 & 0xffff) >> 8;
    FUN_101327da(iVar2 + 8,uVar4);
    FUN_101386a6(iVar2,(param_2 & 0x7fffff) >> 0x10);
    if (uVar4 == 2) {
      FUN_101386a6(iVar2,param_2 >> 0x18);
    }
    uVar3 = FUN_100e40e4(iVar1,iVar2);
    return uVar3;
  }
  return 0xfffffff4;
}

