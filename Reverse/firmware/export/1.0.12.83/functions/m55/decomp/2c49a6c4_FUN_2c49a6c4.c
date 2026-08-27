/* FUN_2c49a6c4 @ 0x2c49a6c4 */

undefined4 FUN_2c49a6c4(uint *param_1,uint param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint in_r12;
  undefined4 unaff_lr;
  uint uVar12;
  bool bVar13;
  uint local_3c;
  
  puVar4 = DAT_2c49a86c;
  iVar3 = DAT_2c49a860;
  if (param_2 == 0) {
    uVar10 = 0xffffff9c;
    local_3c = 0;
  }
  else {
    uVar10 = 0xffffff9c;
    uVar5 = 0;
    in_r12 = 0;
    local_3c = 0;
    puVar7 = param_1;
    do {
      while (puVar2 = DAT_2c49a85c, uVar8 = puVar7[1], uVar8 == 0) {
LAB_2c49a7a4:
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 3;
        if (param_2 == uVar5) goto LAB_2c49a7cc;
      }
      if (in_r12 < 0x10) {
        uVar6 = *puVar7;
        uVar11 = (uint)(byte)puVar7[2];
        bVar1 = *(byte *)((int)puVar7 + 9);
        if (uVar8 < 0x20) {
          uVar10 = 0xfffffffe;
        }
        else if ((uVar6 & 0x1f) == 0) {
          if (uVar11 < 6) {
            uVar12 = 0;
            if ((uVar11 != 0) && (uVar11 != 3)) {
              if ((1 < uVar11 - 1) && (uVar11 != 4)) {
                uVar10 = 0xfffffffb;
                goto LAB_2c49a7b8;
              }
              uVar12 = 4;
            }
            uVar9 = 0;
            bVar13 = (bool)isCurrentModePrivileged();
            if (bVar13) {
              uVar9 = isIRQinterruptsEnabled();
            }
            if ((uVar9 & 1) == 0) {
              *DAT_2c49a85c = 0x2c49a736;
              puVar2[1] = unaff_lr;
              disableIRQinterrupts();
            }
            *(uint *)(iVar3 + 0x98) = in_r12;
            uVar12 = uVar6 & 0xffffffe0 | uVar12;
            if (2 < uVar11) {
              uVar12 = uVar12 | 1;
            }
            *(uint *)(iVar3 + 0x9c) = uVar12 | 2;
            *(uint *)(iVar3 + 0xa0) = (uVar8 + uVar6) - 1 & 0xffffffe0 | (bVar1 & 7) << 1 | 1;
            DataSynchronizationBarrier(0xf);
            InstructionSynchronizationBarrier(0xf);
            if ((uVar9 & 1) == 0) {
              *DAT_2c49a85c = 0xffffffff;
              enableIRQinterrupts();
            }
            if (param_3 != 0) {
              *puVar4 = 1 << (in_r12 & 0xff) | *puVar4;
            }
            in_r12 = in_r12 + 1;
            uVar10 = 0;
            goto LAB_2c49a7a4;
          }
          uVar10 = 0xfffffffc;
        }
        else {
          uVar10 = 0xfffffffd;
        }
      }
LAB_2c49a7b8:
      uVar8 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 3;
      local_3c = local_3c | 1 << uVar8;
    } while (param_2 != uVar5);
  }
LAB_2c49a7cc:
  DataMemoryBarrier(0x1f);
  *(undefined4 *)(DAT_2c49a860 + 0x94) = 5;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  if (param_2 == 0) {
    return uVar10;
  }
  bVar13 = (local_3c & 1) != 0;
  if (bVar13) {
    in_r12 = DAT_2c49a874;
  }
  if (!bVar13) {
    in_r12 = DAT_2c49a878;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x24e,DAT_2c49a868,DAT_2c49a864,DAT_2c49a870,in_r12,*param_1,param_1[1],(char)param_1[2],
        *(undefined1 *)((int)param_1 + 9));
}

