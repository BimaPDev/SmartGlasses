/* FUN_14048a90 @ 0x14048a90 */

undefined4 FUN_14048a90(code *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_14050350();
  if (iVar1 == 0) {
    FUN_140489b8(0,0,0,0,param_1);
    return 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  (*param_1)(0,0,0);
  return 0;
}

