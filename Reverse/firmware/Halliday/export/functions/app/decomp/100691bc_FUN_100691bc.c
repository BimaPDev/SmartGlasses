/* FUN_100691bc @ 0x100691bc */

void FUN_100691bc(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  FUN_10069150();
  local_1c = 0x1455a;
  local_18 = 0x50000;
  local_14 = param_1;
  uVar1 = FUN_1011e9a2();
  local_18 = CONCAT22(local_18._2_2_,uVar1);
  (**(code **)(DAT_10069230 + 8))(&local_1c,0xc);
  if (param_2 != 0) {
    FUN_10068af4(param_2);
  }
  if (param_3 != 0) {
    FUN_10069178(param_3,param_3 + 0x118);
    if (*(uint *)(param_3 + 0xa0) < 0x4000) {
      iVar2 = *(int *)(param_3 + 0x9c) + *(uint *)(param_3 + 0xa0);
    }
    else {
      iVar2 = *(int *)(param_3 + 0x9c) + 0x4000;
    }
    FUN_10069178(*(undefined4 *)(param_3 + 0x9c),iVar2);
  }
  FUN_1005d6e4();
  FUN_1006915c();
  return;
}

