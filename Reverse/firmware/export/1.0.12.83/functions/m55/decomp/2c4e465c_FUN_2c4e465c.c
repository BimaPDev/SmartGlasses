/* FUN_2c4e465c @ 0x2c4e465c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c4e465c(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0x54f1,0x37,1);
    FUN_2c4e0504(_LAB_2c4e46e0,0,0,0,_LAB_2c4e46e8,0x37,_LAB_2c4e46e4,0x1300,_LAB_2c4e46dc);
    bVar1 = false;
  }
  else if (*(code **)(param_1 + 0x40) == (code *)0x0) {
    FUN_2c4de6ca(param_1,0x54f1,0x38,1);
    FUN_2c4e0504(_LAB_2c4e46e0,0,0,0,_LAB_2c4e46e8,0x38,_LAB_2c4e46e4,0x1300,_LAB_2c4e46ec);
    bVar1 = false;
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x40))(*(int *)(param_1 + 0x30));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

