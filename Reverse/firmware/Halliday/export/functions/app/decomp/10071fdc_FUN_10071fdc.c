/* FUN_10071fdc @ 0x10071fdc */

void FUN_10071fdc(void)

{
  int *piVar1;
  
  piVar1 = DAT_10072008;
  FUN_1011f62c(DAT_10072008 + 1,0xfffffffd);
  (**(code **)(*(int *)(*piVar1 + 8) + 0xc))();
  FUN_1006a2c8(0,1);
  FUN_10071e1c();
  FUN_1007193c(0);
  return;
}

