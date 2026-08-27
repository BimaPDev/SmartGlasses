/* FUN_1407ef88 @ 0x1407ef88 */

void FUN_1407ef88(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  int local_14;
  
  puVar1 = DAT_1407f00c;
  local_14 = *DAT_1407f008;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x88) = 1;
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  local_1c = (undefined1)puVar1[3];
  iVar2 = FUN_140dd3a4(&local_28);
  if (iVar2 != 0) {
    if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_1407f018,*(undefined1 *)(param_1 + 0xc),DAT_1407f014,
                   *(byte *)(param_1 + 0xec));
    }
    FUN_1407edac(param_1,DAT_1407f010,&local_28,iVar2,0,0xff);
  }
  if (*DAT_1407f008 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

