/* FUN_1007c5fc @ 0x1007c5fc */

undefined2 FUN_1007c5fc(int param_1)

{
  int iVar1;
  
  iVar1 = 0xf;
  do {
    if ((int)(uint)*(byte *)(DAT_1007c618 + iVar1 * 4) <= param_1) break;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return *(undefined2 *)(DAT_1007c618 + iVar1 * 4 + 2);
}

