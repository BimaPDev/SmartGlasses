/* FUN_1404f50c @ 0x1404f50c */

undefined1 FUN_1404f50c(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  local_14 = *DAT_1404f558;
  uVar1 = FUN_140280f4();
  local_18 = 0;
  iVar2 = FUN_1404a1b4(param_1);
  if ((iVar2 != 0) && (iVar2 = FUN_140a1718(iVar2,&local_18), iVar2 == 0)) {
    uVar1 = *(undefined1 *)(local_18 + 0x113);
  }
  if (*DAT_1404f558 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

