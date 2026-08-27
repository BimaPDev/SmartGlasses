/* FUN_1409e5b8 @ 0x1409e5b8 */

void FUN_1409e5b8(undefined1 param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_10;
  undefined1 local_f;
  uint local_c;
  
  local_c = *DAT_1409e5fc;
  local_f = (undefined1)param_2;
  local_10 = param_1;
  if ((param_2 == 0xff) ||
     (uVar2 = FUN_1409e924(*DAT_1409e600,&local_10), param_2 = (int)((ulonglong)uVar2 >> 0x20),
     (int)uVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)((int)uVar2 + 0x10);
  }
  if ((*DAT_1409e5fc ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar1,param_2,*DAT_1409e5fc ^ local_c,0);
}

