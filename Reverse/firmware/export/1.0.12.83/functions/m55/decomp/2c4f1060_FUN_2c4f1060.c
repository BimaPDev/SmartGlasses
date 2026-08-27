/* FUN_2c4f1060 @ 0x2c4f1060 */

undefined4 FUN_2c4f1060(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  param_1[0x1a] = param_2;
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar2 = FUN_2c47245c(2,*(undefined4 *)(param_2 + 0x28),param_3,0,param_4);
    param_1[3] = iVar2;
    if (iVar2 == 0) goto LAB_2c4f1112;
    param_2 = param_1[0x1a];
    iVar2 = *(int *)(param_2 + 0x34);
    if (iVar2 == 0) goto LAB_2c4f10f2;
LAB_2c4f1074:
    param_1[7] = iVar2;
  }
  else {
    param_1[3] = *(int *)(param_2 + 0x30);
    iVar2 = *(int *)(param_2 + 0x34);
    if (iVar2 != 0) goto LAB_2c4f1074;
LAB_2c4f10f2:
    iVar2 = FUN_2c47245c(2,*(undefined4 *)(param_2 + 0x28));
    param_1[7] = iVar2;
    if (iVar2 == 0) goto LAB_2c4f1112;
    param_2 = param_1[0x1a];
  }
  FUN_2c674268(param_1[3],0xff,*(undefined4 *)(param_2 + 0x28));
  *param_1 = 0xffffffff;
  FUN_2c674268(param_1[7],0xff,*(undefined4 *)(param_1[0x1a] + 0x28));
  iVar2 = param_1[0x1a];
  param_1[4] = 0xffffffff;
  if (*(int *)(iVar2 + 0x38) == 0) {
    iVar2 = FUN_2c47245c(2,*(undefined4 *)(iVar2 + 0x2c),0,iVar2,param_4);
    param_1[0x19] = iVar2;
    if (iVar2 == 0) {
LAB_2c4f1112:
      FUN_2c4f101c(param_1);
      return 0xfffffff4;
    }
    iVar2 = param_1[0x1a];
  }
  else {
    param_1[0x19] = *(int *)(iVar2 + 0x38);
  }
  iVar1 = *(int *)(iVar2 + 0x3c);
  if (iVar1 == 0) {
    iVar1 = 0xff;
  }
  param_1[0x1b] = iVar1;
  iVar1 = *(int *)(iVar2 + 0x40);
  if (iVar1 == 0) {
    iVar1 = 0x7fffffff;
  }
  param_1[0x1c] = iVar1;
  iVar2 = *(int *)(iVar2 + 0x44);
  if (iVar2 == 0) {
    iVar2 = 0x3fe;
  }
  param_1[0x1d] = iVar2;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0xc] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return 0;
}

