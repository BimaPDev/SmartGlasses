/* FUN_1011a026 @ 0x1011a026 */

bool FUN_1011a026(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(uint *)(param_1 + 8) < 0x8000) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_1011a00e();
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}

