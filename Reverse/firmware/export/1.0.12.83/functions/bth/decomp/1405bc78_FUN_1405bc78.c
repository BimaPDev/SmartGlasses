/* FUN_1405bc78 @ 0x1405bc78 */

void FUN_1405bc78(uint param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int local_24;
  uint local_20;
  int local_1c;
  
  piVar1 = DAT_1405bdf4;
  iVar4 = DAT_1405bdf4[8];
  local_1c = *DAT_1405bdf8;
  if (iVar4 != 0) {
    if ((int)((uint)*(byte *)(iVar4 + 0x2d) << 0x1c) < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + ((*(byte *)(iVar4 + 0x2d) & 0xf) + 3) * 4;
    }
    if (param_1 < *(ushort *)(iVar4 + 0xc)) {
      *(short *)(iVar4 + 0xc) = (short)param_1;
    }
    if (*(ushort *)(iVar4 + 0xe) < param_2) {
      *(short *)(iVar4 + 0xe) = (short)param_2;
    }
    goto LAB_1405bcb4;
  }
  local_20 = 0;
  local_24 = iVar4;
  if (*DAT_1405bdf4 == 0) {
LAB_1405bdd2:
    iVar4 = DAT_1405bdf4[1];
    if (iVar4 == 0) goto LAB_1405bcb4;
LAB_1405bd0a:
    if ((int)((uint)*(byte *)((int)piVar1 + 0x2a) << 0x1e) < 0) {
      *(byte *)((int)piVar1 + 0x2b) = *(byte *)((int)piVar1 + 0x2b) & 0xfd;
      *(byte *)(piVar1 + 0xb) = *(byte *)(piVar1 + 0xb) & 0xfd;
      local_20 = local_20 | 2;
    }
    else {
      if (-1 < (int)((uint)*(byte *)(iVar4 + 0x39) << 0x1f)) goto LAB_1405bd3c;
      *(byte *)((int)piVar1 + 0x2b) = *(byte *)((int)piVar1 + 0x2b) & 0xfd;
      *(byte *)(piVar1 + 0xb) = *(byte *)(piVar1 + 0xb) & 0xfd;
    }
    FUN_1405c424(1);
  }
  else {
    if ((int)((uint)*(byte *)((int)DAT_1405bdf4 + 0x2a) << 0x1f) < 0) {
      *(byte *)((int)DAT_1405bdf4 + 0x2b) = *(byte *)((int)DAT_1405bdf4 + 0x2b) & 0xfe;
      *(byte *)(piVar1 + 0xb) = *(byte *)(piVar1 + 0xb) & 0xfe;
      local_20 = 1;
    }
    else {
      if (-1 < (int)((uint)*(byte *)(*DAT_1405bdf4 + 0x39) << 0x1f)) goto LAB_1405bdd2;
      *(byte *)((int)DAT_1405bdf4 + 0x2b) = *(byte *)((int)DAT_1405bdf4 + 0x2b) & 0xfe;
      *(byte *)(piVar1 + 0xb) = *(byte *)(piVar1 + 0xb) & 0xfe;
    }
    FUN_1405c424(0);
    iVar4 = piVar1[1];
    if (iVar4 != 0) goto LAB_1405bd0a;
  }
LAB_1405bd3c:
  uVar3 = local_20;
  if ((local_20 != 0) && (iVar4 = FUN_14073468(&local_24,7,4,0), iVar4 == 0)) {
    if (local_24 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      if (-1 < (int)((uint)*(byte *)(local_24 + 0x2d) << 0x1c)) {
        iVar4 = local_24 + ((*(byte *)(local_24 + 0x2d) & 0xf) + 3) * 4;
      }
    }
    *(short *)(iVar4 + 0xc) = (short)param_1;
    *(short *)(iVar4 + 0xe) = (short)param_2;
    *(uint *)(iVar4 + 8) = uVar3;
    if ((short)piVar1[9] != 0) {
      FUN_1406566c(*(undefined1 *)((int)piVar1 + 0x2d));
      *(undefined2 *)(piVar1 + 9) = 0;
    }
    uVar2 = DAT_1405bdfc;
    piVar1[8] = local_24;
    FUN_14072a3c(iVar4,uVar2);
    FUN_14072a44(0,iVar4);
  }
LAB_1405bcb4:
  if (*DAT_1405bdf8 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

