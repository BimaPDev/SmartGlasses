/* FUN_140a2394 @ 0x140a2394 */

int FUN_140a2394(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_140a2254(param_1 * param_2);
    if (iVar1 != 0) {
      FUN_140e5658(iVar1,0,param_1 * param_2);
    }
    return iVar1;
  }
  return 0;
}

