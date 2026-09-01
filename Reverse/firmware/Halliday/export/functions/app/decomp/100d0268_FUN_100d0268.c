/* FUN_100d0268 @ 0x100d0268 */

void FUN_100d0268(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_3;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_100c1c90();
    param_3 = 0;
    *(undefined4 *)(local_c + 8) = 0;
    param_4 = local_c;
  }
  FUN_1013c6ba(DAT_100d0288,&local_c,param_3,param_4,param_1);
  return;
}

