/* FUN_2c66dbec @ 0x2c66dbec */

uint FUN_2c66dbec(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0xffffffff) {
    return 0xffffffff;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_2c668868();
  }
  if (param_3 == DAT_2c66dd10) {
    param_3 = *(uint **)(param_1 + 4);
  }
  else if (param_3 == DAT_2c66dd14) {
    param_3 = *(uint **)(param_1 + 8);
  }
  else if (param_3 == DAT_2c66dd18) {
    param_3 = *(uint **)(param_1 + 0xc);
  }
  if ((-1 < (int)(param_3[0x19] << 0x1f)) && (-1 < (int)((uint)(ushort)param_3[3] << 0x16))) {
    FUN_2c6694a8(param_3[0x16]);
  }
  uVar2 = (uint)(short)(ushort)param_3[3];
  *(ushort *)(param_3 + 3) = (ushort)param_3[3] & 0xffdf;
  if ((int)(uVar2 << 0x1d) < 0) {
LAB_2c66dc90:
    uVar4 = param_2 & 0xff;
    uVar2 = param_3[1];
    if (param_3[0xd] == 0) {
      uVar3 = *param_3;
      if (((param_3[4] == 0) || (uVar3 <= param_3[4])) || (*(byte *)(uVar3 - 1) != uVar4)) {
        param_3[0xf] = uVar3;
        param_3[0x10] = uVar2;
        param_3[0xd] = (uint)(param_3 + 0x11);
        param_3[0xe] = 3;
        *(undefined1 *)((int)param_3 + 0x46) = (char)param_2;
        *param_3 = (uint)((int)param_3 + 0x46);
        param_3[1] = 1;
      }
      else {
        *param_3 = uVar3 - 1;
        param_3[1] = uVar2 + 1;
      }
      if ((param_3[0x19] & 1) != 0) {
        return uVar4;
      }
LAB_2c66dcc0:
      if (-1 < (int)((uint)(ushort)param_3[3] << 0x16)) {
        FUN_2c6694ac(param_3[0x16]);
        return uVar4;
      }
      return uVar4;
    }
    if (((int)uVar2 < (int)param_3[0xe]) || (iVar1 = FUN_2c66db7c(param_1,param_3), iVar1 == 0)) {
      uVar2 = *param_3;
      *param_3 = uVar2 - 1;
      *(char *)(uVar2 - 1) = (char)param_2;
      param_3[1] = param_3[1] + 1;
      if ((int)(param_3[0x19] << 0x1f) < 0) {
        return uVar4;
      }
      goto LAB_2c66dcc0;
    }
  }
  else {
    if (-1 < (int)(uVar2 << 0x1b)) {
      if ((int)(param_3[0x19] << 0x1f) < 0) {
        return 0xffffffff;
      }
      goto LAB_2c66dc42;
    }
    if (-1 < (int)(uVar2 << 0x1c)) {
LAB_2c66dc88:
      *(ushort *)(param_3 + 3) = (ushort)param_3[3] | 4;
      goto LAB_2c66dc90;
    }
    iVar1 = FUN_2c66871c(param_1,param_3);
    if (iVar1 == 0) {
      param_3[2] = 0;
      param_3[6] = 0;
      *(ushort *)(param_3 + 3) = (ushort)param_3[3] & 0xfff7;
      goto LAB_2c66dc88;
    }
  }
  if ((int)(param_3[0x19] << 0x1f) < 0) {
    return 0xffffffff;
  }
  uVar2 = (uint)(ushort)param_3[3];
LAB_2c66dc42:
  if ((uVar2 & 0x200) == 0) {
    FUN_2c6694ac(param_3[0x16]);
  }
  return 0xffffffff;
}

