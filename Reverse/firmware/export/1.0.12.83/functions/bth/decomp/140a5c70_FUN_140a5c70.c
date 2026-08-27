/* FUN_140a5c70 @ 0x140a5c70 */

void FUN_140a5c70(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  local_14 = *DAT_140a5d30;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_1402a6e8(4,0x184,DAT_140a5d40,DAT_140a5d3c,DAT_140a5d34,DAT_140a5d38,param_1,param_2);
  }
  else if (((code *)*DAT_140a5d44 == (code *)0x0) ||
          (iVar1 = (*(code *)*DAT_140a5d44)(2), iVar1 == 0)) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    FUN_140dc3ec(param_1,DAT_140a5d48,&local_28,&local_24,&local_20,&local_1c,&local_18);
    FUN_1402a6e8(4,0x19a,DAT_140a5d40,DAT_140a5d3c,DAT_140a5d4c,local_28,local_24,local_20,local_1c,
                 local_18);
    FUN_140a004c(local_28,local_24 & 0xffff,2,local_20 & 0xff,local_1c & 0xff,local_18 & 0xff);
    FUN_140b3838();
  }
  if (*DAT_140a5d30 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

