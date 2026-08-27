/* FUN_14037760 @ 0x14037760 */

void FUN_14037760(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_140377b8;
  iVar1 = DAT_140377b0;
  *(uint *)(DAT_140377b0 + 0x250) = *(uint *)(DAT_140377b0 + 0x250) & 0xffffc000 | *DAT_140377b4;
  *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) & 0xf0003fff | *piVar2 << 0xe;
  return;
}

