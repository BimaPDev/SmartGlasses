/* FUN_1012c408 @ 0x1012c408 */

void FUN_1012c408(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_10096f64(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x4c),&local_18);
  iVar1 = FUN_1012691c(param_1,0,0x59);
  iVar2 = FUN_1012c296(param_1);
  local_14 = ((local_14 + 1) - iVar1) - *(int *)(iVar2 + 8);
  local_18 = *(int *)(param_1 + 0x48);
  uVar3 = FUN_100971e0(*(undefined4 *)(param_1 + 0x2c),&local_18);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  FUN_1009964c(param_1,uVar3);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  return;
}

