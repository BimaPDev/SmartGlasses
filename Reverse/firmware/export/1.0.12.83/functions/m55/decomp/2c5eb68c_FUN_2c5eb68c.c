/* FUN_2c5eb68c @ 0x2c5eb68c */

undefined4 FUN_2c5eb68c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  int iVar4;
  undefined8 uVar5;
  
  if (param_1 != 0) {
    iVar1 = param_1;
    param_1 = 0;
    do {
      iVar4 = iVar1;
      iVar1 = FUN_2c607e50(iVar4);
      if (iVar1 == 0) break;
      iVar1 = *(int *)(iVar4 + 4);
      param_1 = iVar4;
    } while (*(int *)(iVar4 + 4) != 0);
  }
  FUN_2c62a470();
  uVar5 = FUN_2c5fee80();
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar2 = extraout_r2;
  if (param_1 != (int)uVar5) {
    FUN_2c62a470();
    uVar5 = FUN_2c5fee6c();
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = extraout_r2_00;
    if (param_1 != (int)uVar5) {
      FUN_2c62a470();
      uVar5 = FUN_2c5fee94();
      uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar2 = extraout_r2_01;
      if (param_1 != (int)uVar5) {
        FUN_2c62a470();
        uVar5 = FUN_2c5fee44();
        uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar2 = extraout_r2_02;
        if (param_1 != (int)uVar5) {
          return 0;
        }
      }
    }
  }
  uVar2 = FUN_2c607e50(param_1,uVar3,uVar2,param_4);
  return uVar2;
}

