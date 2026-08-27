/* FUN_1409408c @ 0x1409408c */

void FUN_1409408c(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_1409415c;
  puVar1 = DAT_14094158;
  if (*DAT_14094154 == '\0') {
    *DAT_14094154 = '\x01';
    FUN_140e5658(puVar1,0,0x714);
    FUN_140e5658(iVar4,0,0x26c);
    FUN_1407a1dc();
    *(undefined4 *)(iVar4 + 0x254) = DAT_14094160;
    *(undefined4 *)(iVar4 + 600) = DAT_14094164;
    *(int *)(puVar1 + 0x350) = iVar4;
    FUN_140e5918(puVar1 + 0x10,0x2d,puVar1 + 0x24);
    uVar3 = DAT_1409416c;
    uVar2 = DAT_14094168;
    *(undefined1 **)(puVar1 + 4) = puVar1 + 4;
    *(undefined1 **)(puVar1 + 8) = puVar1 + 4;
    FUN_140799c8(iVar4,uVar3,uVar2);
    FUN_14079a64(DAT_14094170);
    iVar4 = FUN_14049c88();
    if (iVar4 != 0) {
      FUN_1404a1b4(0);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_14094178,DAT_14094174,puVar1,0,*puVar1);
    }
  }
  return;
}

