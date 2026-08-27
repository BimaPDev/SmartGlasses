/* FUN_2c017a5c @ 0x2c017a5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c017a5c(undefined4 param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_lr;
  undefined1 uStack_31;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = *_DAT_2c017b70;
  uStack_31 = 0;
  uStack_30 = param_2;
  FUN_2c0174bc(param_1,&uStack_31);
  uVar3 = func_0x2c017510(uStack_31);
  iVar4 = FUN_2c01747c(param_1,&uStack_30);
  puVar2 = _DAT_2c017b74;
  uVar7 = param_4;
  if (iVar4 != 0) {
LAB_2c017b58:
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(_DAT_2c017b80,_DAT_2c017b78,0x267,iVar4,param_1,param_2,uVar7);
  }
  uStack_30 = uStack_30 + param_2;
  iVar4 = uStack_30 - uVar3 * (uStack_30 / uVar3);
  uVar8 = uVar3 - iVar4;
  if (uVar8 < param_4) {
    uVar6 = ((param_4 - 1) + iVar4) / uVar3 + 1;
    if (uVar6 == 0) {
LAB_2c017b32:
      if (*_DAT_2c017b70 == iStack_2c) {
        return;
      }
      iVar4 = FUN_2c00a1f8();
      goto LAB_2c017b58;
    }
  }
  else {
    uVar6 = 1;
    uVar8 = param_4;
  }
  param_2 = 0;
  uVar5 = 0;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = isIRQinterruptsEnabled();
  }
  if (iVar4 << 0x1f < 0) goto LAB_2c017b18;
  do {
    *puVar2 = 0x2c017adc;
    puVar2[1] = unaff_lr;
    disableIRQinterrupts();
    iVar4 = FUN_2c016b04(param_1,uStack_30 + param_2,param_3 + param_2,uVar8);
    *puVar2 = 0xffffffff;
    enableIRQinterrupts();
    while( true ) {
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(_DAT_2c017b7c,_DAT_2c017b78,0x291,iVar4);
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + uVar8;
      uVar7 = uVar3;
      if (uVar6 <= uVar5) goto LAB_2c017b32;
      uVar8 = param_4 - param_2;
      if (uVar3 <= param_4 - param_2) {
        uVar8 = uVar3;
      }
      iVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar4 = isIRQinterruptsEnabled();
      }
      if (-1 < iVar4 << 0x1f) break;
LAB_2c017b18:
      iVar4 = FUN_2c016b04(param_1,uStack_30 + param_2,param_3 + param_2,uVar8);
    }
  } while( true );
}

