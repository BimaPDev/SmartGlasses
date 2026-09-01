/* FUN_1011d2ac @ 0x1011d2ac */

void FUN_1011d2ac(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  while( true ) {
    iVar2 = (int)cVar3;
    cVar3 = cVar3 + '\x01';
    if (param_2 <= iVar2) break;
    uVar1 = (param_2 + -1) - iVar2;
    *(char *)(param_1 + iVar2) =
         (char)(*(uint *)(param_3 + (uVar1 & 0xfffffffc)) >> ((uVar1 & 3) << 3));
  }
  return;
}

