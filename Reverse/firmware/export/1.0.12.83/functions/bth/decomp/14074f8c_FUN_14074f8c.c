/* FUN_14074f8c @ 0x14074f8c */

/* WARNING: Removing unreachable block (ram,0x14074f14) */

void FUN_14074f8c(byte *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_14074f70;
  uVar3 = *param_1 - 1;
  if (0x27 < (uVar3 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14074f80,DAT_14074f7c);
  }
  iVar5 = DAT_14074f70 + uVar3 * 0x28;
  pbVar2 = *(byte **)(iVar5 + 0x20);
  if (pbVar2 != param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14074f84,DAT_14074f7c,param_1,pbVar2);
  }
  if (*(char *)(DAT_14074f70 + uVar3 * 0x28) == '\0') {
    return;
  }
  FUN_140756c0();
  FUN_14074d80();
  *(undefined1 *)(iVar5 + 1) = 1;
  piVar1 = DAT_14074f78;
  iVar4 = iVar4 + uVar3 * 0x28;
  *(undefined4 *)(iVar4 + 0x14) = *DAT_14074f74;
  iVar5 = *piVar1;
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
  if (iVar5 != 0) {
    FUN_140756a8();
  }
  iVar4 = FUN_14074dc0();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14074f88,DAT_14074f7c,0);
  }
  *piVar1 = 1;
  FUN_14075698();
  FUN_140756b4();
  return;
}

