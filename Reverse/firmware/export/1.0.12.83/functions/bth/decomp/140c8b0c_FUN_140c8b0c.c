/* FUN_140c8b0c @ 0x140c8b0c */

int * FUN_140c8b0c(int *param_1,int *param_2)

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
    FUN_140cb800(DAT_140c8b64);
  }
  local_14 = piVar2;
  if ((int *)0xf < piVar2) {
    iVar1 = FUN_140d1890(param_1,&local_14,0,piVar2,piVar4);
    *param_1 = iVar1;
    param_1[2] = (int)local_14;
  }
  FUN_140d19b6(*param_1,iVar3,iVar3 + (int)piVar2);
  param_1[1] = (int)local_14;
  *(undefined1 *)(*param_1 + (int)local_14) = 0;
  param_1[6] = DAT_140c8b68;
  return param_1;
}

