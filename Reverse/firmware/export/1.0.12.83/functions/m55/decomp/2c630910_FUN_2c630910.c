/* FUN_2c630910 @ 0x2c630910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c630910(int param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int unaff_r6;
  int iVar9;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_24;
  
  iStack_24 = *_LAB_2c630a88;
  iVar5 = FUN_2c6041dc(param_1,0,param_3,0);
  if (iVar5 != 0) {
    uVar6 = FUN_2c63736c();
    iVar7 = FUN_2c604148(iVar5,0,uVar6);
    if (iVar7 == 2) {
      iVar9 = FUN_2c607404(param_1);
      iVar7 = FUN_2c6073ec(iVar5);
      iVar9 = iVar9 - iVar7;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      FUN_2c606fa8(iVar5,(iVar9 << 0xf) >> 0x10);
    }
    else if (iVar7 == 3) {
      sVar4 = FUN_2c607404(param_1);
      sVar2 = FUN_2c6073ec(iVar5);
      FUN_2c606fa8(iVar5,(int)(short)(sVar4 - sVar2));
    }
    else if (iVar7 == 1) {
      FUN_2c606fa8(iVar5,0);
    }
    iVar7 = FUN_2c6033b4(param_1,0,0x57);
    sVar2 = FUN_2c6033b4(param_1,0,0x59);
    sVar4 = *(short *)(iVar7 + 8);
    iVar9 = (int)sVar4;
    iVar7 = FUN_2c607440(param_1);
    uVar3 = FUN_2c6033b4(param_1,0,100);
    if ((param_2 == 0) || (uVar3 == 0)) {
      if ((int)((uint)*(byte *)(param_1 + 0x2a) << 0x1f) < 0) {
        FUN_2c630880(param_1);
      }
      sVar1 = *(short *)(param_1 + 0x26);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      FUN_2c62e838(iVar5,_LAB_2c630a8c);
      iVar7 = (int)(short)((short)(iVar7 >> 1) - (sVar1 * (sVar2 + sVar4) + (short)(iVar9 >> 1)));
      if (*_LAB_2c630a88 == iStack_24) {
        iVar8 = *DAT_2c607044;
        iVar9 = FUN_2c603c78(iVar5,8,&stack0xffffffe8,0);
        if (iVar9 == 1) {
          if (unaff_r6 == iVar7) goto LAB_2c607024;
        }
        else if (iVar9 != 0) goto LAB_2c607024;
        FUN_2c606cd0(iVar5,iVar7,0);
LAB_2c607024:
        if (*DAT_2c607044 != iVar8) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        return;
      }
      goto LAB_2c630a84;
    }
    sVar1 = *(short *)(param_1 + 0x26);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 1;
    }
    FUN_2c62e7b4(&iStack_68);
    uStack_64 = _LAB_2c630a8c;
    iStack_68 = iVar5;
    uStack_48 = FUN_2c607394(iVar5);
    uStack_3c = (uint)uVar3;
    iStack_40 = (int)(short)((short)(iVar7 >> 1) - (sVar1 * (sVar4 + sVar2) + (short)(iVar9 >> 1)));
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

