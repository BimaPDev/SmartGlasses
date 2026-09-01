/* FUN_1009b030 @ 0x1009b030 */

void FUN_1009b030(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 local_1c;
  uint3 uStack_1b;
  undefined4 local_14;
  
  FUN_1009b000(0);
  FUN_1009aa6c();
  piVar3 = (int *)param_1[1];
  local_14 = *param_1;
  uVar1 = (uint)_local_1c >> 8;
  if (*(char *)(param_2 + 0x3f) < '\0') {
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  _local_1c = CONCAT31((uint3)((uint)DAT_1009b0c0 >> 8) &
                       (uint3)((uint)(((piVar3[2] + 1) - *piVar3) * 0x400) >> 8) |
                       (uint3)((uint)(((piVar3[3] + 1) - piVar3[1]) * 0x200000) >> 8) |
                       (uint3)uVar1 & 3,uVar2);
  *param_1 = *(undefined4 *)(param_2 + 0x34);
  param_1[1] = *(undefined4 *)(param_2 + 0x30);
  param_1[2] = *(undefined4 *)(param_2 + 0x2c);
  piVar3 = (int *)FUN_1008bbb4();
  *(byte *)(*piVar3 + 0x1c) =
       *(byte *)(*piVar3 + 0x1c) & 0xbf | (*(byte *)(param_2 + 0x38) & 1) << 6;
  FUN_1009ad0c(param_1);
  FUN_1008c0e0(param_1,param_3,param_2 + 0x10,&local_1c);
  FUN_10128174(&local_1c);
  return;
}

