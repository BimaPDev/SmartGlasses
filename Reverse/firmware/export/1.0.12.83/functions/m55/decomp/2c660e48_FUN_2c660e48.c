/* FUN_2c660e48 @ 0x2c660e48 */

undefined4 *
FUN_2c660e48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_1c;
  
  uVar1 = *(uint *)(param_5 + 0xc);
  *(uint *)(param_5 + 0xc) = uVar1 & 0xffffbfb5 | 0x208;
  FUN_2c660d18(&local_20,param_2,param_3,param_4,param_5,param_6,param_7);
  *(uint *)(param_5 + 0xc) = uVar1;
  local_24 = CONCAT31((int3)((uint)param_4 >> 8),uStack_1c);
  *param_1 = local_20;
  param_1[1] = local_24;
  return param_1;
}

