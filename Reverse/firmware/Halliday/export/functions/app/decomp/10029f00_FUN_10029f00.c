/* FUN_10029f00 @ 0x10029f00 */

void FUN_10029f00(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10029f5c;
  iVar2 = *DAT_10029f58;
  if (*(int *)(*DAT_10029f5c + 0x154) == 0) {
    if (*DAT_10029f58 == iVar2) {
      return;
    }
  }
  else {
    FUN_10094ab8();
    *(undefined4 *)(*piVar1 + 0x154) = 0;
    if (*(undefined1 **)(DAT_10029f60 + 0xf0) != (undefined1 *)0x0) {
      **(undefined1 **)(DAT_10029f60 + 0xf0) = 0;
    }
    if (*DAT_10029f58 == iVar2) goto LAB_10029f3a;
  }
  FUN_1013cdc0();
LAB_10029f3a:
                    /* WARNING: Could not recover jumptable at 0x10029f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_10029f64 + 0x30))();
  return;
}

