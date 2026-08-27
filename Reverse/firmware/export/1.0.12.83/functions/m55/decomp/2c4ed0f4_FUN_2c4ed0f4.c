/* FUN_2c4ed0f4 @ 0x2c4ed0f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ed0f4(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  
  func_0x2c4fe0a8();
  puVar1 = _LAB_2c4ed2bc;
  FUN_2c60438c();
  func_0x2c4fe0a8();
  uVar3 = FUN_2c606a10();
  func_0x2c4ebddc();
  FUN_2c606abc(uVar3,0x10);
  FUN_2c607048(uVar3,0x2064);
  FUN_2c627e28(uVar3,1);
  FUN_2c606d60(uVar3,0xff000000,0);
  uVar4 = FUN_2c637344(uVar3);
  uVar6 = *(undefined4 *)(param_1 + 4);
  *puVar1 = uVar4;
  FUN_2c638730(uVar4,uVar6);
  FUN_2c606e38(*puVar1,DAT_2c4ed2c0,0);
  FUN_2c606e20(*puVar1,0xffffffff,0);
  FUN_2c607048(*puVar1,0x2064,0x27d1);
  FUN_2c606da8(*puVar1,1,0);
  FUN_2c606d9c(*puVar1,2,0);
  FUN_2c606d84(*puVar1,0xffffffff,0);
  uVar4 = *puVar1;
  FUN_2c606d30(uVar4,5,0);
  FUN_2c606d3c(uVar4,5,0);
  FUN_2c606d18(uVar4,5,0);
  FUN_2c606d24(uVar4,5,0);
  FUN_2c606e5c(*puVar1,2,0);
  lv_obj_add_flag_invalidate(*puVar1,2);
  lv_obj_add_flag_invalidate(*puVar1,4);
  FUN_2c606b6c(*puVar1,0x2e);
  iVar5 = FUN_2c602de4();
  if (iVar5 != 0) {
    FUN_2c602df0();
    FUN_2c602f64(iVar5,*puVar1);
    FUN_2c603110(*puVar1);
    FUN_2c602454(*puVar1,DAT_2c4ed2c4,0xd,0);
    FUN_2c602454(*puVar1,_LAB_2c4ed2c8,0x21,0);
    piVar2 = _LAB_2c4ed2e0;
    puVar1 = _LAB_2c4ed2cc;
    uVar3 = func_0x2c61978c(uVar3);
    *puVar1 = uVar3;
    func_0x2c4ebd8c();
    FUN_2c607048(*puVar1,0x2064);
    FUN_2c606d60(*puVar1,0xff000000,0);
    piVar8 = (int *)*piVar2;
    if ((char)piVar8[1] != '\0') {
      uVar9 = 0;
      uVar7 = 0;
      do {
        uVar9 = uVar9 + 1;
        iVar5 = *piVar8 + uVar7 * 0x10;
        uVar3 = FUN_2c6197ac(*puVar1,0,*(undefined4 *)(iVar5 + 4));
        FUN_2c606d60(uVar3,0xff000000,0);
        FUN_2c606d60(uVar3,DAT_2c4ed2d0,6);
        FUN_2c606e38(uVar3,DAT_2c4ed2c0,0);
        FUN_2c606e20(uVar3,0xffffffff,0);
        FUN_2c606e20(uVar3,0xff000000,6);
        piVar8 = (int *)*piVar2;
        uVar7 = uVar9 & 0xff;
        *(undefined4 *)(iVar5 + 0xc) = uVar3;
      } while (uVar7 < *(byte *)(piVar8 + 1));
    }
    *DAT_2c641564 = DAT_2c4ed2c4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x87,_LAB_2c4ed2dc,_LAB_2c4ed2d8,_LAB_2c4ed2d4);
}

