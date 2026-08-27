/* FUN_2c012cae @ 0x2c012cae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c012cae(int param_1,int param_2,undefined4 param_3,byte *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_lr;
  ushort uStack_16;
  uint uStack_14;
  
  puVar3 = _DAT_2c012dc4;
  puVar2 = _DAT_2c00d50c;
  uVar5 = (uint)*param_4;
  uStack_14 = *_DAT_2c012dc0;
  if ((uVar5 == 0) || (uVar5 == 3)) {
    if (param_1 == 1) {
      if (uVar5 - 1 < 2) goto LAB_2c012cf8;
LAB_2c012d40:
      uVar5 = *_DAT_2c012dc0 ^ uStack_14;
      if (uVar5 == 0) {
        uStack_14 = *_DAT_2c00d508;
        iVar7 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar7 = getBasePriority();
        }
        uVar4 = 0;
        if (iVar7 != 0x40) {
          uVar4 = 0x2c00d4b4;
          *_DAT_2c00d50c = 0x2c00d4b4;
          puVar2[1] = unaff_lr;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x40);
        }
        FUN_2c008e4c(2,&uStack_16,uVar4,0x40);
        if (param_2 == 0) {
          uStack_16 = uStack_16 & 0x7fff;
        }
        else {
          uStack_16 = uStack_16 | 0x8000;
        }
        FUN_2c008f74(2);
        if (iVar7 == 0) {
          *_DAT_2c00d50c = 0xffffffff;
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(iVar7);
        }
        if (*_DAT_2c00d508 == uStack_14) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c0084a8();
      }
      goto LAB_2c012dae;
    }
LAB_2c012cda:
    param_1 = 0;
  }
  else {
    if (param_1 == 1) {
      if (1 < uVar5 - 1) goto LAB_2c012cdc;
LAB_2c012cf8:
      iVar6 = uVar5 - 1;
      iVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar7 = getBasePriority();
      }
      if (iVar7 != 0x40) {
        iVar6 = 0x2c012d04;
        *_DAT_2c012dc4 = 0x2c012d04;
        puVar3[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      FUN_2c008e4c(0x4c,&uStack_16,iVar6,0x40);
      if (param_2 == 0) {
        uStack_16 = uStack_16 & 0xdfff;
      }
      else {
        uStack_16 = uStack_16 | 0x2000;
      }
      FUN_2c008f74(0x4c);
      param_2 = extraout_r1;
    }
    else {
      if (param_1 == 5) goto LAB_2c012d40;
      if (param_1 != 6) goto LAB_2c012cda;
      uVar5 = uVar5 - 1;
      if (1 < uVar5) {
        param_1 = 1;
        goto LAB_2c012cdc;
      }
      iVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar7 = getBasePriority();
      }
      if (iVar7 != 0x40) {
        uVar5 = 0x2c012d70;
        *_DAT_2c012dc4 = 0x2c012d70;
        puVar3[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      FUN_2c008e4c(0x65,&uStack_16,uVar5,0x40);
      if (param_2 == 0) {
        uStack_16 = uStack_16 & 0xfffe;
      }
      else {
        uStack_16 = uStack_16 | 1;
      }
      FUN_2c008f74(0x65);
      param_2 = extraout_r1_00;
    }
    if (iVar7 == 0) {
      *_DAT_2c012dc4 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar7);
    }
    param_1 = 0;
  }
LAB_2c012cdc:
  uVar5 = *_DAT_2c012dc0 ^ uStack_14;
  if (uVar5 == 0) {
    return param_1;
  }
LAB_2c012dae:
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8(param_1,param_2,uVar5,0);
}

