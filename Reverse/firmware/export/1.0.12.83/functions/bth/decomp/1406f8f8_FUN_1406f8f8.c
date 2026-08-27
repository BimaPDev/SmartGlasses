/* FUN_1406f8f8 @ 0x1406f8f8 */

int FUN_1406f8f8(undefined4 param_1,undefined1 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_1406f960;
  iVar2 = FUN_140709d0();
  if (iVar2 == 0) {
    iVar3 = 0x43;
  }
  else {
    iVar3 = FUN_1406e284(param_1,0,4,DAT_1406f964,0x14,&local_20);
    if (iVar3 == 0) {
      *(undefined1 *)(local_20 + 0x10) = param_2;
      uVar1 = *(undefined2 *)(iVar2 + 0x14);
      *(undefined2 *)(local_20 + 0x12) = param_3;
      *(char *)(local_20 + 0x11) = (char)uVar1;
      FUN_1406e3c0(param_1);
    }
  }
  if (*DAT_1406f960 == local_1c) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

