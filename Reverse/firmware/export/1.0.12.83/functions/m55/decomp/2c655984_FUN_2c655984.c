/* FUN_2c655984 @ 0x2c655984 */

int * FUN_2c655984(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *local_14;
  
  piVar4 = param_1;
  local_14 = param_2;
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])();
  }
  *param_1 = (int)(param_1 + 2);
  iVar3 = *param_2;
  piVar2 = (int *)param_2[1];
  if ((iVar3 == 0) && (iVar3 + (int)piVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c6559dc);
  }
  local_14 = piVar2;
  if ((int *)0xf < piVar2) {
    iVar1 = FUN_2c65e908(param_1,&local_14,0,piVar2,piVar4);
    *param_1 = iVar1;
    param_1[2] = (int)local_14;
  }
  FUN_2c65ea2e(*param_1,iVar3,iVar3 + (int)piVar2);
  param_1[1] = (int)local_14;
  *(undefined1 *)(*param_1 + (int)local_14) = 0;
  param_1[6] = DAT_2c6559e0;
  return param_1;
}

