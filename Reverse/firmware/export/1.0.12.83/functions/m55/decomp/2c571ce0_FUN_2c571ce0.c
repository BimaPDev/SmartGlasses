/* FUN_2c571ce0 @ 0x2c571ce0 */

int FUN_2c571ce0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c48e42c(param_1,DAT_2c571d5c,param_3,param_4,param_4);
  iVar2 = FUN_2c556db0(uVar1,DAT_2c571d60,param_2 + 8,0);
  if ((((-1 < iVar2) && (iVar2 = FUN_2c556d3c(param_1,DAT_2c571d64,param_2 + 0xc,0), -1 < iVar2)) &&
      (iVar2 = FUN_2c556db0(param_1,DAT_2c571d68,param_2 + 0x10,0), -1 < iVar2)) &&
     ((iVar2 = FUN_2c556db0(param_1,DAT_2c571d6c,param_2 + 0x14,0), -1 < iVar2 &&
      (iVar2 = FUN_2c556db0(param_1,DAT_2c571d70,param_2 + 0x18,0), -1 < iVar2)))) {
    iVar2 = FUN_2c55700c(param_1,DAT_2c571d74,param_2 + 0x1c,1);
    return iVar2 >> 0x1f;
  }
  return -1;
}

