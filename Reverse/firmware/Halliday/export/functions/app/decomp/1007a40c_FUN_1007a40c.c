/* FUN_1007a40c @ 0x1007a40c */

void FUN_1007a40c(int param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar1 = DAT_1007a42c;
  if ((param_1 == 0) || (*(char *)((int)DAT_1007a42c + 0x31) == '\0')) {
    iVar3 = 0;
    puVar2 = DAT_1007a42c;
    do {
      iVar3 = iVar3 + 1;
      *puVar2 = param_2;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0x18);
    puVar1[0x18] = 0x1800;
  }
  return;
}

