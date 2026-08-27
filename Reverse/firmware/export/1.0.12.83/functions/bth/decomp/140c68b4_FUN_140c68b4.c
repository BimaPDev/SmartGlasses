/* FUN_140c68b4 @ 0x140c68b4 */

undefined4 *
FUN_140c68b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,int param_9)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c [2];
  
  puVar1 = param_8;
  local_1c[0] = 0;
  local_28 = param_3;
  uStack_24 = param_4;
  FUN_140c5f30(&local_30,param_2,param_3,param_4,param_5,param_6,&local_20,0,9999,4,param_7,local_1c
              );
  local_28 = local_30;
  uStack_24 = uStack_2c;
  if (local_1c[0] == 0) {
    if (local_20 < 0) {
      local_20 = local_20 + 100;
    }
    else {
      local_20 = local_20 + -0x76c;
    }
    *(int *)(param_9 + 0x14) = local_20;
  }
  else {
    *puVar1 = *puVar1 | 4;
  }
  iVar2 = FUN_140c5efe(&local_28,&param_5);
  if (iVar2 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  return param_1;
}

