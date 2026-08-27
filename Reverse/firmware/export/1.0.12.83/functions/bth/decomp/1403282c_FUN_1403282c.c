/* FUN_1403282c @ 0x1403282c */

void FUN_1403282c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 auStack_108 [252];
  int local_c;
  
  local_c = *DAT_14032894;
  local_10c = 1;
  local_10b = (undefined1)param_1;
  local_10a = (undefined1)((uint)param_1 >> 8);
  local_109 = (undefined1)param_2;
  if (param_2 != 0) {
    FUN_140e5278(auStack_108,param_3,param_2);
  }
  if (*DAT_14032898 == '\0') {
    FUN_1403666c(&local_10c,param_2 + 4U & 0xff);
    FUN_140e5398(800);
  }
  else {
    FUN_140313b0();
  }
  if (*DAT_14032894 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

