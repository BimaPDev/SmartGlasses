/* FUN_140bd690 @ 0x140bd690 */

void FUN_140bd690(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char local_24 [16];
  int local_14;
  
  local_14 = *DAT_140bd70c;
  FUN_140bdc40(DAT_140bd710,local_24,param_1);
  FUN_140e5438(param_2,local_24);
  if (local_24[0] < '\0') {
    FUN_140e59b8(param_2,param_2,DAT_140bd714);
    FUN_140e5438(param_3,param_2);
    cVar1 = *param_2;
  }
  else {
    FUN_140e5438(param_3,param_2);
    cVar1 = *param_2;
  }
  if (cVar1 < '\0') {
    FUN_140e59b8(param_3,param_3,DAT_140bd714);
  }
  if (*DAT_140bd70c != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

