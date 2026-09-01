/* FUN_101242c2 @ 0x101242c2 */

bool FUN_101242c2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 - 1U < 0xfffffffe) {
    iVar2 = FUN_10113cfc(param_1,param_2,0xffffffff,0xffffffff,param_4);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

