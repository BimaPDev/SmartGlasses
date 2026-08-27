/* FUN_140463cc @ 0x140463cc */

/* WARNING: Removing unreachable block (ram,0x140447ba) */

void FUN_140463cc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_14046414;
  if (*DAT_14046410 == '\0') {
    *DAT_14046410 = '\x01';
    FUN_140e5658(uVar2,0,0x21c);
    FUN_1402a6e8(4,0xd8,DAT_14046424,DAT_14046420,DAT_1404641c,DAT_14046418);
    iVar3 = DAT_14046428;
    FUN_1402a6e8(4,0x3d9,DAT_140447d4,DAT_140447d0,DAT_140447c8,DAT_140447cc,0xb);
    iVar1 = DAT_140447d8;
    if ((iVar3 != *(int *)(DAT_140447d8 + 0x47)) && (iVar3 != 0)) {
      *(int *)(DAT_140447d8 + 0x47) = iVar3;
    }
    *(uint *)(iVar1 + 7) = *(uint *)(iVar1 + 7) | 0x800;
    return;
  }
  return;
}

