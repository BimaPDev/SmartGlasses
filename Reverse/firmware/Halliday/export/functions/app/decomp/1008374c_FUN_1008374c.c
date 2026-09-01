/* FUN_1008374c @ 0x1008374c */

undefined4 FUN_1008374c(int param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  bool bVar10;
  
  piVar8 = *(int **)(param_1 + 4);
  if (param_2 < (uint)piVar8[3]) {
    if (param_4 < 0x65) {
      iVar2 = FUN_10083700(*(undefined4 *)(param_1 + 0x10));
      if (iVar2 != 0) {
        FUN_100a5b78(DAT_100838c4 | ((int)PTR_DAT_100838b0 - (int)PTR_DAT_100838ac) * 0x20 & 0xff00U
                     ,PTR_s_pwm_acts_freq_duty_set_100838b8,DAT_100838c8);
        return 0xfffffff2;
      }
      if (param_3 <= DAT_100838cc) {
        uVar5 = (DAT_100838cc / param_3 + 0xfffe) / 0xffff;
        uVar1 = 0;
        do {
          uVar4 = uVar1 + 1;
          if (uVar5 == uVar4) {
            uVar1 = uVar1 & 0xffff;
            uVar5 = uVar1 + 1 & 0xffff;
            goto LAB_10083824;
          }
          uVar1 = uVar4;
        } while (uVar4 != 0x100);
        bVar10 = (uVar5 & 0xffff) < 0x101;
        if (bVar10) {
          uVar5 = 0x100;
        }
        else {
          uVar5 = 0x200;
        }
        uVar1 = !bVar10 + 0xff;
LAB_10083824:
        if (DAT_100838cc / uVar5 < param_3) {
          param_3 = 1;
        }
        else {
          param_3 = (DAT_100838cc / uVar5) / param_3;
          if (0xfffe < param_3) {
            param_3 = 0xffff;
          }
        }
        uVar9 = 0;
        bVar10 = (bool)isCurrentModePrivileged();
        if (bVar10) {
          uVar9 = getBasePriority();
        }
        bVar10 = (bool)isCurrentModePrivileged();
        if ((bVar10) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
          setBasePriority(0x20);
        }
        InstructionSynchronizationBarrier(0xf);
        uVar5 = (uint)param_5;
        bVar10 = uVar5 == 1;
        *(uint *)((param_2 + 0x1000041a) * 4) = uVar1 | 0x200;
        if (bVar10) {
          uVar5 = 4;
        }
        iVar2 = *piVar8;
        iVar7 = param_2 * 0x100;
        iVar6 = iVar2 + param_2 * 0x100;
        *(undefined4 *)(iVar7 + iVar2) = 0;
        if (bVar10) {
          *(uint *)(iVar7 + iVar2) = uVar5;
        }
        if (!bVar10) {
          *(undefined4 *)(iVar7 + iVar2) = 0;
        }
        *(uint *)(iVar6 + 0x14) = param_3;
        *(uint *)(iVar6 + 0x18) = (param_3 * param_4) / 100;
        *(uint *)(iVar7 + iVar2) = *(uint *)(iVar7 + iVar2) | 0x18;
        bVar10 = (bool)isCurrentModePrivileged();
        if (bVar10) {
          setBasePriority(uVar9);
        }
        InstructionSynchronizationBarrier(0xf);
        return 0;
      }
      uVar1 = ((int)PTR_DAT_100838b0 - (int)PTR_DAT_100838ac) * 0x20 & 0xff00U | 0xeb0011;
      puVar3 = DAT_100838d4;
      uVar9 = DAT_100838d0;
    }
    else {
      uVar1 = DAT_100838bc | ((int)PTR_DAT_100838b0 - (int)PTR_DAT_100838ac) * 0x20 & 0xff00U;
      puVar3 = PTR_s_pwm_acts_freq_duty_set_100838b8;
      uVar9 = DAT_100838c0;
    }
    FUN_100a5b78(uVar1,puVar3,uVar9);
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_100838b0 - (int)PTR_DAT_100838ac) * 0x20 & 0xff00U | 0x2140011,
                 PTR_s_pwm_acts_freq_duty_set_100838b8,PTR_s_invalid_chan__d_100838b4,param_2);
  }
  return 0xffffffea;
}

