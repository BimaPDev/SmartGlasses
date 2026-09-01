/* FUN_10130f28 @ 0x10130f28 */

undefined4 FUN_10130f28(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_1011dbf4(*(int *)(param_1 + 8) + 0x38,0xffffffff,param_3,param_4,param_4);
  if ((*param_2 < 10) || (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = FUN_101310ae(*(int *)(param_1 + 0x10),*param_2,param_2[1],param_2[2]);
  }
  thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x38);
  return uVar1;
}

