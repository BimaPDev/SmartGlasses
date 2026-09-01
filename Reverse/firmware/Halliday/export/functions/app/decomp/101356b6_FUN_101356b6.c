/* FUN_101356b6 @ 0x101356b6 */

int FUN_101356b6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [20];
  
  FUN_100d08f0(auStack_20,param_1,0x10);
  FUN_100d08f0(auStack_24,param_2);
  iVar1 = FUN_101354b6(auStack_20,auStack_24,4,param_3);
  if (iVar1 == 0) {
    FUN_101355fe(param_3);
  }
  return iVar1;
}

