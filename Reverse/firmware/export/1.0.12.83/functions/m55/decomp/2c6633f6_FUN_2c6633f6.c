/* FUN_2c6633f6 @ 0x2c6633f6 */

undefined4 *
FUN_2c6633f6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,undefined4 *param_9
            )

{
  uint uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_1c;
  
  uVar1 = *(uint *)(param_7 + 0xc);
  *(uint *)(param_7 + 0xc) = uVar1 & 0xffffffb5 | 8;
  local_28 = param_3;
  uStack_24 = param_4;
  FUN_2c6630a4(&local_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_1c);
  *(uint *)(param_7 + 0xc) = uVar1;
  *param_9 = local_1c;
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  return param_1;
}

