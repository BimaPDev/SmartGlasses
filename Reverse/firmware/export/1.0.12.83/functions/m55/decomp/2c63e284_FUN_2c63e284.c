/* FUN_2c63e284 @ 0x2c63e284 */

void FUN_2c63e284(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = DAT_2c63e32c;
  pcVar2 = DAT_2c63e328;
  if (*DAT_2c63e328 == '\0') {
    uVar6 = *(undefined4 *)(*DAT_2c63e32c + 4);
    iVar5 = FUN_2c604204(uVar6);
    iVar5 = FUN_2c6041dc(uVar6,iVar5 + -1);
    if (*piVar3 != iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c63e338,0x46,DAT_2c63e334,DAT_2c63e330);
    }
  }
  iVar5 = FUN_2c602408(param_1);
  if (iVar5 == 0xd) {
    iVar5 = FUN_2c602618(param_1);
    puVar4 = DAT_2c63e33c;
    if (iVar5 == 0xcf) {
      bVar1 = *(byte *)(param_1 + 0x1c);
      *DAT_2c63e33c = 0;
      *(byte *)(param_1 + 0x1c) = bVar1 | 8;
      FUN_2c63df78();
      *puVar4 = 1;
    }
    else if (iVar5 == 0xd3) {
      if (*pcVar2 == '\0') {
        FUN_2c63dbf0(0,1);
        *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 8;
      }
    }
    else if (iVar5 == 0xce) {
      bVar1 = *(byte *)(param_1 + 0x1c);
      *DAT_2c63e33c = 0;
      *(byte *)(param_1 + 0x1c) = bVar1 | 8;
      FUN_2c63e030();
      *puVar4 = 1;
    }
  }
  return;
}

