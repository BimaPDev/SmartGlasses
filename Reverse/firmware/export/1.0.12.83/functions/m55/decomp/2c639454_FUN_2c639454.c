/* FUN_2c639454 @ 0x2c639454 */

void FUN_2c639454(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  uint uVar13;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  undefined1 auStack_30 [11];
  byte local_25;
  int local_24;
  
  local_24 = *DAT_2c639650;
  iVar4 = FUN_2c602110(DAT_2c639654,param_2,param_3,0);
  if (iVar4 == 1) {
    iVar4 = FUN_2c602408(param_2);
    iVar5 = FUN_2c602400(param_2);
    if (iVar4 == 0x13) {
      sVar2 = FUN_2c6033b4(iVar5,0,0x49);
      psVar7 = (short *)FUN_2c602410(param_2);
      if (*psVar7 < sVar2) {
        *psVar7 = sVar2;
      }
    }
    else if (iVar4 == 0x2c) {
      if ((*(short *)(iVar5 + 0x28) != 0) && (*(int *)(iVar5 + 0x24) != 0)) {
        psVar7 = (short *)FUN_2c602410(param_2);
        if (*(short *)(iVar5 + 0x28) == 0) {
          sVar2 = 0;
          sVar1 = 0;
        }
        else {
          sVar1 = 0;
          psVar11 = *(short **)(iVar5 + 0x24) + 2;
          sVar2 = 0;
          psVar8 = *(short **)(iVar5 + 0x24);
          psVar12 = psVar11;
          while( true ) {
            if (sVar2 < *psVar8) {
              sVar2 = *psVar8;
            }
            if (sVar1 < psVar8[1]) {
              sVar1 = psVar8[1];
            }
            if (psVar12 == psVar11 + (uint)(ushort)(*(short *)(iVar5 + 0x28) - 1) * 2) break;
            psVar8 = psVar12;
            psVar12 = psVar12 + 2;
          }
        }
        sVar3 = FUN_2c6033b4(iVar5,0,0x49);
        *psVar7 = sVar3 + sVar2;
        psVar7[1] = sVar3 + sVar1;
      }
    }
    else if (iVar4 == 0x15) {
      uVar6 = FUN_2c602608(param_2);
      if (((*(short *)(iVar5 + 0x28) == 0) || (*(int *)(iVar5 + 0x24) == 0)) &&
         ((*(int *)(iVar5 + 0x2c) == 0 || (*(char *)(iVar5 + 0x30) == '\0')))) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c639660,199,DAT_2c63965c,DAT_2c639658);
      }
      FUN_2c607338(iVar5,&local_38);
      sVar1 = FUN_2c604a2c(iVar5);
      sVar2 = FUN_2c604a38(iVar5);
      sVar3 = FUN_2c6073f8(iVar5);
      if (*(char *)(iVar5 + 0x31) == '\x01') {
        FUN_2c6120bc(auStack_30);
        FUN_2c600968(iVar5,0,auStack_30);
        FUN_2c6120d8(uVar6,auStack_30,*(undefined4 *)(iVar5 + 0x2c),*(undefined1 *)(iVar5 + 0x30));
      }
      else {
        FUN_2c6120a0();
        FUN_2c600968(iVar5,0,auStack_30);
        if (1 < *(ushort *)(iVar5 + 0x28)) {
          sVar2 = local_36 - sVar2;
          uVar13 = 0;
          do {
            iVar10 = *(int *)(iVar5 + 0x24);
            iVar4 = uVar13 * 4 + 4;
            local_40 = *(short *)(iVar10 + uVar13 * 4) + (local_38 - sVar1);
            iVar9 = iVar4 + iVar10;
            local_3c = *(short *)(iVar10 + iVar4) + (local_38 - sVar1);
            local_3e = *(short *)(iVar10 + uVar13 * 4 + 2);
            if ((int)((uint)*(byte *)(iVar5 + 0x2a) << 0x1f) < 0) {
              local_3e = (sVar3 + sVar2) - local_3e;
              local_3a = (sVar3 + sVar2) - *(short *)(iVar9 + 2);
            }
            else {
              local_3e = local_3e + sVar2;
              local_3a = *(short *)(iVar9 + 2) + sVar2;
            }
            FUN_2c6120f4(uVar6,auStack_30,&local_40,&local_3c);
            local_25 = local_25 & 0xfb;
            uVar13 = uVar13 + 1 & 0xffff;
          } while ((int)uVar13 < (int)(*(ushort *)(iVar5 + 0x28) - 1));
        }
      }
    }
  }
  if (*DAT_2c639650 != local_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

