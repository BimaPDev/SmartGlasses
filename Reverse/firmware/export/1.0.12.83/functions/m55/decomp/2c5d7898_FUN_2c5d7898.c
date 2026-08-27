/* FUN_2c5d7898 @ 0x2c5d7898 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c5d7898(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  *(char *)(param_1 + 2) = (char)param_4;
  param_1[7] = param_4;
  *(short *)(param_1 + 8) = (short)param_4;
  param_1[3] = param_4;
  param_1[4] = param_4;
  param_1[5] = param_4;
  param_1[6] = param_4;
  uVar3 = FUN_2c5fd09c();
  uVar1 = _LAB_2c5d78e0;
  param_1[1] = uVar3;
  uVar2 = FUN_2c5fd0c0(uVar3,_LAB_2c5d78ec,_LAB_2c5d78e4,_LAB_2c5d78e8,param_1,uVar1,0x1a);
  *(undefined1 *)(param_1 + 2) = uVar2;
  FUN_2c523548(param_1[1]);
  return param_1;
}

