/* FUN_2c62c314 @ 0x2c62c314 */

void FUN_2c62c314(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  if (((uint)param_1 & 3) != 0) {
    if (param_3 == 0) {
      return;
    }
    piVar3 = (int *)((4 - ((uint)param_1 & 3)) + (int)param_1);
    piVar2 = param_1;
    do {
      param_1 = (int *)((int)piVar2 + 1);
      *(char *)piVar2 = (char)param_2;
      param_3 = param_3 - 1;
      if (param_1 == piVar3) break;
      piVar2 = param_1;
    } while (param_3 != 0);
  }
  iVar1 = param_2 * 0x1010101;
  if (param_3 < 0x21) {
    if (param_3 < 5) {
      if (param_3 == 0) {
        return;
      }
      goto LAB_2c62c390;
    }
  }
  else {
    piVar2 = param_1 + 8;
    uVar4 = param_3 - 0x21 >> 5;
    do {
      piVar2[-8] = iVar1;
      piVar2[-7] = iVar1;
      piVar2[-6] = iVar1;
      piVar2[-5] = iVar1;
      piVar2[-4] = iVar1;
      piVar2[-3] = iVar1;
      piVar2[-2] = iVar1;
      piVar2[-1] = iVar1;
      piVar2 = piVar2 + 8;
    } while (piVar2 != (int *)((int)param_1 + (param_3 - 0x21 & 0xffffffe0) + 0x40));
    param_3 = (param_3 - 0x20) + uVar4 * -0x20;
    param_1 = param_1 + (uVar4 + 1) * 8;
    if (param_3 < 5) goto LAB_2c62c390;
  }
  do {
    param_3 = param_3 - 4;
    piVar2 = param_1 + 1;
    *param_1 = iVar1;
    param_1 = piVar2;
  } while (4 < param_3);
LAB_2c62c390:
  piVar2 = param_1;
  do {
    piVar3 = (int *)((int)piVar2 + 1);
    *(char *)piVar2 = (char)param_2;
    piVar2 = piVar3;
  } while (piVar3 != (int *)(param_3 + (int)param_1));
  return;
}

