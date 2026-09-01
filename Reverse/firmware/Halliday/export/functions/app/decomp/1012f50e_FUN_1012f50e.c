/* FUN_1012f50e @ 0x1012f50e */

undefined4 FUN_1012f50e(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 uStack_14;
  uint local_10;
  undefined4 local_c;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xfffffff2;
  }
  else {
    local_10 = (uint)*(byte *)((int)param_1 + 5);
    local_18 = (uint)*(byte *)(param_1 + 1);
    local_1c = 0;
    local_20 = *param_2;
    local_c = 0;
    if ((1 < local_18) && (-1 < (int)((uint)*(byte *)((int)param_1 + 6) << 0x1f))) {
      local_1c = param_2[1];
    }
    uStack_14 = param_3;
    uVar1 = FUN_1012ef56(*param_1,5,&local_20);
  }
  return uVar1;
}

