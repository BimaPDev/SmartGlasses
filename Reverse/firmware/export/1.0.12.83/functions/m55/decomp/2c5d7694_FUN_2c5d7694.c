/* FUN_2c5d7694 @ 0x2c5d7694 */

void FUN_2c5d7694(undefined4 param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint in_fpscr;
  undefined8 uVar10;
  undefined1 *local_4c;
  undefined4 uStack_48;
  undefined1 local_44 [12];
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  uVar9 = DAT_2c5d76f8;
  uVar7 = DAT_2c5d6e04;
  uVar6 = DAT_2c5d6ce8;
  piVar1 = DAT_2c5d6c54;
  switch(param_1) {
  case 0:
    FUN_2c5d65e8();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d6bd8,0x4f,DAT_2c5d6bd4);
  case 1:
    iVar5 = *DAT_2c5d6c50;
    local_38 = 0x18;
    local_34 = &local_2c;
    local_34 = (int *)FUN_2c5d6b10(&local_38,0,0);
    local_2c = local_38;
    iVar4 = piVar1[1];
    iVar8 = piVar1[2];
    iVar2 = piVar1[3];
    *local_34 = *piVar1;
    local_34[1] = iVar4;
    local_34[2] = iVar8;
    local_34[3] = iVar2;
    iVar4 = piVar1[4];
    local_30 = local_38;
    local_34[5] = piVar1[5];
    local_34[4] = iVar4;
    *(undefined1 *)((int)local_34 + local_38) = 0;
    uVar6 = FUN_2c5d78f0();
    FUN_2c5d7cfc(uVar6,local_34,1);
    if (local_34 != &local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*DAT_2c5d6c50 == iVar5) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  case 2:
    local_24 = FUN_2c5d6618();
    local_28 = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d6cf0,0x5f,DAT_2c5d6cec);
  case 3:
    break;
  case 4:
    thunk_FUN_2c63c6d4();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d6ee0,0x91,DAT_2c5d6edc);
  case 5:
    FUN_2c5d648c();
    FUN_2c5d6530();
    local_20 = uVar7;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d6e0c,0x79,DAT_2c5d6e08);
  case 6:
    local_20 = 0;
    thunk_FUN_2c63b6c8(&local_20,0);
    local_30 = DAT_2c5d6d88;
    local_28 = local_20;
    local_24 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d6d90,0x6f,DAT_2c5d6d8c);
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d6e6c,0x86,DAT_2c5d6e68);
  case 8:
    iVar4 = *DAT_2c5d7664;
    local_44[0] = 0;
    uStack_48 = 0;
    local_4c = local_44;
    if ((param_2 & 0xff) == 1) {
      FUN_2c5d73dc(&local_4c,0,0,DAT_2c5d7690,7);
    }
    else {
      if ((param_2 & 0xff) != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d768c,0x12e,DAT_2c5d7688,DAT_2c5d7684);
      }
      FUN_2c5d73dc(&local_4c,0,0,DAT_2c5d7668,8);
    }
    uVar6 = FUN_2c48e738();
    FUN_2c48e5b4(uVar6,DAT_2c5d7670,DAT_2c5d766c);
    FUN_2c5dcca4(&local_34,param_3 != 0);
    FUN_2c48e5b4(uVar6,DAT_2c5d7674,local_34);
    if (local_34 != &local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    FUN_2c48e5b4(uVar6,DAT_2c5d7678,local_4c);
    uVar7 = FUN_2c48e738();
    FUN_2c48e5b4(uVar7,DAT_2c5d7670,DAT_2c5d767c);
    FUN_2c48e474(uVar7,DAT_2c5d7680,uVar6);
    uVar6 = FUN_2c48e3e8(uVar7);
    uVar9 = FUN_2c5d78f0();
    FUN_2c5d7cfc(uVar9,uVar6,1);
    FUN_2c48e87c(uVar6);
    FUN_2c48dea0(uVar7);
    if (local_4c != local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*DAT_2c5d7664 == iVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  default:
    return;
  case 0xc:
    iVar4 = FUN_2c48e738();
    if (iVar4 != 0) {
      FUN_2c48e5b4(iVar4,DAT_2c5d73b8,DAT_2c5d73b4);
      iVar5 = FUN_2c48e738();
      if (iVar5 != 0) {
        FUN_2c48e474(iVar4,DAT_2c5d73bc,iVar5);
        FUN_2c48e5b4(iVar5,DAT_2c5d73b8,DAT_2c5d73c0);
        if ((param_2 & 0xff) == 1) {
          FUN_2c48e5b4(iVar5,DAT_2c5d73d4,DAT_2c5d73d0);
        }
        else if ((param_2 & 0xff) == 2) {
          FUN_2c48e5b4(iVar5,DAT_2c5d73d4,DAT_2c5d73d8);
        }
        iVar8 = FUN_2c48e714();
        if (iVar8 != 0) {
          FUN_2c48e474(iVar5,DAT_2c5d73c4,iVar8);
          iVar5 = FUN_2c48e738();
          if (iVar5 != 0) {
            FUN_2c48e444(iVar8,iVar5);
            uVar10 = VectorSignedToFloat(param_3 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
            FUN_2c48e518((int)uVar10,iVar5,DAT_2c5d73c8);
            FUN_2c48e4c8(iVar5,DAT_2c5d73cc,0);
            uVar6 = FUN_2c48e3e8(iVar4);
            uVar7 = FUN_2c5d78f0();
            FUN_2c5d7cfc(uVar7,uVar6,1);
            FUN_2c48e87c(uVar6);
          }
        }
      }
      FUN_2c48dea0(iVar4);
      return;
    }
    return;
  case 0xd:
    iVar4 = FUN_2c48e738();
    if (iVar4 == 0) {
      return;
    }
    FUN_2c48e5b4(iVar4,DAT_2c5d72e8,uVar9);
    FUN_2c48e4c8(iVar4,DAT_2c5d72ec,0);
    iVar5 = FUN_2c48e738();
    if (iVar5 != 0) {
      FUN_2c48e5b4(iVar5,DAT_2c5d72e8,DAT_2c5d72f0);
      FUN_2c48e474(iVar5,DAT_2c5d72f4,iVar4);
      uVar6 = FUN_2c48e3e8(iVar5);
      uVar7 = FUN_2c5d78f0();
      FUN_2c5d7cfc(uVar7,uVar6,1);
      FUN_2c48e87c(uVar6);
      FUN_2c48dea0(iVar5);
      return;
    }
    FUN_2c48dea0(iVar4);
    return;
  }
  local_24 = *DAT_2c5d7028;
  iVar4 = FUN_2c5d6800(param_3,param_3,param_3,0);
  if (iVar4 == -1) {
    local_30 = DAT_2c5d7048;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d7050,0x9e,DAT_2c5d704c);
  }
  iVar5 = FUN_2c5d6754();
  if (iVar5 < 0) {
    local_30 = DAT_2c5d7054;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d7050,0xa4,DAT_2c5d704c);
  }
  iVar8 = FUN_2c5d6840(iVar4);
  iVar2 = FUN_2c5d688c(iVar4);
  if ((iVar8 == -1) || (iVar2 == -1)) {
    local_30 = DAT_2c5d705c;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5d7050,0xaa,DAT_2c5d704c);
  }
  local_28._3_1_ = iVar2 == -1;
  iVar3 = FUN_2c640164(param_3 & 0xff,(int)&local_28 + 3);
  if ((iVar3 != 0) && (local_28._3_1_ != '\0')) {
    local_30 = DAT_2c5d7058;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d7050,0xb1,DAT_2c5d704c);
  }
  uVar6 = FUN_2c48e738();
  FUN_2c48e5b4(uVar6,DAT_2c5d7030,DAT_2c5d702c);
  uVar10 = VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar10,uVar6,DAT_2c5d7034);
  uVar10 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar10,uVar6,DAT_2c5d7038);
  uVar10 = VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar10,uVar6,DAT_2c5d703c);
  uVar10 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  FUN_2c48e518((int)uVar10,uVar6,DAT_2c5d7040);
  FUN_2c48e4c8(uVar6,DAT_2c5d7044,param_2 != 0);
  uVar7 = FUN_2c48e3e8(uVar6);
  uVar9 = FUN_2c5d78f0();
  FUN_2c5d7cfc(uVar9,uVar7,1);
  FUN_2c48e87c(uVar7);
  FUN_2c48dea0(uVar6);
  if (*DAT_2c5d7028 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

