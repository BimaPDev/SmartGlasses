/* FUN_2c66b23c @ 0x2c66b23c */

undefined4
FUN_2c66b23c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[6] == 0)) {
    FUN_2c668868();
  }
  if (param_2 == DAT_2c66b33c) {
    param_2 = (undefined4 *)param_1[1];
  }
  else if (param_2 == DAT_2c66b340) {
    param_2 = (undefined4 *)param_1[2];
  }
  else if (param_2 == DAT_2c66b344) {
    param_2 = (undefined4 *)param_1[3];
  }
  uVar4 = *(ushort *)(param_2 + 3);
  param_2[1] = 0;
  uVar5 = (uint)*(ushort *)(param_2 + 3);
  if ((int)(uVar5 << 0x1a) < 0) {
    return 0xffffffff;
  }
  if ((int)(uVar5 << 0x1d) < 0) {
    if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
      if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
        FUN_2c669b3c(param_1);
      }
      param_2[0xd] = 0;
      param_2[1] = param_2[0x10];
      if (param_2[0x10] != 0) {
        *param_2 = param_2[0xf];
        return 0;
      }
    }
  }
  else {
    if (-1 < (int)(uVar5 << 0x1b)) {
      *param_1 = 9;
      uVar4 = uVar4 | 0x40;
      goto LAB_2c66b28c;
    }
    if ((int)(uVar5 << 0x1c) < 0) {
      iVar3 = FUN_2c66871c(param_1,param_2,uVar5 << 0x1c,uVar5,param_4);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      param_2[2] = 0;
      param_2[6] = 0;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfff7;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 4;
  }
  if (param_2[4] == 0) {
    FUN_2c6694f8(param_1,param_2);
  }
  uVar2 = DAT_2c66b348;
  uVar4 = *(ushort *)(param_2 + 3);
  uVar1 = *(undefined2 *)(param_2 + 3);
  if ((uVar4 & 3) != 0) {
    *(undefined2 *)(param_2 + 3) = 1;
    FUN_2c668d28(*DAT_2c66b34c,uVar2);
    *(undefined2 *)(param_2 + 3) = uVar1;
    if ((uVar4 & 9) == 9) {
      FUN_2c668614(param_1,param_2);
    }
  }
  *param_2 = param_2[4];
  iVar3 = (*(code *)param_2[9])(param_1,param_2[8],param_2[4],param_2[5]);
  param_2[1] = iVar3;
  if (0 < iVar3) {
    return 0;
  }
  if (iVar3 == 0) {
    uVar4 = *(ushort *)(param_2 + 3) | 0x20;
  }
  else {
    uVar4 = *(ushort *)(param_2 + 3) | 0x40;
    param_2[1] = 0;
  }
LAB_2c66b28c:
  *(ushort *)(param_2 + 3) = uVar4;
  return 0xffffffff;
}

