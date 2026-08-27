/* FUN_14045144 @ 0x14045144 */

void FUN_14045144(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  
  FUN_1402a6e8(4,0x7ef,DAT_1404518c,DAT_14045188,DAT_14045184,DAT_14045180,param_1);
  FUN_140e5658(param_1 * 0x3a + DAT_14045190 + 0xc88,0);
  puVar3 = DAT_14043cf4;
  pcVar2 = DAT_14043cf0;
  FUN_1402a6e8(4,0x770,DAT_14043d04,DAT_14043d00,DAT_14043cfc,DAT_14043cf8,*DAT_14043cf0,
               *DAT_14043cf4,unaff_r4);
  iVar5 = FUN_140e5148(*(undefined4 *)(pcVar2 + 0xe42),0xffffffff);
  puVar4 = DAT_14043d08;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x710,DAT_14043d10);
  }
  if (*pcVar2 != '\0') {
    uVar6 = *(undefined4 *)(pcVar2 + 0xe42);
    uVar1 = *DAT_14043d08;
    pcVar2[0xc87] = '\x01';
    *puVar4 = uVar1 | 0x80;
    FUN_140e52d8(uVar6);
    return;
  }
  uVar6 = *(undefined4 *)(pcVar2 + 0xe42);
  uVar1 = *DAT_14043d08;
  *puVar3 = 7;
  *puVar4 = uVar1 & 0xff7f;
  *pcVar2 = '\x01';
  FUN_140e52d8(uVar6);
  FUN_14048958(0,0,DAT_14043d0c);
  return;
}

