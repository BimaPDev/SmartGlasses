/* FUN_2c54ffa8 @ 0x2c54ffa8 */

void FUN_2c54ffa8(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = DAT_2c550078;
  param_1[1] = param_1 + 3;
  if ((int *)*param_3 == param_3 + 2) {
    iVar5 = param_3[3];
    iVar3 = param_3[4];
    iVar4 = param_3[5];
    param_1[3] = param_3[2];
    param_1[4] = iVar5;
    param_1[5] = iVar3;
    param_1[6] = iVar4;
  }
  else {
    iVar4 = param_3[2];
    param_1[1] = (int *)*param_3;
    param_1[3] = iVar4;
  }
  *param_3 = (int)(param_3 + 2);
  param_1[2] = param_3[1];
  param_3[1] = 0;
  *(undefined1 *)(param_3 + 2) = 0;
  param_1[7] = param_1 + 9;
  if ((int *)*param_2 == param_2 + 2) {
    iVar5 = param_2[3];
    iVar3 = param_2[4];
    iVar4 = param_2[5];
    param_1[9] = param_2[2];
    param_1[10] = iVar5;
    param_1[0xb] = iVar3;
    param_1[0xc] = iVar4;
  }
  else {
    param_1[7] = (int *)*param_2;
    param_1[9] = param_2[2];
  }
  *param_2 = (int)(param_2 + 2);
  iVar4 = param_2[1];
  param_2[1] = 0;
  param_1[8] = iVar4;
  *(undefined1 *)(param_2 + 2) = 0;
  uVar2 = param_4[2];
  param_1[0xd] = *param_4;
  uVar1 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar2;
  param_1[0x10] = param_1 + 0x12;
  if ((int *)*param_5 == param_5 + 2) {
    iVar5 = param_5[3];
    iVar3 = param_5[4];
    iVar4 = param_5[5];
    param_1[0x12] = param_5[2];
    param_1[0x13] = iVar5;
    param_1[0x14] = iVar3;
    param_1[0x15] = iVar4;
  }
  else {
    iVar4 = param_5[2];
    param_1[0x10] = (int *)*param_5;
    param_1[0x12] = iVar4;
  }
  *param_5 = (int)(param_5 + 2);
  param_1[0x11] = param_5[1];
  param_5[1] = 0;
  *(undefined1 *)(param_5 + 2) = 0;
  return;
}

