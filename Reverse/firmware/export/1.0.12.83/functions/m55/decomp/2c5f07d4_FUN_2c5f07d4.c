/* FUN_2c5f07d4 @ 0x2c5f07d4 */

void FUN_2c5f07d4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    iVar1 = 5;
    iVar2 = FUN_2c62c45c(6);
    param_2 = DAT_2c5f086c;
  }
  else {
    iVar1 = FUN_2c66c4ec(param_2);
    iVar2 = FUN_2c62c45c(iVar1 + 1);
  }
  if (iVar2 != 0) {
    FUN_2c66c568(iVar2,param_2,iVar1);
    uVar3 = FUN_2c637344(param_1);
    lv_obj_add_flag_invalidate(uVar3,1);
    FUN_2c606e50(uVar3,1,0);
    FUN_2c6388dc(uVar3,0);
    FUN_2c606e20(uVar3,0xff00ff00,0);
    FUN_2c638730(uVar3,iVar2);
    FUN_2c62bea8(iVar2);
    uVar3 = FUN_2c6074f4(uVar3);
    FUN_2c6070bc(param_1,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,s_LI><pG_2c5f0878._0_4_,0x44,DAT_2c5f0874,DAT_2c5f0870);
}

