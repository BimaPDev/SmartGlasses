/* FUN_2c672b40 @ 0x2c672b40 */

int FUN_2c672b40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  double dVar2;
  
  if (-1 < (int)((uint)((double)CONCAT44(param_2,param_1) < 0.0) << 0x1f)) {
    iVar1 = FUN_2c672b70();
    return iVar1;
  }
  dVar2 = -(double)CONCAT44(param_2,param_1);
  iVar1 = FUN_2c672b70(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  return -iVar1;
}

