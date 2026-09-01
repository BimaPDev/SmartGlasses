/* FUN_101318cc @ 0x101318cc */

void FUN_101318cc(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100bf7d0();
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x54) != 0)) &&
     (*(char *)(*(int *)(iVar1 + 0x54) + 0x2c) == '\x01')) {
    FUN_1013178c(iVar1,3);
    FUN_100bf958(iVar1,param_2,param_3);
    return;
  }
  return;
}

