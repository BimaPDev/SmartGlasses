/* FUN_1404e220 @ 0x1404e220 */

undefined1 FUN_1404e220(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  local_14 = *DAT_1404e2a0;
  uVar1 = FUN_140280f4();
  local_18 = 0;
  iVar2 = FUN_1404a1b4(param_1);
  if ((iVar2 == 0) || (iVar2 = FUN_140a1718(iVar2,&local_18), iVar2 != 0)) {
    FUN_1402a6e8(4,0xdbb,DAT_1404e2b0,DAT_1404e2ac,DAT_1404e2a8,param_1,DAT_1404e2a4);
  }
  else {
    uVar1 = *(undefined1 *)(local_18 + 0x112);
    FUN_1402a6e8(4,0xdb7,DAT_1404e2b0,DAT_1404e2ac,DAT_1404e2b4,param_1,DAT_1404e2a4,uVar1);
  }
  if (*DAT_1404e2a0 == local_14) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

