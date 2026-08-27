/* FUN_2c017850 @ 0x2c017850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c017850(undefined4 param_1,uint param_2,int param_3,int param_4,byte param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  int extraout_r2;
  uint uVar6;
  uint extraout_r3;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r8;
  uint unaff_r9;
  undefined1 uStack_79;
  uint uStack_78;
  int iStack_74;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_40;
  int iStack_3c;
  undefined1 uStack_31;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = *piRam2c017930;
  iStack_30 = 0;
  uStack_31 = 0;
  iStack_3c = param_3;
  FUN_2c0174bc(param_1,&uStack_31);
  uVar3 = func_0x2c017510(uStack_31);
  iVar4 = FUN_2c01747c(param_1,&iStack_30);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(uRam2c01793c,uRam2c017934,iVar4);
  }
  uVar6 = param_4 - 1;
  iStack_30 = iStack_30 + param_2;
  uStack_40 = (uVar6 + uVar3) / uVar3;
  uVar9 = (uint)CARRY4(uVar6,uVar3);
  uVar5 = uVar9;
  if (!CARRY4(uVar6,uVar3)) {
    do {
      unaff_r8 = iStack_3c + uVar9;
      param_2 = param_4 - uVar9;
      if (uVar3 <= param_4 - uVar9) {
        param_2 = uVar3;
      }
      while (uStack_48 = param_5 ^ 1,
            iVar4 = FUN_2c016f78(param_1,iStack_30 + uVar9,unaff_r8,param_2), iVar4 != 0) {
        if (iVar4 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_2c00dfac(uRam2c017938,uRam2c017934,iVar4);
        }
        while( true ) {
          thunk_FUN_2c016438();
          iVar4 = FUN_2c017408(param_1,1);
          if (iVar4 == 0) break;
          FUN_2c0185bc(10);
        }
      }
      unaff_r9 = uVar5 + 1;
      uVar9 = uVar9 + param_2;
      uVar5 = unaff_r9;
    } while (unaff_r9 < uStack_40);
  }
  if (*piRam2c017930 == iStack_2c) {
    return;
  }
  FUN_2c00a1f8();
  uVar5 = uVar9 >> 0xc;
  uStack_4c = 0x2c017931;
  uStack_6c = 0;
  iStack_74 = *_DAT_2c017a48;
  uStack_79 = 0;
  uStack_78 = extraout_r1;
  uStack_68 = param_2;
  uStack_64 = uVar9;
  uStack_60 = param_5 ^ 1;
  iStack_5c = unaff_r8;
  uStack_58 = unaff_r9;
  uStack_54 = uVar3;
  iStack_50 = param_4;
  FUN_2c0174bc(uVar5,&uStack_79);
  uVar3 = func_0x2c017510(uStack_79);
  iVar4 = FUN_2c01747c(uVar5,&uStack_78);
  puVar2 = _DAT_2c017a4c;
  if (iVar4 != 0) {
LAB_2c017a3c:
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(_DAT_2c017a58,_DAT_2c017a50,iVar4,uVar5);
  }
  uStack_78 = uStack_78 + extraout_r1;
  iVar4 = uStack_78 - uVar3 * (uStack_78 / uVar3);
  uVar6 = uVar3 - iVar4;
  if (uVar6 < extraout_r3) {
    uVar9 = ((extraout_r3 - 1) + iVar4) / uVar3 + 1;
    if (uVar9 == 0) {
LAB_2c017a16:
      if (*_DAT_2c017a48 == iStack_74) {
        return;
      }
      iVar4 = FUN_2c00a1f8();
      goto LAB_2c017a3c;
    }
  }
  else {
    uVar9 = 1;
    uVar6 = extraout_r3;
  }
  iVar7 = 0;
  uVar8 = 0;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = isIRQinterruptsEnabled();
  }
  if (iVar4 << 0x1f < 0) goto LAB_2c0179fc;
  do {
    *puVar2 = 0x2c0179c0;
    puVar2[1] = 0x2c017931;
    disableIRQinterrupts();
    iVar4 = FUN_2c01699c(uVar5,uStack_78 + iVar7,extraout_r2 + iVar7,uVar6);
    *puVar2 = 0xffffffff;
    enableIRQinterrupts();
    while( true ) {
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(_DAT_2c017a54,_DAT_2c017a50,0x250,iVar4);
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + uVar6;
      if (uVar9 <= uVar8) goto LAB_2c017a16;
      uVar6 = extraout_r3 - iVar7;
      if (uVar3 <= extraout_r3 - iVar7) {
        uVar6 = uVar3;
      }
      iVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar4 = isIRQinterruptsEnabled();
      }
      if (-1 < iVar4 << 0x1f) break;
LAB_2c0179fc:
      iVar4 = FUN_2c01699c(uVar5,uStack_78 + iVar7,extraout_r2 + iVar7,uVar6);
    }
  } while( true );
}

