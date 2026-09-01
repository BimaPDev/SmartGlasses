/* FUN_10124c20 @ 0x10124c20 */

void FUN_10124c20(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_1008953c();
  if ((int)(param_2 << 0x1b) < 0) {
    FUN_101261bc(param_1,auStack_30,auStack_20);
    FUN_10125ab8(param_1,auStack_30);
    FUN_10125ab8(param_1,auStack_20);
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & ~param_2;
  if ((int)(param_2 << 0x1f) < 0) {
    FUN_10125af4(param_1);
    iVar2 = FUN_1008953c(param_1);
    if (iVar2 != 0) {
      FUN_10126fae(param_1);
      FUN_101256b2();
      FUN_101256b2(param_1);
    }
  }
  iVar2 = FUN_1008953c(param_1);
  if ((iVar2 != iVar1) || ((param_2 & 0x1800000) != 0)) {
    FUN_10126fae(param_1);
    FUN_101256b2();
  }
  return;
}

