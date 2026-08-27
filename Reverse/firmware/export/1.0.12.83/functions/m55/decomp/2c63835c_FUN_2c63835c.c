/* FUN_2c63835c @ 0x2c63835c */

void FUN_2c63835c(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  undefined4 extraout_r1;
  uint uVar10;
  uint uVar11;
  int iVar12;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54 [4];
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_3c;
  undefined4 local_38;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  byte local_2a;
  undefined1 local_29;
  int local_24;
  
  local_24 = *DAT_2c638678;
  iVar4 = FUN_2c602110(DAT_2c63867c,param_2,param_3,0);
  if (iVar4 == 1) {
    iVar4 = FUN_2c602408(param_2);
    iVar5 = FUN_2c602400(param_2);
    if (iVar4 != 0x2a) {
      if (iVar4 == 0x13) {
        iVar4 = FUN_2c6033b4(iVar5,0,0x57);
        if (*DAT_2c638678 == local_24) {
          iVar4 = (int)*(short *)(iVar4 + 8);
          if (iVar4 < 0) {
            iVar4 = iVar4 + 3;
          }
          if (*(char *)(param_2 + 8) == '\x13') {
            iVar12 = (int)**(short **)(param_2 + 0x10);
            iVar5 = iVar4 >> 2;
            if (iVar4 >> 2 < iVar12) {
              iVar5 = iVar12;
            }
            **(short **)(param_2 + 0x10) = (short)iVar5;
          }
          return;
        }
        goto LAB_2c63872a;
      }
      if (iVar4 != 0x29) {
        if (iVar4 == 0x2c) {
          uVar6 = FUN_2c6033b4(iVar5,0,0x57);
          sVar1 = FUN_2c6033b4(iVar5,0,0x58);
          sVar3 = FUN_2c6033b4(iVar5,0,0x59);
          uVar11 = (*(byte *)(iVar5 + 0x52) & 0x1f) >> 4;
          if ((int)((uint)*(byte *)(iVar5 + 0x52) << 0x1a) < 0) {
            uVar11 = uVar11 | 2;
          }
          FUN_2c607404(iVar5);
          sVar2 = FUN_2c6033b4(iVar5,0,1);
          if ((sVar2 == 0x27d1) && (-1 < (int)((uint)*(byte *)(iVar5 + 0x23) << 0x1d))) {
            uVar8 = 0x1fff;
          }
          else {
            uVar8 = FUN_2c607404(iVar5);
          }
          FUN_2c62b954(&local_4c,*(undefined4 *)(iVar5 + 0x24),uVar6,(int)sVar1,(int)sVar3,uVar8,
                       uVar11);
          psVar9 = (short *)FUN_2c602410(param_2);
          sVar1 = (short)local_4c;
          if ((short)local_4c < *psVar9) {
            sVar1 = *psVar9;
          }
          *psVar9 = sVar1;
          if (local_4c._2_2_ < psVar9[1]) {
            local_4c._2_2_ = psVar9[1];
          }
          psVar9[1] = local_4c._2_2_;
        }
        else if (iVar4 == 0x15) {
          iVar4 = FUN_2c602400(param_2);
          iVar5 = FUN_2c602608(param_2);
          FUN_2c60747c(iVar4,&local_5c);
          uVar11 = (*(byte *)(iVar4 + 0x52) & 0x1f) >> 4;
          if ((int)((uint)*(byte *)(iVar4 + 0x52) << 0x1a) < 0) {
            uVar11 = uVar11 | 2;
          }
          sVar1 = FUN_2c6033b4(iVar4,0,1);
          if ((sVar1 == 0x27d1) && (-1 < (int)((uint)*(byte *)(iVar4 + 0x23) << 0x1d))) {
            uVar11 = uVar11 | 4;
          }
          FUN_2c6129e4(&local_4c);
          local_30 = *(short *)(iVar4 + 0x4e);
          local_2e = *(short *)(iVar4 + 0x50);
          local_29 = (undefined1)uVar11;
          FUN_2c6007ec(iVar4,0,&local_4c);
          if (local_2a == 0) {
            local_2a = 1;
          }
          local_48 = *(int *)(iVar4 + 0x44);
          local_44 = *(int *)(iVar4 + 0x48);
          if ((local_48 != 0xffff) && (local_44 != 0xffff)) {
            uVar6 = FUN_2c6033b4(iVar4,0x40000,0x55);
            local_3c = FUN_2c603e80(iVar4,0x40000,uVar6);
            local_38 = FUN_2c6033b4(iVar4,0x40000,0x20);
          }
          uVar10 = *(byte *)(iVar4 + 0x52) & 7;
          if ((uVar10 - 3 < 2) && (local_2a - 2 < 2)) {
            FUN_2c62b954(local_54,*(undefined4 *)(iVar4 + 0x24),local_4c,(int)local_32,(int)local_34
                         ,0x1fff,uVar11);
            if ((short)((local_58 + 1) - local_5c) < local_54[0]) {
              local_2a = 1;
            }
            uVar10 = *(byte *)(iVar4 + 0x52) & 7;
          }
          if ((uVar10 == 4) || ((short)((local_56 + 1) - local_5a) < 0x400)) {
            iVar12 = 0;
          }
          else {
            iVar12 = iVar4 + 0x38;
          }
          iVar7 = FUN_2c62a6b4(local_54,&local_5c,*(undefined4 *)(iVar5 + 8));
          if (iVar7 != 0) {
            uVar10 = *(byte *)(iVar4 + 0x52) & 7;
            if ((*(byte *)(iVar4 + 0x52) & 7) == 0) {
              sVar1 = FUN_2c604a44(iVar4);
              FUN_2c62a690(&local_5c,uVar10,(int)-sVar1);
              local_56 = *(short *)(iVar4 + 0x1a);
              uVar10 = *(byte *)(iVar4 + 0x52) & 7;
            }
            if (uVar10 - 3 < 2) {
              uVar6 = *(undefined4 *)(iVar5 + 8);
              *(short **)(iVar5 + 8) = local_54;
              FUN_2c612a20(iVar5,&local_4c,&local_5c,*(undefined4 *)(iVar4 + 0x24),iVar12);
            }
            else {
              FUN_2c612a20(iVar5,&local_4c,&local_5c,*(undefined4 *)(iVar4 + 0x24),iVar12);
              uVar6 = *(undefined4 *)(iVar5 + 8);
            }
            *(short **)(iVar5 + 8) = local_54;
            if ((*(byte *)(iVar4 + 0x52) & 7) == 4) {
              FUN_2c62b954(&local_60,*(undefined4 *)(iVar4 + 0x24),local_4c,(int)local_32,
                           (int)local_34,0x1fff,uVar11);
              if ((short)((local_58 + 1) - local_5c) < local_60) {
                sVar1 = *(short *)(iVar4 + 0x4e);
                sVar3 = FUN_2c6298c0(local_4c,0x20);
                local_30 = local_60 + sVar1 + sVar3 * 3;
                local_2e = *(short *)(iVar4 + 0x50);
                FUN_2c612a20(iVar5,&local_4c,&local_5c,*(undefined4 *)(iVar4 + 0x24),iVar12);
              }
              if ((short)((local_56 + 1) - local_5a) < local_5e) {
                local_30 = *(short *)(iVar4 + 0x4e);
                local_2e = *(short *)(local_4c + 8) + local_5e + *(short *)(iVar4 + 0x50);
                FUN_2c612a20(iVar5,&local_4c,&local_5c,*(undefined4 *)(iVar4 + 0x24),iVar12);
              }
            }
            *(undefined4 *)(iVar5 + 8) = uVar6;
          }
        }
        goto LAB_2c638378;
      }
    }
    FUN_2c637248();
    if (*(int *)(iVar5 + 0x24) != 0) {
      if (*DAT_2c638678 == local_24) {
        FUN_2c637b3c(iVar5,extraout_r1,0,0);
        return;
      }
      goto LAB_2c63872a;
    }
  }
LAB_2c638378:
  if (*DAT_2c638678 == local_24) {
    return;
  }
LAB_2c63872a:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

