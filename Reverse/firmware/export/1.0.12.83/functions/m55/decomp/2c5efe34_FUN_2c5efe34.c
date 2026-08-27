/* FUN_2c5efe34 @ 0x2c5efe34 */

undefined4 FUN_2c5efe34(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[3] = param_2;
    goto LAB_2c5efe6c;
  }
  do {
    if (iVar2 == param_2) {
      return 0;
    }
    if (param_2 == 0) goto LAB_2c5efe5c;
    iVar1 = FUN_2c66960c(iVar2,param_2,7);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 8);
  } while (iVar2 != 0);
  goto LAB_2c5efe62;
LAB_2c5efe5c:
  do {
    iVar2 = *(int *)(iVar2 + 8);
  } while (iVar2 != 0);
LAB_2c5efe62:
  *(int *)(param_1[1] + 8) = param_2;
  *(int *)(param_2 + 0xc) = param_1[1];
  param_1[1] = param_2;
LAB_2c5efe6c:
  *(char *)(param_1 + 2) = (char)param_1[2] + '\x01';
  return 1;
}

