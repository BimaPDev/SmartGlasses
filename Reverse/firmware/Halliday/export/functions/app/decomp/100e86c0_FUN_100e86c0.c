/* FUN_100e86c0 @ 0x100e86c0 */

int FUN_100e86c0(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_100a5b78(DAT_100e8778 | (DAT_100e8774 - DAT_100e8770) * 0x20 & 0xff00U,DAT_100e8780,
                 DAT_100e877c);
    iVar1 = -1;
  }
  else {
    iVar1 = param_1[3];
    if ((uint)param_1[0xf] < param_1[2] + param_3) {
      *param_1 = param_1[1];
      uVar2 = param_1[1] + param_3;
      param_1[1] = uVar2;
      if ((uint)param_1[0xf] <= uVar2) {
        *param_1 = 0;
        param_1[1] = param_3;
      }
      *(undefined4 *)(iVar1 + *param_1 * 4) = param_2;
      if (1 < param_3) {
        for (uVar2 = 1; uVar2 != param_3; uVar2 = uVar2 + 1) {
          *(undefined4 *)(iVar1 + (*param_1 + uVar2) * 4) = 0xffffffff;
        }
      }
      if ((uint)param_1[2] < (uint)param_1[0xf]) {
        param_1[2] = param_1[0xf];
      }
    }
    else {
      iVar3 = *(int *)(iVar1 + *param_1 * 4);
      param_1[2] = param_1[2] + param_3;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + *param_1 * 4) = param_2;
      }
      else {
        *param_1 = param_1[1];
        *(undefined4 *)(iVar1 + param_1[1] * 4) = param_2;
      }
      param_1[1] = *param_1 + param_3;
      if (1 < param_3) {
        for (uVar2 = 1; uVar2 != param_3; uVar2 = uVar2 + 1) {
          *(undefined4 *)(iVar1 + (*param_1 + uVar2) * 4) = 0xffffffff;
        }
      }
    }
    iVar1 = *param_1;
    param_1[0x32] = iVar1;
  }
  return iVar1;
}

