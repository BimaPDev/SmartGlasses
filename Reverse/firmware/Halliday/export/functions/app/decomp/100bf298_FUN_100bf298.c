/* FUN_100bf298 @ 0x100bf298 */

void FUN_100bf298(byte param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(DAT_100bf2b4 + 0xc) = *(byte *)(DAT_100bf2b4 + 0xc) & 0xfb | (param_1 & 1) << 2;
  FUN_100be204();
  *(byte *)(DAT_100c1220 + 0x20) = param_1;
  iVar1 = DAT_100c0860;
  if (*(char *)(DAT_100c0860 + 0x21) == '\0') {
    uVar2 = 0x32;
    *(undefined1 *)(DAT_100c0860 + 0x21) = 1;
  }
  else {
    if (*(char *)(DAT_100c0860 + 0x21) != '\x02') {
      return;
    }
    uVar2 = 4000;
    *(undefined1 *)(DAT_100c0860 + 0x21) = 1;
  }
  FUN_1011dc0a(iVar1 + 0x28,uVar2);
  return;
}

