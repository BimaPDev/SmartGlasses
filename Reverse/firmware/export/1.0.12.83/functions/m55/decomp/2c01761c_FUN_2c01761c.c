/* FUN_2c01761c @ 0x2c01761c */

void FUN_2c01761c(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_34;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c01783c;
  local_30 = local_30 & 0xffffff00;
  FUN_2c0174bc(param_1,&local_30,param_3,0);
  uVar1 = FUN_2c0174f8(local_30 & 0xff);
  local_30 = local_30 & 0xffffff00;
  FUN_2c0174bc(param_1,&local_30);
  uVar2 = FUN_2c017504(local_30 & 0xff);
  FUN_2c0155a8();
  local_34 = 0;
  if ((uVar2 - 1 & (param_2 | param_3)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c017848,DAT_2c017840,param_2,param_3);
  }
  iVar3 = FUN_2c01747c(param_1,&local_34);
  if (iVar3 == 0) {
    uVar5 = uVar1 - 1 & param_2;
    if (param_3 <= uVar5) {
      uVar5 = param_3;
    }
    local_34 = param_2 + local_34;
    if (uVar2 <= uVar5) {
      uVar6 = 0;
      do {
        iVar3 = FUN_2c016c10(param_1,local_34,uVar2,param_4 == 0);
        while (iVar3 != 0) {
          if (iVar3 != 1) {
            FUN_2c01747c(param_1,&local_30);
            goto LAB_2c0177ea;
          }
          while( true ) {
            thunk_FUN_2c016438();
            iVar3 = FUN_2c017408(param_1,2);
            if (iVar3 == 0) break;
            FUN_2c0185bc(10);
          }
          iVar3 = FUN_2c016c10(param_1,local_34,uVar2,param_4 == 0);
        }
        uVar6 = uVar6 + 1;
        local_34 = uVar2 + local_34;
      } while (uVar6 < uVar5 / uVar2);
    }
    uVar6 = (param_3 - uVar5) / uVar1;
    uVar4 = uVar1 * uVar6;
    if (uVar1 <= uVar4) {
      uVar7 = 0;
      do {
        iVar3 = FUN_2c016c10(param_1,local_34,uVar1,param_4 == 0);
        while (iVar3 != 0) {
          if (iVar3 != 1) {
            FUN_2c01747c(param_1,&local_30);
                    /* WARNING: Subroutine does not return */
            FUN_2c00dfac(DAT_2c017844,DAT_2c017840,iVar3,local_34,local_30,uVar1);
          }
          while( true ) {
            thunk_FUN_2c016438();
            iVar3 = FUN_2c017408(param_1,2);
            if (iVar3 == 0) break;
            FUN_2c0185bc(10);
          }
          iVar3 = FUN_2c016c10(param_1,local_34,uVar1,param_4 == 0);
        }
        uVar7 = uVar7 + 1;
        local_34 = uVar1 + local_34;
      } while (uVar7 < uVar4 / uVar1);
    }
    uVar1 = (param_3 - uVar5) - uVar1 * uVar6;
    if (uVar2 <= uVar1) {
      uVar5 = 0;
      do {
        iVar3 = FUN_2c016c10(param_1,local_34,uVar2,param_4 == 0);
        while (iVar3 != 0) {
          if (iVar3 != 1) {
            FUN_2c01747c(param_1,&local_30);
LAB_2c0177ea:
                    /* WARNING: Subroutine does not return */
            FUN_2c00dfac(DAT_2c017844,DAT_2c017840,iVar3,local_34,local_30,uVar2);
          }
          while( true ) {
            thunk_FUN_2c016438();
            iVar3 = FUN_2c017408(param_1,2);
            if (iVar3 == 0) break;
            FUN_2c0185bc(10);
          }
          iVar3 = FUN_2c016c10(param_1,local_34,uVar2,param_4 == 0);
        }
        uVar5 = uVar5 + 1;
        local_34 = local_34 + uVar2;
      } while (uVar5 < uVar1 / uVar2);
    }
    if (*DAT_2c01783c == local_2c) {
      return;
    }
    FUN_2c00a1f8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(DAT_2c01784c,DAT_2c017840);
}

