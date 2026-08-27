/* FUN_14086168 @ 0x14086168 */

undefined2 FUN_14086168(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14085e30();
  if ((((iVar1 != 0) && (iVar2 = FUN_14074b88(iVar1 + 8), iVar2 == 0)) &&
      (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) && (*(char *)(iVar1 + 0xf) == '\x02')) {
    return *(undefined2 *)(iVar1 + 0xc);
  }
  return 0xffff;
}

