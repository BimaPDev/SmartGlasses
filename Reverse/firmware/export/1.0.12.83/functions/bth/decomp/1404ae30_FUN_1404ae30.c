/* FUN_1404ae30 @ 0x1404ae30 */

int FUN_1404ae30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  
  local_14 = *DAT_1404aed8;
  local_18 = 0;
  iVar1 = FUN_140a1718(param_1,&local_18,0);
  if (iVar1 == 0) {
    uVar2 = FUN_140a047c();
    iVar1 = local_18;
    FUN_1402a9fc(DAT_1404aedc,1,6,param_1);
    FUN_1402a6e8(4,0xd80,DAT_1404aee8,DAT_1404aeec,DAT_1404aee4,DAT_1404aee0,
                 *(undefined1 *)(iVar1 + 0x114),*(undefined1 *)(iVar1 + 0x115),
                 *(undefined1 *)(iVar1 + 0x116),*(undefined1 *)(iVar1 + 0x117));
    *(undefined1 *)(iVar1 + 0x114) = 1;
    *(undefined1 *)(iVar1 + 0x116) = 1;
    FUN_140a04dc(uVar2);
    iVar1 = iVar1 + 0x114;
  }
  else {
    FUN_1402a6e8(4,0xd8a,DAT_1404aee8,DAT_1404aeec,DAT_1404aef0,DAT_1404aee0);
    iVar1 = DAT_1404aef4;
  }
  if (*DAT_1404aed8 == local_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

