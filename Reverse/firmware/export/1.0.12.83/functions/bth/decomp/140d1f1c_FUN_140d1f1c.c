/* FUN_140d1f1c @ 0x140d1f1c */

void FUN_140d1f1c(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint local_14;
  
  if ((param_2 == 0) && (param_3 != 0)) {
    local_14 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_140cb800(DAT_140d1f60);
  }
  local_14 = param_3 - param_2;
  if (0xf < local_14) {
    iVar1 = FUN_140d1890(param_1,&local_14,0,local_14,param_1);
    *param_1 = iVar1;
    param_1[2] = local_14;
  }
  FUN_140d19c0(*param_1,param_2,param_3);
  param_1[1] = local_14;
  *(undefined1 *)(*param_1 + local_14) = 0;
  return;
}

