/* FUN_2c4ba7fc @ 0x2c4ba7fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ba7fc(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  
  *(uint *)(_LAB_2c4ba838 + 0x7c) =
       param_4 & 0xf00000 | *(uint *)(_LAB_2c4ba838 + 0x7c) & 0xff0fffff;
  if (param_3 == 0) {
    *_LAB_2c4ba830 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_3);
  }
  return;
}

