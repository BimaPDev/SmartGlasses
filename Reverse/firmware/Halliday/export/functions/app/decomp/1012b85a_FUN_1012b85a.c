/* FUN_1012b85a @ 0x1012b85a */

int FUN_1012b85a(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_1012691c(param_1,0x30000,0x40);
  iVar2 = FUN_1012691c(param_1,0x30000,0x43);
  iVar3 = FUN_1012691c(param_1,0x30000,0x41);
  if (iVar3 < 1) {
    iVar3 = FUN_1012691c(param_1,0x30000,0x41);
    iVar3 = -iVar3;
  }
  else {
    iVar3 = FUN_1012691c(param_1,0x30000,0x41);
  }
  iVar4 = FUN_1012691c(param_1,0x30000,0x42);
  if (iVar4 < 1) {
    iVar4 = FUN_1012691c(param_1,0x30000,0x42);
    iVar4 = -iVar4;
  }
  else {
    iVar4 = FUN_1012691c(param_1,0x30000,0x42);
  }
  iVar4 = iVar1 + iVar2 + iVar3 + iVar4;
  iVar2 = FUN_1012691c(param_1,0x30000,0x35);
  iVar3 = FUN_1012691c(param_1,0x30000,0x38);
  iVar1 = iVar3 + iVar2;
  if (iVar3 + iVar2 < iVar4) {
    iVar1 = iVar4;
  }
  return iVar1;
}

