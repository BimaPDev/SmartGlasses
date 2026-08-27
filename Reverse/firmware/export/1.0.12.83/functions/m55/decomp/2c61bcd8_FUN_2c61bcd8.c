/* FUN_2c61bcd8 @ 0x2c61bcd8 */

void FUN_2c61bcd8(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = *DAT_2c61be28;
  *(undefined1 *)(param_2 + 0x2c) = uVar1;
  switch(uVar1) {
  case 1:
    FUN_2c627e28(param_2,0);
    break;
  case 2:
    FUN_2c627e28(param_2,8);
    break;
  case 4:
    FUN_2c627e28(param_2,1);
    break;
  case 8:
    FUN_2c627e28(param_2,9);
  }
  FUN_2c607048(param_2,0x2064);
  uVar3 = FUN_2c635d90(param_2);
  uVar4 = FUN_2c606a10(param_2);
  FUN_2c635f18(uVar3,1);
  puVar5 = (undefined4 *)lv_mem_alloc(4);
  uVar2 = DAT_2c61be2c;
  *(undefined4 **)(param_2 + 0x24) = puVar5;
  *puVar5 = uVar2;
  FUN_2c635da8(uVar3,*(undefined4 *)(param_2 + 0x24));
  FUN_2c602454(uVar3,DAT_2c61be30,0x1c,0);
  lv_obj_add_flag_invalidate(uVar3,0x4000);
  FUN_2c602454(uVar4,DAT_2c61be34,0);
  FUN_2c60497c(uVar4,0);
  uVar7 = (uint)*(byte *)(param_2 + 0x2c);
  if (uVar7 != 4) {
    if (uVar7 < 5) {
      if (uVar7 - 1 < 2) {
        FUN_2c607048(uVar3,(int)*DAT_2c61be38,0x2064);
        FUN_2c60710c(uVar4,0x2064);
        FUN_2c627ea0(uVar4,1);
      }
      goto LAB_2c61bd92;
    }
    if (uVar7 != 8) goto LAB_2c61bd92;
  }
  FUN_2c607048(uVar3,0x2064,(int)*DAT_2c61be38);
  FUN_2c6070bc(uVar4,0x2064);
  FUN_2c627ea0(uVar4,1);
LAB_2c61bd92:
  iVar6 = FUN_2c602de4();
  if (iVar6 != 0) {
    FUN_2c602f64(iVar6,uVar3);
  }
  if ((*(byte *)(param_2 + 0x2c) & 0xc) == 0) {
    FUN_2c627e28(uVar4,1);
    FUN_2c6049dc(uVar4,3);
  }
  else {
    FUN_2c627e28(uVar4,0);
    FUN_2c6049c4(uVar4,3);
  }
  lv_obj_add_flag_invalidate(uVar4,0x80);
  FUN_2c606abc(uVar4,0x400);
  return;
}

