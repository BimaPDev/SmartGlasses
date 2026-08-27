/* FUN_2c631d04 @ 0x2c631d04 */

void FUN_2c631d04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short sVar11;
  undefined8 uVar12;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  int local_1c;
  
  local_1c = *DAT_2c631f64;
  uVar2 = FUN_2c602408(param_2,param_2,param_3,0);
  if (((uVar2 == 0x15) || (uVar2 == 0x18)) ||
     (iVar3 = FUN_2c602110(DAT_2c631f68,param_2), iVar3 == 1)) {
    uVar12 = FUN_2c602400(param_2);
    iVar3 = (int)uVar12;
    if (uVar2 == 0x2a) {
      if ((*(byte *)(iVar3 + 0x5a) & 3) == 2) {
        if (*DAT_2c631f64 == local_1c) {
          FUN_2c63140c(iVar3,*(undefined4 *)(iVar3 + 0x24),0,0);
          return;
        }
      }
      else if (*DAT_2c631f64 == local_1c) {
        FUN_2c600bac();
        return;
      }
      goto LAB_2c631f5e;
    }
    if (uVar2 == 0x13) {
      psVar4 = (short *)FUN_2c602410(param_2);
      if ((*(short *)(iVar3 + 0x30) != 0) || (*(short *)(iVar3 + 0x36) != 0x100)) {
        iVar7 = FUN_2c6073ec(iVar3);
        iVar5 = FUN_2c6073f8(iVar3);
        FUN_2c611f58(&local_24,iVar7,iVar5,(int)*(short *)(iVar3 + 0x30),
                     *(undefined2 *)(iVar3 + 0x36),iVar3 + 0x32,*(undefined1 *)(iVar3 + 0x5c));
        iVar3 = -(int)local_24;
        if (-(int)local_24 < (int)*psVar4) {
          iVar3 = (int)*psVar4;
        }
        sVar11 = (short)iVar3;
        *psVar4 = sVar11;
        iVar3 = -(int)local_22;
        if (-(int)local_22 < (int)sVar11) {
          iVar3 = (int)sVar11;
        }
        sVar11 = (short)iVar3;
        *psVar4 = sVar11;
        iVar3 = local_20 - iVar7;
        if (local_20 - iVar7 < (int)sVar11) {
          iVar3 = (int)sVar11;
        }
        sVar11 = (short)iVar3;
        *psVar4 = sVar11;
        if ((int)sVar11 < local_1e - iVar5) {
          sVar11 = (short)(local_1e - iVar5);
        }
        *psVar4 = sVar11;
      }
    }
    else if (uVar2 == 0x11) {
      puVar6 = (undefined4 *)FUN_2c602410(param_2);
      sVar11 = *(short *)(iVar3 + 0x2c);
      iVar7 = FUN_2c6073ec(iVar3);
      if ((sVar11 == iVar7) &&
         (sVar11 = *(short *)(iVar3 + 0x2e), iVar7 = FUN_2c6073f8(iVar3), sVar11 == iVar7)) {
        if ((*(short *)(iVar3 + 0x36) == 0x100) && (*(short *)(iVar3 + 0x30) == 0)) {
          iVar7 = (int)*(short *)(iVar3 + 0x2c);
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          if (((int)*(short *)(iVar3 + 0x32) == iVar7 >> 1) &&
             ((int)*(short *)(iVar3 + 0x34) == (int)*(short *)(iVar3 + 0x2e) / 2))
          goto LAB_2c631e6c;
        }
        uVar10 = FUN_2c6073ec(iVar3);
        uVar9 = FUN_2c6073f8(iVar3);
        FUN_2c611f58(&local_24,uVar10,uVar9,(int)*(short *)(iVar3 + 0x30),
                     *(undefined2 *)(iVar3 + 0x36),iVar3 + 0x32,*(undefined1 *)(iVar3 + 0x5c));
        local_24 = local_24 + *(short *)(iVar3 + 0x14);
        local_22 = local_22 + *(short *)(iVar3 + 0x16);
        local_20 = *(short *)(iVar3 + 0x14) + local_20;
        local_1e = *(short *)(iVar3 + 0x16) + local_1e;
        uVar1 = FUN_2c62a750(&local_24,*puVar6,0);
        *(undefined1 *)(puVar6 + 1) = uVar1;
      }
      else {
LAB_2c631e6c:
        FUN_2c607ed0(iVar3,&local_24);
        uVar1 = FUN_2c62a750(&local_24,*puVar6,0);
        *(undefined1 *)(puVar6 + 1) = uVar1;
      }
    }
    else if (uVar2 == 0x2c) {
      puVar8 = (undefined2 *)FUN_2c602410(param_2);
      if ((*(byte *)(iVar3 + 0x5b) & 3) == 1) {
        uVar10 = FUN_2c6312f4(iVar3);
        *puVar8 = (short)uVar10;
        puVar8[1] = (short)((uint)uVar10 >> 0x10);
      }
      else {
        *puVar8 = *(undefined2 *)(iVar3 + 0x2c);
        puVar8[1] = *(undefined2 *)(iVar3 + 0x2e);
      }
    }
    else if ((uVar2 < 0x19) && ((int)((0x1240000U >> (uVar2 & 0xff)) << 0x1f) < 0)) {
      if (*DAT_2c631f64 == local_1c) {
        FUN_2c631810(param_2,(int)((ulonglong)uVar12 >> 0x20),0,0);
        return;
      }
      goto LAB_2c631f5e;
    }
  }
  if (*DAT_2c631f64 == local_1c) {
    return;
  }
LAB_2c631f5e:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

