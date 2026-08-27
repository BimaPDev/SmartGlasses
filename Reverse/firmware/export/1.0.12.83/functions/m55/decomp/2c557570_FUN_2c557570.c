/* FUN_2c557570 @ 0x2c557570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c557570(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c48e3b8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_2c55700c(iVar1,_LAB_2c5575b4,param_2 + 4,0,param_4);
    FUN_2c55700c(iVar1,_LAB_2c5575b8,param_2 + 0x1c,0);
    uVar2 = 0;
    FUN_2c55700c(iVar1,_LAB_2c5575bc,param_2 + 0x34,0);
  }
  FUN_2c48dea0(iVar1);
  return uVar2;
}

