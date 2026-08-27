/* FUN_140dc130 @ 0x140dc130 */

undefined4
FUN_140dc130(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[6] == 0)) {
    FUN_140dac50();
  }
  if (param_2 == DAT_140dc230) {
    param_2 = (undefined4 *)param_1[1];
  }
  else if (param_2 == DAT_140dc234) {
    param_2 = (undefined4 *)param_1[2];
  }
  else if (param_2 == DAT_140dc238) {
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
        FUN_140db7d0(param_1);
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
      goto LAB_140dc180;
    }
    if ((int)(uVar5 << 0x1c) < 0) {
      iVar3 = FUN_140dab04(param_1,param_2,uVar5 << 0x1c,uVar5,param_4);
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
    FUN_140db670(param_1,param_2);
  }
  uVar2 = DAT_140dc23c;
  uVar4 = *(ushort *)(param_2 + 3);
  uVar1 = *(undefined2 *)(param_2 + 3);
  if ((uVar4 & 3) != 0) {
    *(undefined2 *)(param_2 + 3) = 1;
    FUN_140db110(*DAT_140dc240,uVar2);
    *(undefined2 *)(param_2 + 3) = uVar1;
    if ((uVar4 & 9) == 9) {
      FUN_140da9fc(param_1,param_2);
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
LAB_140dc180:
  *(ushort *)(param_2 + 3) = uVar4;
  return 0xffffffff;
}

