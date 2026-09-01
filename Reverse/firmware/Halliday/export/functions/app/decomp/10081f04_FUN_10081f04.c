/* FUN_10081f04 @ 0x10081f04 */

undefined4 FUN_10081f04(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_1c;
  undefined4 uStack_18;
  
  puVar1 = PTR_s_Can_t_get_spinand_id__retry__d___10081f54;
  iVar4 = 0;
  uVar3 = param_1;
  piStack_1c = param_2;
  uStack_18 = param_3;
  do {
    iVar2 = thunk_FUN_101204b6(param_1);
    *param_2 = iVar2;
    if (iVar2 - 1U < 0xfffffffd || iVar2 + 2 == 0) {
      iVar4 = FUN_10081ea8(param_1,param_2,&piStack_1c,iVar2 + 2,uVar3);
      uVar3 = 0;
      if (iVar4 != 0) {
        FUN_10119dc2(PTR_s_Get_chipid___0x_x__But_Can_t_get_10081f5c,*param_2);
LAB_10081f32:
        uVar3 = 0xffffffff;
      }
      return uVar3;
    }
    if (iVar4 == 3) {
      FUN_10119dc2(PTR_s_Can_t_get_spinand_id__Please_che_10081f58);
      goto LAB_10081f32;
    }
    iVar4 = iVar4 + 1;
    FUN_10119dc2(puVar1,iVar4);
  } while( true );
}

