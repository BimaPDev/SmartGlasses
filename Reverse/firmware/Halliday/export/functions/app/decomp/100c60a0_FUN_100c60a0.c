/* FUN_100c60a0 @ 0x100c60a0 */

undefined4 FUN_100c60a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_100c5d4c(0x200a,1,param_3,param_4,param_1);
  if (iVar1 == 0) {
    uVar3 = 0xffffff97;
  }
  else {
    FUN_10132eaa(iVar1,param_2 != 0);
    local_1c = param_1 + 0x10;
    local_18 = 6;
    local_14 = CONCAT31(local_14._1_3_,(char)param_2);
    iVar2 = FUN_100c196c(iVar1);
    *(int **)(iVar2 * 0xc + DAT_100c60f4 + 4) = &local_1c;
    uVar3 = FUN_100c5e48(0x200a,iVar1,0);
  }
  return uVar3;
}

