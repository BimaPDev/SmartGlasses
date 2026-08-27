/* FUN_14065fe4 @ 0x14065fe4 */

undefined4 FUN_14065fe4(undefined2 param_1,undefined1 param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_14066030;
  if ((param_4 != (undefined1 *)0x0) && (param_3 != 0)) {
    iVar4 = 0;
    iVar2 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 3;
      if (*(int *)(DAT_14066030 + iVar1) == 0) {
        *(int *)(DAT_14066030 + iVar2 * 0xc) = param_3;
        iVar3 = iVar3 + iVar2 * 0xc;
        *(undefined2 *)(iVar3 + 6) = param_1;
        *(undefined1 *)(iVar3 + 8) = param_2;
        *(undefined1 *)(iVar3 + 9) = 0;
        *param_4 = (char)iVar2;
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xb);
    return 0x4b;
  }
  return 0x40;
}

