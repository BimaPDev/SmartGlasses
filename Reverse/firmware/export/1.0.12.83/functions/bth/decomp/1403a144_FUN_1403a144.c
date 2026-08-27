/* FUN_1403a144 @ 0x1403a144 */

undefined4 FUN_1403a144(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_lr;
  uint uVar10;
  
  iVar3 = DAT_1403a2bc;
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x20) {
    return 0xfffffffe;
  }
  if ((param_1 & 0x1f) == 0) {
    if (param_3 < 6) {
      uVar6 = 0;
      if ((param_3 != 0) && (param_3 != 3)) {
        if ((1 < param_3 - 1) && (param_3 != 4)) {
          return 0xfffffffb;
        }
        uVar6 = 4;
      }
      iVar8 = 0;
      param_2 = param_2 + (param_1 - 1);
      uVar7 = param_1 & 0xffffffe0 | (uint)(2 < param_3) | uVar6 | 2;
      uVar6 = (param_4 & 7) << 1 | param_2 & 0xffffffe0 | 1;
      do {
        *(int *)(iVar3 + 0x98) = iVar8;
        puVar2 = DAT_1403a2c8;
        uVar5 = *(uint *)(iVar3 + 0xa0);
        if ((((uVar5 & 1) != 0) && (uVar10 = uVar5 | 0x1f, param_1 <= uVar10)) &&
           (uVar9 = *(uint *)(iVar3 + 0x9c) & 0xffffffe0, uVar9 <= param_2)) {
          if ((param_1 < uVar9) || (uVar10 < param_2)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402b0f8(DAT_1403a2c4,DAT_1403a2c0,param_1,param_2,iVar8,uVar9,uVar10);
          }
          if ((param_1 != uVar9) || (param_2 != uVar10)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402b0f8(DAT_1403a2c4,DAT_1403a2c0,param_1,param_2,iVar8,uVar9,uVar10);
          }
          if ((uVar7 == *(uint *)(iVar3 + 0x9c)) && (uVar6 == uVar5)) {
            return 0;
          }
          uVar5 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            uVar5 = isIRQinterruptsEnabled();
          }
          if ((uVar5 & 1) == 0) {
            *DAT_1403a2c8 = 0x1403a25e;
            puVar2[1] = unaff_lr;
            disableIRQinterrupts();
          }
          iVar3 = DAT_1403a2bc;
          *(int *)(DAT_1403a2bc + 0x98) = iVar8;
          *(uint *)(iVar3 + 0x9c) = uVar7;
          *(uint *)(iVar3 + 0xa0) = uVar6;
          DataSynchronizationBarrier(0xf);
          InstructionSynchronizationBarrier(0xf);
          if ((uVar5 & 1) == 0) {
            *DAT_1403a2c8 = 0xffffffff;
            enableIRQinterrupts();
            return 0;
          }
          return 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 8);
      iVar3 = FUN_14039ec8();
      puVar2 = DAT_1403a2c8;
      if (iVar3 == 0xff) {
        uVar4 = 0xfffffffe;
      }
      else {
        uVar5 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          uVar5 = isIRQinterruptsEnabled();
        }
        if ((uVar5 & 1) == 0) {
          *DAT_1403a2c8 = 0x1403a1f0;
          puVar2[1] = unaff_lr;
          disableIRQinterrupts();
        }
        iVar8 = DAT_1403a2bc;
        *(int *)(DAT_1403a2bc + 0x98) = iVar3;
        *(uint *)(iVar8 + 0x9c) = uVar7;
        *(uint *)(iVar8 + 0xa0) = uVar6;
        DataSynchronizationBarrier(0xf);
        InstructionSynchronizationBarrier(0xf);
        if ((uVar5 & 1) != 0) {
          return 0;
        }
        *DAT_1403a2c8 = 0xffffffff;
        enableIRQinterrupts();
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xfffffffc;
    }
  }
  else {
    uVar4 = 0xfffffffd;
  }
  return uVar4;
}

