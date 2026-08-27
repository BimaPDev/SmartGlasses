/* FUN_2c630d7e @ 0x2c630d7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c630d7e(int param_1,int param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_r6;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char in_NG;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_24;
  
  uVar13 = (uint)*(ushort *)(param_1 + 0x24);
  if (in_NG != '\0') {
    iVar10 = (int)((ulonglong)_LAB_2c630de4 * (ulonglong)uVar13 >> 0x20);
    param_3 = uVar13 - iVar10;
    uVar11 = iVar10 + (param_3 >> 1);
    uVar12 = (uVar11 & 0x3ffff) >> 2;
    if (param_4 < uVar12) {
      sVar4 = (short)(uVar11 * 0x4000 >> 0x10);
      uVar3 = (short)(*(ushort *)(param_1 + 0x26) / uVar12) * sVar4;
      param_3 = (uint)uVar3;
      uVar3 = *(ushort *)(param_1 + 0x26) - uVar3;
      uVar8 = (int)(short)uVar3 - param_4;
      if ((int)uVar8 < 0) {
        uVar8 = -uVar8;
      }
      if ((uVar11 & 0x3ffff) >> 3 < uVar8) {
        if (param_4 < uVar3) {
          sVar4 = (short)uVar12;
        }
        else {
          sVar4 = -sVar4;
        }
        param_4 = (uint)(ushort)((short)param_4 + sVar4);
      }
      param_4 = param_4 + param_3 & 0xffff;
    }
  }
  if (uVar13 <= param_4) {
    param_4 = uVar13 - 1 & 0xffff;
  }
  *(short *)(param_1 + 0x26) = (short)param_4;
  *(short *)(param_1 + 0x28) = (short)param_4;
  iStack_24 = *_LAB_2c630a88;
  iVar10 = FUN_2c6041dc(param_1,0,param_3,0);
  if (iVar10 != 0) {
    uVar5 = FUN_2c63736c();
    iVar6 = FUN_2c604148(iVar10,0,uVar5);
    if (iVar6 == 2) {
      iVar9 = FUN_2c607404(param_1);
      iVar6 = FUN_2c6073ec(iVar10);
      iVar9 = iVar9 - iVar6;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      FUN_2c606fa8(iVar10,(iVar9 << 0xf) >> 0x10);
    }
    else if (iVar6 == 3) {
      sVar4 = FUN_2c607404(param_1);
      sVar2 = FUN_2c6073ec(iVar10);
      FUN_2c606fa8(iVar10,(int)(short)(sVar4 - sVar2));
    }
    else if (iVar6 == 1) {
      FUN_2c606fa8(iVar10,0);
    }
    iVar6 = FUN_2c6033b4(param_1,0,0x57);
    sVar2 = FUN_2c6033b4(param_1,0,0x59);
    sVar4 = *(short *)(iVar6 + 8);
    iVar9 = (int)sVar4;
    iVar6 = FUN_2c607440(param_1);
    uVar3 = FUN_2c6033b4(param_1,0,100);
    if ((param_2 == 0) || (uVar3 == 0)) {
      if ((int)((uint)*(byte *)(param_1 + 0x2a) << 0x1f) < 0) {
        FUN_2c630880(param_1);
      }
      sVar1 = *(short *)(param_1 + 0x26);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      FUN_2c62e838(iVar10,_LAB_2c630a8c);
      iVar6 = (int)(short)((short)(iVar6 >> 1) - (sVar1 * (sVar2 + sVar4) + (short)(iVar9 >> 1)));
      if (*_LAB_2c630a88 == iStack_24) {
        iVar7 = *DAT_2c607044;
        iVar9 = FUN_2c603c78(iVar10,8,&stack0xffffffe8,0);
        if (iVar9 == 1) {
          if (unaff_r6 == iVar6) goto LAB_2c607024;
        }
        else if (iVar9 != 0) goto LAB_2c607024;
        FUN_2c606cd0(iVar10,iVar6,0);
LAB_2c607024:
        if (*DAT_2c607044 == iVar7) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      goto LAB_2c630a84;
    }
    sVar1 = *(short *)(param_1 + 0x26);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 1;
    }
    FUN_2c62e7b4(&iStack_68);
    uStack_64 = _LAB_2c630a8c;
    iStack_68 = iVar10;
    uStack_48 = FUN_2c607394(iVar10);
    uStack_3c = (uint)uVar3;
    iStack_40 = (int)(short)((short)(iVar6 >> 1) - (sVar1 * (sVar4 + sVar2) + (short)(iVar9 >> 1)));
    uStack_5c = _LAB_2c630a90;
    uStack_4c = _LAB_2c630a94;
    uStack_44 = uStack_48;
    FUN_2c62e8ec(&iStack_68);
  }
  if (*_LAB_2c630a88 == iStack_24) {
    return;
  }
LAB_2c630a84:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

