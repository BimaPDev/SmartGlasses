/* FUN_2c61985c @ 0x2c61985c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c61985c(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_2c6071d8(param_2,*_LAB_2c61997c);
  FUN_2c627e28(param_2,0);
  *(undefined2 *)(param_2 + 0x60) = 0;
  *(byte *)(param_2 + 0x62) = *(byte *)(param_2 + 0x62) & 0xf0;
  FUN_2c62c928(param_2 + 0x54,4);
  uVar3 = FUN_2c606a10(param_2);
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  lv_obj_add_flag_invalidate(uVar3,1);
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  uVar3 = _LAB_2c619980;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  uVar3 = FUN_2c5fefc8(uVar3,param_2);
  FUN_2c5ff0b8();
  FUN_2c60710c(uVar3,0x2064);
  FUN_2c627ea0(uVar3,1);
  FUN_2c627e28(uVar3,1);
  lv_obj_add_flag_invalidate(uVar3,0x4000);
  FUN_2c606abc(uVar3,2);
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  uVar3 = FUN_2c5fefc8(_LAB_2c619984,uVar3);
  FUN_2c5ff0b8();
  FUN_2c607048(uVar3,0x2064,0x27d1);
  FUN_2c627e28(uVar3,0);
  FUN_2c627e50(uVar3,0,2);
  FUN_2c606abc(uVar3,2);
  lv_obj_add_flag_invalidate(uVar3,0x4000);
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  uVar3 = FUN_2c62fe4c(uVar3);
  FUN_2c602454(uVar3,_LAB_2c619988,7,param_2);
  lv_obj_add_flag_invalidate(uVar3,0x4000);
  FUN_2c627e28(uVar3,0);
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  uVar3 = FUN_2c6313f4(uVar3);
  FUN_2c63140c(uVar3,_LAB_2c61998c);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_2 + 0x30));
  lv_obj_add_flag_invalidate(uVar3,1);
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  iVar2 = _LAB_2c619990;
  FUN_2c606bc8();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_2 + 8) + 0x1a);
    if ((bVar1 & 0x3f) == 0x3f) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c602514,0xf9,DAT_2c602510,DAT_2c602518,0x1c,param_2,iVar2,param_2);
    }
    *(byte *)(*(int *)(param_2 + 8) + 0x1a) = bVar1 & 0xc0 | bVar1 + 1 & 0x3f;
    iVar4 = *(int *)(param_2 + 8);
    uVar3 = FUN_2c62bebc(*(undefined4 *)(iVar4 + 0xc),(*(byte *)(iVar4 + 0x1a) & 0x3f) * 0xc);
    *(undefined4 *)(iVar4 + 0xc) = uVar3;
    *(int *)(*(int *)(*(int *)(param_2 + 8) + 0xc) +
            (short)(*(byte *)(*(int *)(param_2 + 8) + 0x1a) & 0x3f) * 0xc + -0xc) = iVar2;
    *(undefined1 *)
     ((short)(*(byte *)(*(int *)(param_2 + 8) + 0x1a) & 0x3f) * 0xc +
      *(int *)(*(int *)(param_2 + 8) + 0xc) + -4) = 0x1c;
    *(int *)((short)(*(byte *)(*(int *)(param_2 + 8) + 0x1a) & 0x3f) * 0xc +
             *(int *)(*(int *)(param_2 + 8) + 0xc) + -8) = param_2;
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0xc) +
            (short)(*(byte *)(*(int *)(param_2 + 8) + 0x1a) & 0x3f) * 0xc + -0xc;
  }
  return iVar2;
}

