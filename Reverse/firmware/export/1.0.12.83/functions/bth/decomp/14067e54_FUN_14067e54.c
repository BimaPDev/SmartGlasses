/* FUN_14067e54 @ 0x14067e54 */

void FUN_14067e54(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_14067efc;
  iVar1 = FUN_14073468(&local_18,7,param_1[6],0);
  if (iVar1 == 0) {
    FUN_1407393c(local_18,param_1 + 7,param_1[6]);
    if (((local_18 == 0) || (*(ushort *)(local_18 + 6) < 7)) ||
       ((*(char *)(param_1 + 3) == '\x02' && (*(ushort *)(local_18 + 8) < 0xc)))) {
      FUN_140735a8();
      iVar1 = 0x4e;
    }
    else {
      iVar1 = FUN_14067bc4(*(undefined1 *)((int)param_1 + 5),*(undefined1 *)(param_1 + 2),param_1[1]
                           ,*(char *)(param_1 + 3),0,param_1[4],param_1[5],
                           *(undefined2 *)(local_18 + 4),local_18);
      FUN_140735a8(local_18);
      if (iVar1 == 0) {
        iVar1 = FUN_1406d4e0();
        *(undefined2 *)(iVar1 + 0x20) = *param_1;
        goto LAB_14067edc;
      }
    }
  }
  else {
    iVar1 = 0x11;
  }
  FUN_140680a4(*param_1,param_1[1],*(undefined1 *)((int)param_1 + 5),param_2,
               *(undefined1 *)(param_1 + 2),iVar1);
LAB_14067edc:
  if (*DAT_14067efc == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

