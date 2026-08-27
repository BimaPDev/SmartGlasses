/* FUN_140410fc @ 0x140410fc */

void FUN_140410fc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_128 [8];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int local_14;
  
  local_14 = *DAT_14041154;
  iVar1 = FUN_140a1548(0,auStack_128,param_3,0);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if ((iVar1 == 0) && (iVar1 = FUN_140db784(auStack_128,param_2,6), iVar1 == 0)) {
    *param_3 = local_120;
    param_3[1] = uStack_11c;
    param_3[2] = uStack_118;
    param_3[3] = uStack_114;
  }
  if (*DAT_14041154 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

