/* FUN_10114f10 @ 0x10114f10 */

void FUN_10114f10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(DAT_10114f58 + 8) != param_1) &&
     (iVar1 = (uint)*(byte *)(param_1 + 0xd) << 0x1f, -1 < iVar1)) {
    FUN_10119dc2(DAT_10114f64,DAT_10114f60,DAT_10114f5c,0x286,param_1,param_2);
    FUN_1011a1f0(DAT_10114f5c,0x286,param_3,iVar1);
  }
  FUN_10114ec4(param_1,param_2,param_3,param_4);
  return;
}

