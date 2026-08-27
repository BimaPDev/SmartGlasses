/* FUN_2c5afc94 @ 0x2c5afc94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5afc94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = FUN_2c606b94(*(int *)(param_1 + 4),1), iVar1 == 0)) {
    uVar2 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34));
    FUN_2c606b80(uVar2,0x10);
    uVar2 = _LAB_2c5afd20;
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 4),1);
    iVar1 = 0;
    while( true ) {
      iVar4 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x20));
      if (iVar4 <= iVar1) break;
      uVar3 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),iVar1);
      FUN_2c5eba54(uVar3,uVar2);
      iVar1 = iVar1 + 1;
    }
    func_0x2c63e1a4(_LAB_2c5afd24);
    func_0x2c640294(_DAT_2c5afd28);
    func_0x2c5e8ddc();
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_2c5eda50();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5afd34,0x82,_LAB_2c5afd2c,_LAB_2c5afd30,_LAB_2c5afd2c);
  }
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return;
}

