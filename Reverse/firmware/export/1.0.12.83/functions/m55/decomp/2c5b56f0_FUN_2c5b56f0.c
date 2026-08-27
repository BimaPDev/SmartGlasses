/* FUN_2c5b56f0 @ 0x2c5b56f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5b56f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = FUN_2c48e738();
  FUN_2c48e5b4(uVar4,_LAB_2c5b5758,param_2);
  FUN_2c48e518((int)uRam2c5b5750,uVar4,_LAB_2c5b575c);
  FUN_2c48e5b4(uVar4,_LAB_2c5b5760,param_3);
  FUN_2c48e5b4(uVar4,_LAB_2c5b5768,_LAB_2c5b5764);
  FUN_2c48e4c8(uVar4,_LAB_2c5b576c,0);
  FUN_2c48e474(param_1,_LAB_2c5b5770,uVar4);
  uVar4 = _LAB_2c5b5774;
  iVar2 = (*(code *)*DAT_2c48e5b0)(0x28);
  if (iVar2 != 0) {
    FUN_2c674268(iVar2,0,0x28);
    dVar1 = DAT_2c48e5a0;
    *(undefined8 *)(iVar2 + 0x18) = 0x4026000000000000;
    *(undefined4 *)(iVar2 + 0xc) = 8;
    if (11.0 < dVar1) {
      if (DAT_2c48e5a8 < 11.0) {
        uVar5 = VectorFloatToSigned(0x4026000000000000,3);
        *(undefined4 *)(iVar2 + 0x14) = uVar5;
      }
      else {
        *(undefined4 *)(iVar2 + 0x14) = 0x80000000;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x14) = 0x7fffffff;
    }
  }
  iVar3 = FUN_2c48dd84(param_1,uVar4,iVar2,0);
  if (iVar3 != 0) {
    return iVar2;
  }
  FUN_2c48dea0(iVar2);
  return 0;
}

