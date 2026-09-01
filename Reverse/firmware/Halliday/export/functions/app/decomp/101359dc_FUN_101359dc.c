/* FUN_101359dc @ 0x101359dc */

void FUN_101359dc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_1013cb84(param_1 + 0x70);
  *(undefined4 *)(param_1 + 100) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x60);
  uVar2 = *puVar1;
  *puVar1 = 0;
  FUN_10135440(puVar1,1,uVar2);
  return;
}

