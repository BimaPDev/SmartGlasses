/* FUN_10139392 @ 0x10139392 */

void FUN_10139392(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 2);
  if (((cVar2 != '\0') && (cVar2 != *(char *)(param_1 + 1))) &&
     (cVar2 < '\x03' == *(char *)(param_1 + 1) < '\x03')) {
    *(char *)(param_1 + 1) = cVar2;
    uVar1 = *(undefined2 *)(param_1 + 0xc);
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 10);
    *(undefined2 *)(param_1 + 10) = uVar1;
  }
  return;
}

