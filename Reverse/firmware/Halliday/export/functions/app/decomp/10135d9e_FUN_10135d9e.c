/* FUN_10135d9e @ 0x10135d9e */

undefined4 FUN_10135d9e(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar4;
  undefined4 unaff_r4;
  
  if (*(char *)(*param_1 + 3) == '\0') {
    uVar3 = 3;
  }
  else {
    iVar1 = FUN_1013577a(param_1 + 0x35,10);
    if (iVar1 != 0) {
      FUN_10135440(extraout_r3_00,0);
      return 0;
    }
    uVar3 = 4;
  }
  FUN_10135440(param_1 + 0x34,uVar3);
  iVar4 = *param_1;
  uVar3 = extraout_r3;
  iVar1 = FUN_10135838(param_1,3);
  if (iVar1 != 0) {
    uVar2 = FUN_100c1fe4(iVar1 + 8,0x10);
    iVar4 = FUN_10135c86((int)param_1 + 0x117,(int)param_1 + 0xf7,(int)param_1 + 0xd9,param_1 + 0x38
                         ,iVar4 + 0x97,iVar4 + 0x9e,uVar2,uVar3,unaff_r4);
    if (iVar4 == 0) {
      FUN_10135546(param_1,iVar1,0);
      FUN_10135464(param_1 + 0x35,0);
      return 0;
    }
    FUN_100c1c90(iVar1);
  }
  return 8;
}

