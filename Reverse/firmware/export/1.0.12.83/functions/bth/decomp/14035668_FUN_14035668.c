/* FUN_14035668 @ 0x14035668 */

void FUN_14035668(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  int local_1c;
  
  local_1c = *DAT_140356c8;
  FUN_1402a6e8(4,0xfd2,DAT_140356d0,DAT_140356d4,DAT_140356cc,param_1,param_3,param_4);
  local_20 = (undefined1)param_1;
  local_1e = (undefined1)param_3;
  local_1d = (undefined1)param_4;
  local_1f = param_2;
  FUN_14038908(0xfcc0,&local_20,4);
  if (*DAT_140356c8 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

