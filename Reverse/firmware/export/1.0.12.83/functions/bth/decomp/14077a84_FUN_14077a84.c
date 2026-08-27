/* FUN_14077a84 @ 0x14077a84 */

uint FUN_14077a84(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  uint local_10;
  int local_c;
  
  iVar1 = DAT_14075e30;
  local_c = *DAT_14077b0c;
  if ((param_1 != 0xffff) && (param_2 != 0)) {
    if (*(char *)(DAT_14077b10 + 10) != '\0') {
      if (*DAT_14077b0c == local_c) {
        local_10 = 0;
        iVar2 = FUN_140e50b8(*(undefined4 *)(DAT_14075e30 + 0x24),param_1 | param_2 << 0x10,0);
        if (iVar2 == 0) {
          FUN_140e5198(*(undefined4 *)(iVar1 + 0x20),1);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_14075e34,iVar2);
      }
      goto LAB_14077b06;
    }
    local_12 = (undefined1)(param_1 >> 8);
    local_16 = 0xc;
    local_13 = (undefined1)param_1;
    local_11 = (undefined1)param_2;
    local_10 = local_10 & 0xffffff00;
    local_18 = 1;
    local_14 = 1;
    local_17 = 0x35;
    local_15 = 5;
    param_1 = FUN_14077a18(&local_18,9);
  }
  if (*DAT_14077b0c == local_c) {
    return param_1;
  }
LAB_14077b06:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

