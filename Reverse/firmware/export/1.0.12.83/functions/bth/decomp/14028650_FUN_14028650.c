/* FUN_14028650 @ 0x14028650 */

void FUN_14028650(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_1c [16];
  int local_c;
  
  local_c = *DAT_14028690;
  iVar1 = FUN_14028228(auStack_1c,param_1,0,1);
  if (iVar1 == 0) {
    FUN_14028338(auStack_1c,param_1);
  }
  if (*DAT_14028690 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

