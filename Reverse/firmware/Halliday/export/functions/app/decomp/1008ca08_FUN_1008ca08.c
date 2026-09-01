/* FUN_1008ca08 @ 0x1008ca08 */

void FUN_1008ca08(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint extraout_r2;
  
  FUN_101272fc();
  *param_1 = *(undefined4 *)(param_2 + 0x34);
  param_1[1] = *(undefined4 *)(param_2 + 0x30);
  param_1[2] = *(undefined4 *)(param_2 + 0x2c);
  piVar1 = (int *)FUN_1008bbb4();
  uVar2 = *(byte *)(*piVar1 + 0x1c) & 0xffffffbf | (*(byte *)(param_2 + 0x38) & 1) << 6;
  *(char *)(*piVar1 + 0x1c) = (char)uVar2;
  if ((code *)param_1[0x12] != (code *)0x0) {
    (*(code *)param_1[0x12])(param_1,param_2);
    uVar2 = extraout_r2;
  }
  FUN_10094268(param_2,DAT_1008ca48,uVar2,param_4);
  return;
}

