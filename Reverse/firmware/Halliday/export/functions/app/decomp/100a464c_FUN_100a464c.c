/* FUN_100a464c @ 0x100a464c */

/* WARNING: Type propagation algorithm not settling */

int FUN_100a464c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_38;
  uint auStack_34 [3];
  undefined2 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = thunk_FUN_10112e84(DAT_100a4718);
  local_24 = 0;
  local_20 = 0;
  local_38 = 0;
  auStack_34[0] = 0;
  auStack_34[1] = 0;
  auStack_34[2] = 0;
  local_1c = 0;
  local_28 = 0;
  if (iVar1 == 0) {
    FUN_10119dc2(DAT_100a471c,DAT_100a4718);
    iVar3 = -6;
  }
  else {
    iVar3 = FUN_1012da5e(param_1,auStack_34 + 1);
    uVar2 = (DAT_100a4720 - DAT_100a4724) * 0x20 & 0xff00;
    if (iVar3 == 0) {
      FUN_101221f0(auStack_34 + 1,&local_38);
      FUN_101221f0(param_2,auStack_34);
      if ((auStack_34[0] < local_38) || (DAT_100a4734 < auStack_34[0] - local_38)) {
        FUN_100a5b78(DAT_100a4738 | uVar2,DAT_100a4730,DAT_100a473c,local_38,auStack_34[0]);
        iVar3 = -0x16;
      }
      else {
        local_24 = (auStack_34[0] - local_38) * 1000;
        local_20 = DAT_100a4740;
        local_1c = iVar1;
        (*(code *)**(undefined4 **)(iVar1 + 8))(iVar1,&local_24,1);
        FUN_100a5b78(DAT_100a4744 | uVar2,DAT_100a4730,DAT_100a4748,auStack_34[0],local_38,
                     (auStack_34[0] - local_38) / 0x3c);
      }
    }
    else {
      FUN_100a5b78(DAT_100a4728 | uVar2,DAT_100a4730,DAT_100a472c);
    }
  }
  return iVar3;
}

