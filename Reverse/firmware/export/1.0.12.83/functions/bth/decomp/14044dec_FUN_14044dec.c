/* FUN_14044dec @ 0x14044dec */

void FUN_14044dec(void)

{
  ushort uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar3 = DAT_14044e7c;
  pcVar2 = DAT_14044e78;
  FUN_1402a6e8(4,0x64c,DAT_14044e8c,DAT_14044e88,DAT_14044e84,DAT_14044e80,*DAT_14044e78,
               *DAT_14044e7c);
  iVar5 = FUN_140e5148(*(undefined4 *)(pcVar2 + 0xe42),0xffffffff);
  puVar4 = DAT_14044e90;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x710,DAT_14044e98);
  }
  if (*pcVar2 != '\0') {
    uVar6 = *(undefined4 *)(pcVar2 + 0xe42);
    uVar1 = *DAT_14044e90;
    pcVar2[0xc6c] = '\x01';
    *puVar4 = uVar1 | 0x20;
    FUN_140e52d8(uVar6);
    return;
  }
  *pcVar2 = '\x01';
  FUN_140e52d8(*(undefined4 *)(pcVar2 + 0xe42));
  puVar4 = DAT_14044e90;
  *puVar3 = 5;
  *puVar4 = *puVar4 & 0xffdf;
  FUN_14048958(0,0,DAT_14044e94);
  return;
}

