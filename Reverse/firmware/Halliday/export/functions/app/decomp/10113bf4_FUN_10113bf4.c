/* FUN_10113bf4 @ 0x10113bf4 */

void FUN_10113bf4(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_24;
  undefined4 uStack_20;
  
  local_24 = param_2;
  uStack_20 = param_3;
  FUN_101140f4(DAT_10113c4c,&local_24,0xffffffff,0xffffffff,param_1);
  *(undefined1 *)((int)local_24 + 0xe) = *(undefined1 *)(*(int *)(DAT_10113c50 + 8) + 0xe);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  local_24[0xc] = *param_2;
  local_24[0xd] = uVar1;
  local_24[0xe] = uVar2;
  local_24[0xf] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  local_24[0x10] = param_2[4];
  local_24[0x11] = uVar1;
  local_24[0x12] = uVar2;
  local_24[0x13] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  local_24[0x14] = param_2[8];
  local_24[0x15] = uVar1;
  local_24[0x16] = uVar2;
  local_24[0x15] = local_24;
  local_24[0x16] = param_3;
  FUN_10113a74(param_1,local_24 + 0xc,0xffffffff,0xffffffff);
  return;
}

