/* FUN_100d023c @ 0x100d023c */

undefined4 FUN_100d023c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  uVar2 = 0;
  local_c = 0;
  iVar1 = FUN_10113464(DAT_100d0264,&local_c,param_1,param_2,param_1);
  if (iVar1 == 0) {
    FUN_1011ea48(local_c,0,0x1c);
    uVar2 = local_c;
  }
  return uVar2;
}

