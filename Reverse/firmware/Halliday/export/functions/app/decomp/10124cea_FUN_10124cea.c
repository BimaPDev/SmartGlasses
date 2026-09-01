/* FUN_10124cea @ 0x10124cea */

void FUN_10124cea(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_1008953c();
  if ((param_2 & 1) != 0) {
    FUN_10125af4(param_1);
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2;
  if ((param_2 & 1) != 0) {
    if (((int)((uint)*(ushort *)(param_1 + 0x28) << 0x1e) < 0) &&
       (iVar2 = FUN_10124ce2(param_1), iVar2 != 0)) {
      FUN_10087314();
      iVar2 = FUN_1012455a(iVar2);
      if (iVar2 != 0) {
        FUN_10125af4();
      }
    }
  }
  iVar2 = FUN_1008953c(param_1);
  if ((iVar2 != iVar1) || ((param_2 & 0x1800000) != 0)) {
    FUN_10126fae(param_1);
    FUN_101256b2();
    FUN_101256b2(param_1);
  }
  if ((int)(param_2 << 0x1b) < 0) {
    FUN_101261bc(param_1,auStack_38,auStack_28);
    FUN_10125ab8(param_1,auStack_38);
    FUN_10125ab8(param_1,auStack_28);
  }
  return;
}

