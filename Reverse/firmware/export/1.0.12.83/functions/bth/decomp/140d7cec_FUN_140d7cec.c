/* FUN_140d7cec @ 0x140d7cec */

void FUN_140d7cec(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_14;
  
  if ((param_2 == 0) && (param_3 != 0)) {
    local_14 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_140cb800(DAT_140d7d30);
  }
  uVar2 = param_3 - param_2;
  local_14 = (int)uVar2 >> 2;
  if (0xc < uVar2) {
    uVar1 = FUN_140d777c(param_1,&local_14,0,uVar2,param_1);
    *param_1 = uVar1;
    param_1[2] = local_14;
  }
  FUN_140d78b2(*param_1,param_2,param_3);
  FUN_140d7770(param_1,local_14);
  return;
}

