/* FUN_1006efcc @ 0x1006efcc */

int FUN_1006efcc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    piVar1 = (int *)(iVar3 + DAT_1006efe0);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + *piVar1;
  } while (iVar3 != 0x4000);
  return iVar2;
}

