/* FUN_2c4e4b5a @ 0x2c4e4b5a */

int FUN_2c4e4b5a(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x24))();
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  return iVar1 - iVar2;
}

