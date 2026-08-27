/* FUN_2c48e518 @ 0x2c48e518 */

int FUN_2c48e518(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double in_d0;
  undefined4 uVar4;
  
  iVar2 = (*(code *)*DAT_2c48e5b0)(0x28);
  if (iVar2 != 0) {
    FUN_2c674268(iVar2,0,0x28);
    dVar1 = DAT_2c48e5a0;
    *(double *)(iVar2 + 0x18) = in_d0;
    *(undefined4 *)(iVar2 + 0xc) = 8;
    if (in_d0 < dVar1) {
      if (DAT_2c48e5a8 < in_d0) {
        uVar4 = VectorFloatToSigned(in_d0,3);
        *(undefined4 *)(iVar2 + 0x14) = uVar4;
      }
      else {
        *(undefined4 *)(iVar2 + 0x14) = 0x80000000;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x14) = 0x7fffffff;
    }
  }
  iVar3 = FUN_2c48dd84(param_1,param_2,iVar2,0);
  if (iVar3 != 0) {
    return iVar2;
  }
  FUN_2c48dea0(iVar2);
  return 0;
}

