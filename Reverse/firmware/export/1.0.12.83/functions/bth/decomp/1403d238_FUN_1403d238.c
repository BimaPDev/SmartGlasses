/* FUN_1403d238 @ 0x1403d238 */

void FUN_1403d238(void)

{
  ushort uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar3 = DAT_14043c40;
  pcVar2 = DAT_14043c3c;
  FUN_1402a6e8(4,0x4db,DAT_14043c50,DAT_14043c4c,DAT_14043c48,DAT_14043c44,*DAT_14043c3c,
               *DAT_14043c40);
  iVar5 = FUN_140e5148(*(undefined4 *)(pcVar2 + 0xe42),0xffffffff);
  puVar4 = DAT_14043c54;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x710,DAT_14043c5c);
  }
  if (*pcVar2 != '\0') {
    uVar6 = *(undefined4 *)(pcVar2 + 0xe42);
    uVar1 = *DAT_14043c54;
    pcVar2[0x5f] = '\x01';
    *puVar4 = uVar1 | 2;
    FUN_140e52d8(uVar6);
    return;
  }
  uVar6 = *(undefined4 *)(pcVar2 + 0xe42);
  uVar1 = *DAT_14043c54;
  *pcVar2 = '\x01';
  *puVar4 = uVar1 & 0xfffd;
  *puVar3 = 1;
  FUN_140e52d8(uVar6);
  FUN_14048958(0,0,DAT_14043c58);
  return;
}

