/* FUN_2c49a87c @ 0x2c49a87c */

undefined4 FUN_2c49a87c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  
  iVar4 = DAT_2c49aa10;
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x20) {
    return 0xfffffffe;
  }
  if ((param_1 & 0x1f) == 0) {
    if (param_3 < 6) {
      if ((param_3 == 0) || (param_3 == 3)) {
        uVar6 = 0;
      }
      else {
        if ((1 < param_3 - 1) && (param_3 != 4)) {
          return 0xfffffffb;
        }
        uVar6 = 4;
      }
      param_2 = param_2 + (param_1 - 1);
      iVar5 = 0;
      uVar7 = param_1 & 0xffffffe0 | (uint)(2 < param_3) | uVar6 | 2;
      uVar6 = (param_4 & 7) << 1 | param_2 & 0xffffffe0 | 1;
      do {
        *(int *)(iVar4 + 0x98) = iVar5;
        puVar2 = DAT_2c49aa1c;
        uVar8 = *(uint *)(iVar4 + 0xa0);
        if ((uVar8 & 1) != 0) {
          uVar9 = *(uint *)(iVar4 + 0x9c) & 0xffffffe0;
          uVar10 = uVar8 | 0x1f;
          if ((uVar9 <= param_2) && (param_1 <= uVar10)) {
            if ((param_1 < uVar9) || (uVar10 < param_2)) {
                    /* WARNING: Subroutine does not return */
              FUN_2c673ca8(DAT_2c49aa18,DAT_2c49aa14,param_1,param_2,iVar5,uVar9,uVar10);
            }
            if ((param_2 != uVar10) || (param_1 != uVar9)) {
                    /* WARNING: Subroutine does not return */
              FUN_2c673ca8(DAT_2c49aa18,DAT_2c49aa14,param_1,param_2,iVar5,uVar9,uVar10);
            }
            if ((uVar6 == uVar8) && (uVar7 == *(uint *)(iVar4 + 0x9c))) {
              return 0;
            }
            uVar8 = 0;
            bVar1 = (bool)isCurrentModePrivileged();
            if (bVar1) {
              uVar8 = isIRQinterruptsEnabled();
            }
            uVar8 = uVar8 & 1;
            if (uVar8 == 0) {
              *DAT_2c49aa1c = 0x2c49a97a;
              puVar2[1] = unaff_lr;
              disableIRQinterrupts();
            }
            iVar4 = DAT_2c49aa10;
            *(int *)(DAT_2c49aa10 + 0x98) = iVar5;
            goto LAB_2c49a986;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x10);
      uVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar8 = isIRQinterruptsEnabled();
      }
      uVar8 = uVar8 & 1;
      if (uVar8 == 0) {
        *DAT_2c49aa1c = 0x2c49a932;
        puVar2[1] = unaff_lr;
        disableIRQinterrupts();
      }
      uVar9 = 0;
      do {
        uVar10 = 1 << (uVar9 & 0xff);
        if ((uVar10 & *DAT_2c49aa20) == 0) {
          *DAT_2c49aa20 = uVar10 | *DAT_2c49aa20;
          if (uVar8 == 0) {
            *DAT_2c49aa1c = 0xffffffff;
            enableIRQinterrupts();
          }
          puVar2 = DAT_2c49aa1c;
          uVar8 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            uVar8 = isIRQinterruptsEnabled();
          }
          uVar8 = uVar8 & 1;
          if (uVar8 == 0) {
            *DAT_2c49aa1c = 0x2c49a9c4;
            puVar2[1] = unaff_lr;
            disableIRQinterrupts();
          }
          iVar4 = DAT_2c49aa10;
          *(uint *)(DAT_2c49aa10 + 0x98) = uVar9;
LAB_2c49a986:
          *(uint *)(iVar4 + 0x9c) = uVar7;
          *(uint *)(iVar4 + 0xa0) = uVar6;
          DataSynchronizationBarrier(0xf);
          InstructionSynchronizationBarrier(0xf);
          if (uVar8 == 0) {
            *DAT_2c49aa1c = 0xffffffff;
            enableIRQinterrupts();
            return 0;
          }
          return 0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x10);
      if (uVar8 == 0) {
        *DAT_2c49aa1c = 0xffffffff;
        enableIRQinterrupts();
      }
      uVar3 = 0xfffffffe;
    }
    else {
      uVar3 = 0xfffffffc;
    }
  }
  else {
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}

