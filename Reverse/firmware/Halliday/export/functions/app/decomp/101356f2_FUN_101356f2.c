/* FUN_101356f2 @ 0x101356f2 */

int FUN_101356f2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  FUN_100d08f0(auStack_30,param_2,0x10);
  FUN_100d08f0(auStack_20,param_1);
  iVar1 = FUN_101354b6(auStack_20,auStack_30,0x10,param_3);
  if (iVar1 == 0) {
    FUN_101355fe(param_3);
  }
  return iVar1;
}

