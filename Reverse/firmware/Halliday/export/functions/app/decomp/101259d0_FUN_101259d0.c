/* FUN_101259d0 @ 0x101259d0 */

undefined4 FUN_101259d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar1 = FUN_10124cb8(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_10126fa2(param_1);
    uVar2 = FUN_1008af34();
    iVar3 = FUN_10086bac();
    if ((((iVar1 == iVar3) || (iVar3 = FUN_10086be0(uVar2), iVar1 == iVar3)) ||
        (iVar3 = FUN_10086c14(uVar2), iVar1 == iVar3)) ||
       (iVar3 = FUN_10086c48(uVar2), iVar1 == iVar3)) {
      iVar1 = FUN_10124cc6(param_1,0x80000);
      if (iVar1 == 0) {
        local_1c = FUN_10125436(param_1);
        local_24 = *(int *)(param_1 + 0x18) - local_1c;
        local_28 = *(int *)(param_1 + 0x14) - local_1c;
        local_20 = *(int *)(param_1 + 0x1c) + local_1c;
        local_1c = local_1c + *(int *)(param_1 + 0x20);
        iVar1 = FUN_1012a896(param_2,param_2,&local_28);
        if (iVar1 == 0) {
          return 0;
        }
      }
      FUN_1012590c(param_1,param_2,1,0);
      iVar1 = FUN_10126fae(param_1);
      while( true ) {
        if (iVar1 == 0) {
          return 1;
        }
        iVar3 = FUN_10124cb8(iVar1,1);
        if (iVar3 != 0) break;
        iVar3 = FUN_10124cc6(iVar1,0x80000);
        if (iVar3 == 0) {
          local_28 = *(int *)(iVar1 + 0x14);
          local_24 = *(int *)(iVar1 + 0x18);
          local_20 = *(int *)(iVar1 + 0x1c);
          local_1c = *(int *)(iVar1 + 0x20);
          FUN_1012590c(iVar1,&local_28,1,0);
          iVar3 = FUN_1012a896(param_2,param_2,&local_28);
          if (iVar3 == 0) {
            return 0;
          }
        }
        iVar1 = FUN_10126fae(iVar1);
      }
    }
  }
  return 0;
}

