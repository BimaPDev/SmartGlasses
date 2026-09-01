/* FUN_10118eb4 @ 0x10118eb4 */

uint FUN_10118eb4(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *DAT_10118f80;
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x18) == 0)) {
    FUN_101191b4(iVar5);
  }
  if (param_2 == DAT_10118f84) {
    param_2 = *(undefined4 **)(iVar5 + 4);
  }
  else if (param_2 == DAT_10118f88) {
    param_2 = *(undefined4 **)(iVar5 + 8);
  }
  else if (param_2 == DAT_10118f8c) {
    param_2 = *(undefined4 **)(iVar5 + 0xc);
  }
  uVar3 = (uint)*(ushort *)(param_2 + 3);
  uVar2 = *(ushort *)(param_2 + 3);
  if (-1 < (int)(uVar3 << 0x1c)) {
    if (-1 < (int)(uVar3 << 0x1b)) {
      *param_1 = 9;
      goto LAB_10118ee4;
    }
    if ((int)(uVar3 << 0x1d) < 0) {
      if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
        if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
          FUN_10117e64(param_1);
        }
        param_2[0xd] = 0;
      }
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdb;
      param_2[1] = 0;
      *param_2 = param_2[4];
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 8;
  }
  if ((param_2[4] == 0) && ((*(ushort *)(param_2 + 3) & 0x280) != 0x200)) {
    FUN_101192dc(param_1,param_2);
  }
  uVar1 = *(ushort *)(param_2 + 3);
  uVar3 = (uint)uVar1;
  uVar2 = *(ushort *)(param_2 + 3);
  uVar4 = uVar3 & 1;
  if ((uVar1 & 1) == 0) {
    if (-1 < (int)(uVar3 << 0x1e)) {
      uVar4 = param_2[5];
    }
    param_2[2] = uVar4;
  }
  else {
    param_2[2] = 0;
    param_2[6] = -param_2[5];
  }
  if (param_2[4] != 0) {
    return 0;
  }
  if ((uVar1 & 0x80) == 0) {
    return uVar3 & 0x80;
  }
LAB_10118ee4:
  *(ushort *)(param_2 + 3) = uVar2 | 0x40;
  return 0xffffffff;
}

