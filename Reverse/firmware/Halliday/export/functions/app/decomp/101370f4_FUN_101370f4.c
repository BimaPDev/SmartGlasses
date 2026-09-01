/* FUN_101370f4 @ 0x101370f4 */

undefined2 FUN_101370f4(void)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_100dd8a8();
  uVar1 = 0;
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 200) < '\0') {
      uVar1 = *(undefined2 *)(iVar2 + 0xbe);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

