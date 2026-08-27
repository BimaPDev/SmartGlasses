/* FUN_2c46bbec @ 0x2c46bbec */

int FUN_2c46bbec(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_2c46a5f4(0x20);
  if (iVar2 != 0) {
    iVar3 = FUN_2c46a680(iVar2,param_1,0xffffffff);
    cVar1 = *(char *)(iVar2 + 0x1c);
    *param_2 = cVar1;
    if ((cVar1 != '\0') && (iVar3 != 0)) {
      iVar3 = 0;
      FUN_2c46c514();
    }
    FUN_2c46a644(iVar2);
    return iVar3;
  }
  return 0;
}

