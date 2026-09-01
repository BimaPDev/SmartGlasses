/* FUN_1005608c @ 0x1005608c */

int FUN_1005608c(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = DAT_100560bc;
  piVar2 = DAT_100560b8;
  if (*DAT_100560b8 == 0) {
    *(undefined1 **)(DAT_100560bc + 0x48) = &DAT_40004000;
    *(undefined1 **)(iVar3 + 0x4c) = &DAT_40004100;
    bVar1 = *(byte *)(iVar3 + 0x50);
    *piVar2 = iVar3;
    *(byte *)(iVar3 + 0x50) = bVar1 & 0xfc | 3;
  }
  return *piVar2;
}

