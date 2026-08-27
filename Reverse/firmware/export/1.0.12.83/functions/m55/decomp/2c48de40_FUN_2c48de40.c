/* FUN_2c48de40 @ 0x2c48de40 */

void FUN_2c48de40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_2c48de9c;
  iVar3 = DAT_2c48de98;
  iVar2 = DAT_2c48de94;
  piVar1 = DAT_2c48de90;
  if (param_1 == (int *)0x0) {
    *DAT_2c48de90 = DAT_2c48de94;
    piVar1[1] = iVar3;
    piVar1[2] = iVar5;
    return;
  }
  *DAT_2c48de90 = DAT_2c48de94;
  iVar3 = DAT_2c48de98;
  iVar5 = *param_1;
  if (iVar5 == 0) {
    piVar1[1] = DAT_2c48de98;
    iVar4 = param_1[1];
    iVar5 = iVar2;
    if (iVar4 == 0) {
      piVar1[2] = 0;
      goto LAB_2c48de74;
    }
LAB_2c48de58:
    piVar1[1] = iVar4;
  }
  else {
    *piVar1 = iVar5;
    piVar1[1] = iVar3;
    iVar4 = param_1[1];
    if (iVar4 != 0) goto LAB_2c48de58;
  }
  piVar1[2] = 0;
  if (iVar5 != iVar2) {
    return;
  }
LAB_2c48de74:
  if (piVar1[1] == iVar3) {
    piVar1[2] = DAT_2c48de9c;
  }
  return;
}

