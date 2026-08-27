/* FUN_2c52263c @ 0x2c52263c */

void FUN_2c52263c(int *param_1,int param_2,int param_3,undefined1 *param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  
  local_2c = *DAT_2c522708;
  iVar3 = param_2 + param_3;
  local_30 = (param_5 - param_3) + param_1[1];
  iVar4 = param_1[1] - iVar3;
  if (param_1 + 2 == (int *)*param_1) {
    iVar2 = 0xf;
  }
  else {
    iVar2 = param_1[2];
  }
  puVar1 = (undefined1 *)FUN_2c521ec4(&local_30,iVar2);
  if (param_2 != 0) {
    if (param_2 == 1) {
      *puVar1 = *(undefined1 *)*param_1;
    }
    else {
      FUN_2c674668(puVar1,(undefined1 *)*param_1,param_2);
    }
  }
  if ((param_4 != (undefined1 *)0x0) && (param_5 != 0)) {
    if (param_5 == 1) {
      puVar1[param_2] = *param_4;
    }
    else {
      FUN_2c674668(puVar1 + param_2,param_4,param_5);
    }
  }
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      puVar1[param_2 + param_5] = *(undefined1 *)(*param_1 + iVar3);
    }
    else {
      FUN_2c674668(puVar1 + param_2 + param_5,*param_1 + iVar3,iVar4);
    }
  }
  if (param_1 + 2 == (int *)*param_1) {
    *param_1 = (int)puVar1;
    param_1[2] = local_30;
    if (*DAT_2c522708 != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

