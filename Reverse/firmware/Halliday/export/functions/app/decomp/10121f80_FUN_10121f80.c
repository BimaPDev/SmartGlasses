/* FUN_10121f80 @ 0x10121f80 */

bool FUN_10121f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xc) + 0x10de) - 1;
  uStack_1c = uVar1;
  uStack_18 = param_3;
  FUN_10121ec8();
  FUN_10121ec8(param_1,param_2,param_4,&uStack_1c);
  return uStack_1c < uVar1;
}

