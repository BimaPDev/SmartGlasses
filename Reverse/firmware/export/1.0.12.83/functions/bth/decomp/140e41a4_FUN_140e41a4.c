/* FUN_140e41a4 @ 0x140e41a4 */

int FUN_140e41a4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_140e3ce4(param_1,param_2,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_140e4214(param_1,param_2);
    return iVar1;
  }
  iVar1 = FUN_140e4214(param_1,param_2 + -0x80000000);
  return -iVar1;
}

