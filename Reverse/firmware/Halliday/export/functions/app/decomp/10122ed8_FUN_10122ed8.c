/* FUN_10122ed8 @ 0x10122ed8 */

void FUN_10122ed8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *param_1 = *param_2;
  param_1[2] = param_2[7];
  uVar3 = param_2[8];
  *(char *)((int)param_1 + 7) = (char)uVar3;
  param_1[4] = uVar3 & 0xffffff00;
  uVar2 = param_2[9];
  param_1[5] = 0;
  param_1[0x13] = uVar2;
  iVar1 = FUN_10122840();
  if (iVar1 == 0) {
    FUN_10122e2e(param_1);
    return;
  }
  return;
}

