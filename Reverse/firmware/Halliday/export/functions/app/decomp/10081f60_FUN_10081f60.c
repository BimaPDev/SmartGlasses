/* FUN_10081f60 @ 0x10081f60 */

uint FUN_10081f60(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  uVar1 = *(undefined1 *)(*param_1 + 5);
  *(undefined1 *)(*param_1 + 5) = 0x14;
  local_14 = param_2;
  uStack_10 = param_3;
  iVar2 = FUN_10081f04(param_1,&local_18);
  *(undefined1 *)(*param_1 + 5) = uVar1;
  if (iVar2 == 0) {
    iVar2 = FUN_10081ea8(param_1,&local_18,&local_14);
    if (iVar2 == 0) {
      FUN_10119dc2(PTR_s_spinand_chipid__0x_x__chipname____10081fc0,local_18,local_14 + 0x1f);
      uVar3 = (uint)*(byte *)(local_14 + 0x2f);
    }
    else {
      FUN_10119dc2(PTR_s_Can_t_get_flashinfo__10081fbc);
      uVar3 = 0xffffffff;
    }
  }
  else {
    FUN_10119dc2(PTR_s_spinand_get_chipid_err__10081fb8);
    uVar3 = 0xffffffea;
  }
  return uVar3;
}

