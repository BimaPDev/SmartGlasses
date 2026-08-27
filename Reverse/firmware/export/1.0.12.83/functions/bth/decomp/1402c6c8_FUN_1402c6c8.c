/* FUN_1402c6c8 @ 0x1402c6c8 */

undefined4 FUN_1402c6c8(uint param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  puVar4 = DAT_1402c8c0;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402c8dc,param_1,param_3,param_4,param_4);
  }
  if (*DAT_1402c8b8 == '\0') {
    *DAT_1402c8b8 = '\x01';
    puVar5 = DAT_1402c8c4;
    *puVar4 = 0xffff;
    *puVar5 = 0xffff;
    iVar6 = FUN_1402c684(param_1);
    if (iVar6 == 0) goto LAB_1402c6e8;
LAB_1402c75e:
    iVar6 = DAT_1402c8e8;
    FUN_1402c520(param_1);
    iVar8 = iVar6 + param_1 * 0xc;
    if (param_2 != (byte *)0x0) goto LAB_1402c6f8;
LAB_1402c774:
    uVar1 = *(undefined1 *)(iVar8 + 5);
    uVar11 = 0x910;
    FUN_1402da3c(uVar1);
    uVar2 = *(undefined1 *)(iVar8 + 6);
    FUN_1402da3c(uVar2);
    FUN_1402dbf4(uVar1);
    FUN_1402dbf4(uVar2);
    param_2 = DAT_1402c8c8;
switchD_1402c73c_caseD_3:
    uVar11 = uVar11 | 0x60;
  }
  else {
    iVar6 = FUN_1402c684(param_1);
    if (iVar6 != 0) goto LAB_1402c75e;
LAB_1402c6e8:
    iVar8 = DAT_1402c8e8 + param_1 * 0xc;
    iVar6 = DAT_1402c8e8;
    if (param_2 == (byte *)0x0) goto LAB_1402c774;
LAB_1402c6f8:
    uVar1 = *(undefined1 *)(iVar8 + 5);
    FUN_1402da3c(uVar1);
    uVar2 = *(undefined1 *)(iVar8 + 6);
    FUN_1402da3c(uVar2);
    FUN_1402dbf4(uVar1);
    FUN_1402dbf4(uVar2);
    if (4 < *param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1402c8e0);
    }
    uVar11 = *(uint *)(DAT_1402c8bc + (uint)*param_2 * 4);
    if (param_2[1] == 1) {
      bVar3 = param_2[2];
      uVar11 = uVar11 | 8;
    }
    else {
      if (param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_1402c8d4);
      }
      bVar3 = param_2[2];
    }
    switch(bVar3) {
    case 0:
      break;
    case 1:
      uVar11 = uVar11 | 0x20;
      break;
    case 2:
      uVar11 = uVar11 | 0x40;
      break;
    case 3:
      goto switchD_1402c73c_caseD_3;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1402c8e4);
    }
  }
  uVar9 = (uint)param_2[3];
  if (3 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402c8d8,uVar9);
  }
  uVar7 = (uint)param_2[0xc];
  uVar10 = uVar7 & 1;
  if ((param_2[0xc] & 1) != 0) {
    uVar10 = 1;
    uVar11 = uVar11 | 0x8000;
  }
  if ((int)(uVar7 << 0x1e) < 0) {
    uVar10 = uVar10 | 2;
  }
  iVar8 = *(int *)(iVar6 + param_1 * 0xc);
  if ((int)(uVar7 << 0x1d) < 0) {
    uVar10 = uVar10 | 4;
  }
  *(uint *)(iVar8 + 0x30) = *(uint *)(iVar8 + 0x30) & 0xfffffffe;
  *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) & 0xffffffef;
  do {
  } while ((*(uint *)(iVar8 + 0x18) & 8) != 0);
  *(undefined4 *)(iVar8 + 4) = 1;
  *(undefined4 *)(iVar8 + 0x38) = 0;
  *(undefined4 *)(iVar8 + 0x44) = 0xffffffff;
  FUN_1402bda8(param_1,*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(iVar8 + 0x54) = 3;
  *(uint *)(iVar8 + 0x2c) = uVar11;
  *(uint *)(iVar8 + 0x48) = uVar10;
  uVar11 = (uint)*(char *)(iVar6 + param_1 * 0xc + 4);
  *(uint *)(iVar8 + 0x34) = (param_2[4] & 7) << 3 | param_2[5] & 7;
  *(uint *)(iVar8 + 0x30) = uVar9 * 0x4000 + 0x301;
  iVar6 = DAT_1402c8cc;
  if (uVar11 != 0x40) {
    *(undefined4 *)(*(int *)(DAT_1402c8cc + 8) + (uVar11 + 0x10) * 4) = DAT_1402c8d0;
    DataSynchronizationBarrier(0xf);
    if ((int)uVar11 < 0) {
      *(undefined1 *)((uVar11 & 0xf) + iVar6 + 0x14) = 0xa0;
      return 0;
    }
    iVar8 = (uVar11 >> 5) * 4;
    iVar6 = 1 << (uVar11 & 0x1f);
    *(undefined1 *)(uVar11 + 0xe000e400) = 0xa0;
    *(int *)(&DAT_e000e280 + iVar8) = iVar6;
    *(int *)(&DAT_e000e100 + iVar8) = iVar6;
  }
  return 0;
}

