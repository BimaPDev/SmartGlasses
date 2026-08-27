/* FUN_2c51a078 @ 0x2c51a078 */

int * FUN_2c51a078(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_2c51a214 + 0x88;
  piVar5 = param_1 + 1;
  *param_1 = DAT_2c51a214;
  param_1[1] = iVar4;
  FUN_2c51998c(param_1 + 0x10);
  iVar4 = FUN_2c519fd0(param_2);
  param_1[2] = iVar4;
  param_1[3] = 0;
  iVar4 = lv_mem_alloc(0xb8);
  FUN_2c51e3b8(iVar4,param_1,piVar5);
  param_1[6] = iVar4;
  iVar4 = lv_mem_alloc(0x38);
  FUN_2c51edfc(iVar4,param_1,piVar5);
  param_1[7] = iVar4;
  iVar4 = lv_mem_alloc(0xb8);
  FUN_2c51d81c(iVar4,param_1,piVar5);
  param_1[9] = iVar4;
  iVar4 = lv_mem_alloc(0xa8);
  FUN_2c51b98c(iVar4,param_1,piVar5);
  param_1[10] = iVar4;
  iVar4 = lv_mem_alloc(0x24);
  FUN_2c51f4f8(iVar4,param_1,piVar5);
  param_1[4] = iVar4;
  iVar4 = lv_mem_alloc(0xc4);
  FUN_2c51b094(iVar4,param_1,piVar5);
  param_1[5] = iVar4;
  iVar4 = lv_mem_alloc(0x200);
  FUN_2c51f80c(iVar4,param_1,piVar5);
  param_1[8] = iVar4;
  iVar4 = lv_mem_alloc(0x5c);
  FUN_2c51c858(iVar4,param_1,piVar5);
  param_1[0xb] = iVar4;
  iVar4 = lv_mem_alloc(0x2c);
  FUN_2c51a694(iVar4,param_1,piVar5);
  param_1[0xc] = iVar4;
  iVar4 = lv_mem_alloc(0x14);
  FUN_2c51bfcc(iVar4,param_1,piVar5);
  uVar1 = DAT_2c51a21c;
  uVar3 = *DAT_2c51a218;
  param_1[0xd] = iVar4;
  iVar4 = FUN_2c62bdd8(uVar1,uVar3,param_1);
  param_1[0xe] = iVar4;
  FUN_2c62be40();
  FUN_2c5edec8(1);
  FUN_2c5210a8();
  FUN_2c5210ec();
  iVar4 = FUN_2c5ed958(param_1,DAT_2c51a238,DAT_2c51a234,DAT_2c51a230,DAT_2c51a22c,DAT_2c51a228,
                       DAT_2c51a224,DAT_2c51a220);
  param_1[0xf] = iVar4;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c51a244,0x37,DAT_2c51a250,DAT_2c51a240,DAT_2c51a24c);
  }
  iVar4 = FUN_2c5ee748();
  if (iVar4 != 0) {
    iVar2 = FUN_2c5efa10();
    if (iVar2 != 0) {
      iVar4 = FUN_2c5ef904(iVar4);
      if (iVar4 == 0) {
        iVar4 = param_1[8];
      }
      else {
        iVar4 = param_1[10];
      }
      goto joined_r0x2c51a1b2;
    }
    iVar4 = FUN_2c5ef8fc(iVar4);
    if (iVar4 != 0) {
      iVar4 = param_1[7];
      goto joined_r0x2c51a1b2;
    }
  }
  iVar4 = param_1[4];
joined_r0x2c51a1b2:
  if (iVar4 != 0) {
    if (iVar4 != param_1[3]) {
      FUN_2c5199e0(param_1 + 0x10,param_1[3],iVar4);
      param_1[3] = iVar4;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c51a244,0x62,DAT_2c51a248,DAT_2c51a240,DAT_2c51a23c);
}

