/* FUN_1013659e @ 0x1013659e */

void FUN_1013659e(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x3c) = *(byte *)(iVar1 + 0x3c) & 0xfe | param_2 != 0;
  }
  return;
}

