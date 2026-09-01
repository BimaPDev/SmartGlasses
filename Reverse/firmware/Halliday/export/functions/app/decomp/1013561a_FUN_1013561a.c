/* FUN_1013561a @ 0x1013561a */

int FUN_1013561a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 *param_6,undefined1 *param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [3];
  undefined1 local_31;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_29;
  undefined2 local_25;
  
  FUN_100d08f0(auStack_64,param_2,0x10);
  FUN_100d08f0(auStack_54,param_3,0x10);
  FUN_100d08f0(auStack_44,param_4,0x10);
  FUN_100d08f0(auStack_34,param_5,3);
  local_31 = *param_6;
  local_30 = *(undefined4 *)(param_6 + 1);
  local_2c = *(undefined2 *)(param_6 + 5);
  FUN_100d08f0(&local_30,param_6 + 1,6);
  local_2a = *param_7;
  local_29 = *(undefined4 *)(param_7 + 1);
  local_25 = *(undefined2 *)(param_7 + 5);
  FUN_100d08f0(&local_29,param_7 + 1,6);
  FUN_100d08f0(auStack_74,param_1,0x10);
  iVar1 = FUN_101354b6(auStack_74,auStack_64,0x41,param_8);
  if (iVar1 == 0) {
    FUN_101355fe(param_8);
  }
  return iVar1;
}

