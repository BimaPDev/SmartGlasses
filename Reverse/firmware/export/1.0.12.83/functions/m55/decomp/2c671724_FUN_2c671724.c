/* FUN_2c671724 @ 0x2c671724 */

undefined4 FUN_2c671724(undefined4 param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *unaff_r6;
  undefined1 *puVar5;
  int iVar6;
  
  if (param_2[2] == 0) {
    if (param_2[6] == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    param_2[2] = uVar2;
  }
  iVar1 = DAT_2c6717d4;
  iVar6 = 0;
  if (-1 < (int)(*param_2 << 0x1b)) {
    puVar3 = (undefined4 *)*param_4;
    *param_4 = puVar3 + 1;
    unaff_r6 = (undefined1 *)*puVar3;
  }
  do {
    uVar2 = param_2[6];
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        if (*(char *)(param_2[5] + (uint)*(byte *)*param_3) == '\0') {
          if (iVar6 == 0) {
            return 1;
          }
LAB_2c6717b2:
          if (((*param_2 & 0x10) == 0) && (param_2[3] = param_2[3] + 1, param_2[6] != 0)) {
            *unaff_r6 = 0;
          }
          param_2[4] = param_2[4] + iVar6;
          return 0;
        }
      }
      else if ((uVar2 != 2) || ((int)((uint)*(byte *)((uint)*(byte *)*param_3 + iVar1) << 0x1c) < 0)
              ) goto LAB_2c6717b2;
    }
    iVar6 = iVar6 + 1;
    puVar5 = unaff_r6;
    if (-1 < (int)(*param_2 << 0x1b)) {
      puVar5 = unaff_r6 + 1;
      *unaff_r6 = *(undefined1 *)*param_3;
    }
    iVar4 = param_3[1];
    *param_3 = *param_3 + 1;
    uVar2 = param_2[2];
    param_3[1] = iVar4 + -1;
    uVar2 = uVar2 - 1;
    param_2[2] = uVar2;
    unaff_r6 = puVar5;
    if ((uVar2 == 0) ||
       ((iVar4 + -1 < 1 &&
        (iVar4 = (*(code *)param_2[0x60])(param_1,param_3,uVar2,(code *)param_2[0x60],param_4),
        iVar4 != 0)))) goto LAB_2c6717b2;
  } while( true );
}

