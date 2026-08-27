/* FUN_2c54cf40 @ 0x2c54cf40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c54cf40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c48e42c(param_1,_LAB_2c54d00c,param_3,param_4,param_4);
  iVar2 = FUN_2c54ee98(uVar1,_LAB_2c54d010,param_2 + 0x60,0);
  if ((((((-1 < iVar2) && (iVar2 = FUN_2c54ee24(param_1,_LAB_2c54d014,param_2 + 100,0), -1 < iVar2))
        && (iVar2 = FUN_2c54ee24(param_1,_LAB_2c54d018,param_2 + 0x65,0), -1 < iVar2)) &&
       ((iVar2 = FUN_2c54ee98(param_1,_LAB_2c54d01c,param_2 + 0x68,0), -1 < iVar2 &&
        (iVar2 = FUN_2c54ee98(param_1,_LAB_2c54d020,param_2 + 0x6c,0), -1 < iVar2)))) &&
      ((iVar2 = FUN_2c54ee98(param_1,_LAB_2c54d024,param_2 + 0x70,0), -1 < iVar2 &&
       ((iVar2 = FUN_2c54f0ec(param_1,_LAB_2c54d028,param_2 + 0x74,1), -1 < iVar2 &&
        (iVar2 = FUN_2c54ee98(param_1,_LAB_2c54d02c,param_2 + 0x8c,0), -1 < iVar2)))))) &&
     (iVar2 = FUN_2c54ee98(param_1,_LAB_2c54d030,param_2 + 0x90,0), -1 < iVar2)) {
    iVar2 = FUN_2c54ee24(param_1,_LAB_2c54d034,param_2 + 0x94,0);
    return iVar2 >> 0x1f;
  }
  return -1;
}

