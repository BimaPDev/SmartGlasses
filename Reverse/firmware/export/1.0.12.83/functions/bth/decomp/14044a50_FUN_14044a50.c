/* FUN_14044a50 @ 0x14044a50 */

void FUN_14044a50(void)

{
  ushort uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar3 = DAT_14044ae4;
  pcVar2 = DAT_14044ae0;
  FUN_1402a6e8(4,0x598,DAT_14044af4,DAT_14044af0,DAT_14044aec,DAT_14044ae8,*DAT_14044ae0,
               *DAT_14044ae4);
  iVar5 = FUN_140e5148(*(undefined4 *)(pcVar2 + 0xe42),0xffffffff);
  puVar4 = DAT_14044af8;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x710,DAT_14044b00);
  }
  if (*pcVar2 != '\0') {
    uVar6 = *(undefined4 *)(pcVar2 + 0xe42);
    uVar1 = *DAT_14044af8;
    pcVar2[0xc5f] = '\x01';
    *puVar4 = uVar1 | 8;
    FUN_140e52d8(uVar6);
    return;
  }
  uVar6 = *(undefined4 *)(pcVar2 + 0xe42);
  uVar1 = *DAT_14044af8;
  *puVar3 = 3;
  *puVar4 = uVar1 & 0xfff7;
  *pcVar2 = '\x01';
  FUN_140e52d8(uVar6);
  FUN_14048958(0,0,DAT_14044afc);
  return;
}

