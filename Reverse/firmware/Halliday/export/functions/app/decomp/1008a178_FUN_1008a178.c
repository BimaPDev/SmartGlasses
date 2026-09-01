/* FUN_1008a178 @ 0x1008a178 */

void FUN_1008a178(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_40;
  int local_3c;
  int iStack_38;
  int local_34;
  uint local_30;
  
  if (param_2 != 0 || param_3 != 0) {
    if (param_4 == 1) {
      uVar1 = FUN_1008af34();
      FUN_10093284(&local_5c);
      local_50 = DAT_1008a274;
      local_5c = param_1;
      if (param_2 != 0) {
        iVar2 = FUN_10092f10(uVar1);
        local_30 = FUN_1012a796((iVar2 << 1) >> 2,0,param_2);
        if (0x95 < local_30) {
          local_30 = 0x96;
        }
        if (local_30 < 0x32) {
          local_30 = 0x32;
        }
        local_34 = FUN_10125ffe(param_1);
        local_3c = -local_34;
        local_34 = param_2 - local_34;
        local_58 = DAT_1008a278;
        local_40 = DAT_1008a27c;
        iStack_38 = local_3c;
        iVar2 = FUN_10086f50(param_1,9,&local_5c);
        if (iVar2 != 1) {
          return;
        }
        FUN_1009331c(&local_5c);
      }
      if (param_3 != 0) {
        iVar2 = FUN_10092f2c(uVar1);
        local_30 = FUN_1012a796((iVar2 << 1) >> 2,0,param_3);
        if (0x95 < local_30) {
          local_30 = 0x96;
        }
        if (local_30 < 0x32) {
          local_30 = 0x32;
        }
        local_34 = FUN_10126008(param_1);
        local_3c = -local_34;
        local_34 = param_3 - local_34;
        local_58 = DAT_1008a280;
        local_40 = DAT_1008a27c;
        iStack_38 = local_3c;
        iVar2 = FUN_10086f50(param_1,9,&local_5c);
        if (iVar2 == 1) {
          FUN_1009331c(&local_5c);
        }
      }
    }
    else {
      FUN_100932b0(param_1,DAT_1008a280);
      FUN_100932b0(param_1,DAT_1008a278);
      iVar2 = FUN_10086f50(param_1,9,0);
      if ((iVar2 == 1) && (iVar2 = FUN_10126016(param_1,param_2,param_3), iVar2 == 1)) {
        FUN_10086f50(param_1,10,0);
      }
    }
  }
  return;
}

