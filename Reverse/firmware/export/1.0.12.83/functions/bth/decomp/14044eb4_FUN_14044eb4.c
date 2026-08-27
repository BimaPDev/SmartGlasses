/* FUN_14044eb4 @ 0x14044eb4 */

void FUN_14044eb4(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar3 = DAT_14044f4c;
  pcVar2 = DAT_14044f48;
  FUN_1402a6e8(4,0x6a0,DAT_14044f5c,DAT_14044f58,DAT_14044f54,DAT_14044f50,param_1,*DAT_14044f48,
               *DAT_14044f4c);
  iVar5 = FUN_140e5148(*(undefined4 *)(pcVar2 + 0xe42),0xffffffff);
  puVar4 = DAT_14044f60;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x710,DAT_14044f68);
  }
  if (*pcVar2 == '\0') {
    *puVar3 = 6;
    puVar4 = DAT_14044f60;
    *pcVar2 = '\x01';
    uVar6 = *(undefined4 *)(pcVar2 + 0xe42);
    *puVar4 = *puVar4 & 0xffbf;
    FUN_140e52d8(uVar6);
    FUN_14048958(param_1,0,DAT_14044f64);
    return;
  }
  uVar1 = *DAT_14044f60;
  pcVar2[param_1 + 0xc85] = '\x01';
  *puVar4 = uVar1 | 0x40;
  FUN_140e52d8(*(undefined4 *)(pcVar2 + 0xe42));
  return;
}

