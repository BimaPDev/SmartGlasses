/* FUN_1409cfbc @ 0x1409cfbc */

void FUN_1409cfbc(undefined1 param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_c = *DAT_1409d010;
  local_10 = 0;
  if ((code *)*DAT_1409d00c != (code *)0x0) {
    (*(code *)*DAT_1409d00c)(param_1,0);
  }
  iVar1 = FUN_140987fc(0,0,&local_10);
  if ((iVar1 == 0) && (local_10 != 0)) {
    *(undefined1 *)(local_10 + 0x17) = param_1;
    FUN_1409895c(0,0);
  }
  if (*DAT_1409d010 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

