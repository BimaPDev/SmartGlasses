/* FUN_2c55f0dc @ 0x2c55f0dc */

void FUN_2c55f0dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  FUN_2c60438c(*(undefined4 *)(param_1 + 0x20));
  iVar3 = 0;
  while( true ) {
    iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
    if (iVar1 <= iVar3) break;
    pcVar2 = *(code **)(**(int **)(param_1 + 0x28) + 4);
    (*pcVar2)(*(int **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20),iVar3,pcVar2,param_4);
    iVar3 = iVar3 + 1;
  }
  return;
}

