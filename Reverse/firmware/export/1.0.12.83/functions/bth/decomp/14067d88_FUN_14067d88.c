/* FUN_14067d88 @ 0x14067d88 */

int FUN_14067d88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_14067e00;
  piVar1 = (int *)FUN_14066108(param_2);
  if (((piVar1 == (int *)0x0) || (*(int *)(*piVar1 + 0xc) == 0)) || (*(int *)(*piVar1 + 8) == 0)) {
    iVar2 = 0x42;
  }
  else {
    iVar2 = FUN_1406cc4c(param_1,param_2,param_3,0x40,0x17,0x24,DAT_14067e04,&local_20);
    if (iVar2 == 0) {
      *(undefined1 *)(local_20 + 0x22) = param_4;
      FUN_1406d4d4();
      FUN_1406cdd0(param_1,local_20);
    }
  }
  if (*DAT_14067e00 == local_1c) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

