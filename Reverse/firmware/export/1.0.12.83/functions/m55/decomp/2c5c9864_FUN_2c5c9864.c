/* FUN_2c5c9864 @ 0x2c5c9864 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c9864(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  int iStack_24;
  
  iStack_24 = *_LAB_2c5c9b30;
  if (param_4 == 0) {
    if (*_LAB_2c5c9b30 == iStack_24) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar1 = FUN_2c48e424(param_1,_LAB_2c5c9b34,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5c9b54,0x3c,_LAB_2c5c9b58,_LAB_2c5c9b74);
  }
  FUN_2c48e424(iVar1,_LAB_2c5c9b38);
  uVar2 = FUN_2c48de10();
  uStack_48 = 0xffffffff;
  iVar3 = FUN_2c5d6924(uVar2,&uStack_48);
  FUN_2c48e424(iVar1,_LAB_2c5c9b3c);
  FUN_2c48de10();
  FUN_2c48e424(iVar1,_LAB_2c5c9b40);
  FUN_2c48de10();
  FUN_2c48e424(iVar1,_LAB_2c5c9b44);
  iVar4 = func_0x2c5d6900();
  uStack_44 = 0x80000000;
  iVar1 = FUN_2c48e424(iVar1,_LAB_2c5c9b48);
  iVar5 = FUN_2c48e83c();
  if (iVar5 != 0) {
    uStack_44 = *(undefined4 *)(iVar1 + 0x14);
  }
  if ((iVar4 == -0x80000000) || (iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5c9b54,0x6b,_LAB_2c5c9b58,_LAB_2c5c9b68,iVar4,uStack_48);
  }
  *(undefined4 *)(param_4 + 8) = 0;
  **(undefined1 **)(param_4 + 4) = 0;
  FUN_2c5dcca4(&puStack_3c,iVar4);
  iVar1 = FUN_2c5392f4((undefined4 *)(param_4 + 4),puStack_3c,uStack_38);
  if (0x7fffffffU - *(int *)(iVar1 + 4) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_LAB_2c5c9b78);
  }
  FUN_2c5392f4(iVar1,_LAB_2c5c9b4c,2);
  if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5c9b54,0x4e,_LAB_2c5c9b58,_LAB_2c5c9b50,iVar4,uStack_48);
}

